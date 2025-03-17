#ifndef CONTACTMANAGER_H
#define CONTACTMANAGER_H

#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <QListWidget>

class TrieNode {
public:
    TrieNode* children[26];
    bool isEndOfName;
    std::string phoneNumber;

    TrieNode() {
        isEndOfName = false;
        phoneNumber = "";
        for (int i = 0; i < 26; i++)
            children[i] = nullptr; // Initialize children to nullptr
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    // Insert a new contact into the trie
    void insert(const std::string& name, const std::string& phoneNumber) {
        TrieNode* node = root;
        for (char ch : name) {
            if (!node->children[ch - 'a'])
                node->children[ch - 'a'] = new TrieNode();

            node = node->children[ch - 'a'];
        }
        node->isEndOfName = true;
        node->phoneNumber = phoneNumber;
    }

    // Update an existing contact
    void update(const std::string& name, const std::string& newPhoneNumber) {
        TrieNode* node = root;
        for (char ch : name) {
            if (!node->children[ch - 'a'])
                return; // Contact not found

            node = node->children[ch - 'a'];
        }
        if (node->isEndOfName) {
            node->phoneNumber = newPhoneNumber; // Update phone number
        }
    }

    // Search by name prefix and display in QListWidget
    int suggestContacts(const std::string& prefix, QListWidget* resultList) {
        TrieNode* node = root;
        for (char ch : prefix) {
            if (!node->children[ch - 'a'])
                return 0;  // No contacts found with this prefix

            node = node->children[ch - 'a'];
        }
        displayContacts(node, prefix, resultList);
        return 1;
    }

    // Search by phone number prefix and display in QListWidget
    bool searchByPhoneNumberPrefix(const std::string& phonePrefix, QListWidget* resultList) {
        return searchByPhonePrefixHelper(root, "", phonePrefix, resultList);
    }

    // Delete a contact from the trie
    void deleteContact(const std::string& name) {
        deleteHelper(root, name, 0);
    }

    // Retrieve the phone number associated with the given name
    std::string getPhoneNumberByName(const std::string& name) {
        TrieNode* node = root;
        for (char ch : name) {
            if (!node->children[ch - 'a'])
                return ""; // Contact not found

            node = node->children[ch - 'a'];
        }
        if (node->isEndOfName) {
            return node->phoneNumber; // Return the associated phone number
        }
        return ""; // Return empty string if contact is not found
    }

private:
    // Recursive helper to display contacts
    void displayContacts(TrieNode* node, const std::string& prefix, QListWidget* resultList) {
        if (node->isEndOfName) {
            resultList->addItem(QString::fromStdString(prefix + ": " + node->phoneNumber));
        }

        for (int i = 0; i < 26; i++) {
            if (node->children[i]) {
                displayContacts(node->children[i], prefix + char(i + 'a'), resultList);
            }
        }
    }

    // Recursive helper to search by phone number prefix
    bool searchByPhonePrefixHelper(TrieNode* node, const std::string& currentName, const std::string& phonePrefix, QListWidget* resultList) {
        if (node->isEndOfName && node->phoneNumber.rfind(phonePrefix, 0) == 0) {  // Matches prefix
            resultList->addItem(QString::fromStdString(currentName + ": " + node->phoneNumber));
        }

        for (int i = 0; i < 26; i++) {
            if (node->children[i]) {
                searchByPhonePrefixHelper(node->children[i], currentName + char(i + 'a'), phonePrefix, resultList);
            }
        }

        return true;
    }

    // Helper to delete a contact
    bool deleteHelper(TrieNode* node, const std::string& name, int depth) {
        if (!node)
            return false;

        if (depth == name.size()) {
            if (node->isEndOfName) {
                node->isEndOfName = false;
                node->phoneNumber = "";
            }
            return isEmpty(node);
        }

        int index = name[depth] - 'a';
        if (deleteHelper(node->children[index], name, depth + 1)) {
            delete node->children[index];
            node->children[index] = nullptr;
            return !node->isEndOfName && isEmpty(node);
        }

        return false;
    }

    // Check if a node is empty
    bool isEmpty(TrieNode* node) {
        for (int i = 0; i < 26; i++) {
            if (node->children[i])
                return false;
        }
        return true;
    }
};

class SplayTreeNode {
public:
    std::string name;
    std::string phoneNumber; // Store phone number
    SplayTreeNode* left;
    SplayTreeNode* right;

    SplayTreeNode(const std::string& contactName, const std::string& contactPhoneNumber)
        : name(contactName), phoneNumber(contactPhoneNumber), left(nullptr), right(nullptr) {}
};

class SplayTree {
public:
    SplayTreeNode* root;
    std::deque<std::string> recentCalls;

    SplayTree() : root(nullptr) {}

    // Call a contact (insert it into the splay tree)
    void callContact(const std::string& name, const std::string& phoneNumber) {
        // Remove the contact from the deque if it's already there
        recentCalls.erase(std::remove(recentCalls.begin(), recentCalls.end(), name), recentCalls.end());

        // Add the contact to the front (most recent)
        recentCalls.push_front(name);

        // Keep deque limited to the last 10 contacts
        if (recentCalls.size() > 10) {
            recentCalls.pop_back();
        }

        // Insert or update the contact in the SplayTree
        root = insert(root, name, phoneNumber);
    }

    void displayRecentCalls(QListWidget* resultList, Trie& trie) {
        resultList->clear(); // Clear the list first
        if (recentCalls.empty()) {
            resultList->addItem("No recent calls.");
        } else {
            for (const auto& name : recentCalls) {
                std::string phoneNumber = trie.getPhoneNumberByName(name); // Get phone number from Trie
                if (!phoneNumber.empty()) { // Ensure phone number is found
                    resultList->addItem(QString::fromStdString(name + ": " + phoneNumber)); // Add name and phone number
                } else {
                    resultList->addItem(QString::fromStdString(name + ": No phone number found"));
                }
            }
        }
    }


    SplayTreeNode* deleteContact(SplayTreeNode* root, const std::string& name) {
        if (!root) return nullptr;

        root = splay(root, name); // Splay the contact you want to delete to the root
        if (root->name != name) return root; // If the contact doesn't exist, return

        // Now root is the contact to delete
        if (!root->left) {
            SplayTreeNode* newRoot = root->right;
            delete root;
            return newRoot;
        } else {
            SplayTreeNode* newRoot = splay(root->left, name);
            newRoot->right = root->right;
            delete root;
            return newRoot;
        }
    }

    // Insert a new contact
    SplayTreeNode* insert(SplayTreeNode* root, const std::string& name, const std::string& phoneNumber) {
        if (!root) return new SplayTreeNode(name, phoneNumber);

        root = splay(root, name);
        if (root->name == name) {
            return root; // Contact already exists
        }

        SplayTreeNode* newNode = new SplayTreeNode(name, phoneNumber);
        if (name < root->name) {
            newNode->right = root;
            newNode->left = root->left;
            root->left = nullptr;
            return newNode; // New contact becomes the root
        } else {
            newNode->left = root;
            newNode->right = root->right;
            root->right = nullptr;
            return newNode; // New contact becomes the root
        }
    }

private:
    // Splay the given node to the root
    SplayTreeNode* splay(SplayTreeNode* root, const std::string& name) {
        if (!root || root->name == name)
            return root;

        if (name < root->name) {
            if (!root->left)
                return root;

            if (name < root->left->name) {
                root->left->left = splay(root->left->left, name);
                root = rightRotate(root);
            } else if (name > root->left->name) {
                root->left->right = splay(root->left->right, name);
                if (root->left->right)
                    root->left = leftRotate(root->left);
            }
            return (root->left == nullptr) ? root : rightRotate(root);
        } else {
            if (!root->right)
                return root;

            if (name > root->right->name) {
                root->right->right = splay(root->right->right, name);
                root = leftRotate(root);
            } else if (name < root->right->name) {
                root->right->left = splay(root->right->left, name);
                if (root->right->left)
                    root->right = rightRotate(root->right);
            }
            return (root->right == nullptr) ? root : leftRotate(root);
        }
    }

    // Left rotate the given node
    SplayTreeNode* leftRotate(SplayTreeNode* root) {
        SplayTreeNode* newRoot = root->right;
        root->right = newRoot->left;
        newRoot->left = root;
        return newRoot;
    }

    // Right rotate the given node
    SplayTreeNode* rightRotate(SplayTreeNode* root) {
        SplayTreeNode* newRoot = root->left;
        root->left = newRoot->right;
        newRoot->right = root;
        return newRoot;
    }

    // Retrieve the phone number associated with the given name
    std::string getPhoneNumberByName(const std::string& name) {
        SplayTreeNode* splayedNode = splay(root, name); // Splay the node
        return (splayedNode && splayedNode->name == name) ? splayedNode->phoneNumber : ""; // Return the phone number if found
    }
};

class ContactManager {
public:
    Trie trie;
    SplayTree splayTree;

    // Add a new contact
    void addContact(const std::string& name, const std::string& phoneNumber) {
        trie.insert(name, phoneNumber);
        splayTree.callContact(name, phoneNumber); // Call the contact to add to recent calls
    }

    // Update a contact
    void updateContact(const std::string& name, const std::string& newPhoneNumber) {
        trie.update(name, newPhoneNumber);
        splayTree.callContact(name, newPhoneNumber); // Call the contact to add to recent calls
    }

    // Delete a contact
    /*void deleteContact(const std::string& name) {
        trie.deleteContact(name);
        //splayTree.displayRecentCalls(resultList); // Update the recent calls display
    }*/
    void deleteContact(const std::string& name) {
        // Delete from Trie
        trie.deleteContact(name);

        // Remove from recent calls
        splayTree.recentCalls.erase(std::remove(splayTree.recentCalls.begin(), splayTree.recentCalls.end(), name), splayTree.recentCalls.end());

        // You may also need to remove the contact from the SplayTree
        splayTree.root = splayTree.deleteContact(splayTree.root, name); // Implement this method in SplayTree if needed
    }


    // Show recent contacts
    // Show recent contacts
    void showRecentContacts(QListWidget* resultList) {
        splayTree.displayRecentCalls(resultList, trie); // Pass Trie to get correct phone numbers
    }



    // Suggest contacts by name prefix
    void suggestContactsByName(const std::string& prefix, QListWidget* resultList) {
        trie.suggestContacts(prefix, resultList);
    }

    // Suggest contacts by phone number prefix
    void suggestContactsByPhoneNumber(const std::string& phonePrefix, QListWidget* resultList) {
        trie.searchByPhoneNumberPrefix(phonePrefix, resultList);
    }

    void searchByPhoneNumberPrefix(const std::string& phonePrefix, QListWidget* resultList) {
        resultList->clear();
        trie.searchByPhoneNumberPrefix(phonePrefix, resultList); // Correctly call the Trie method
    }
    void searchByPrefix(const std::string& prefix, QListWidget* resultList) {
        resultList->clear();
        trie.suggestContacts(prefix, resultList); // Call the Trie method to suggest contacts
    }

private:
    QListWidget* resultList; // Assuming resultList is passed in some method
};

#endif // CONTACTMANAGER_H
