#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactmanager.h"  // Include your ContactManager header
#include <QDebug>            // For debug messages
#include <QMessageBox>
#include <QPushButton>
#include <QFont>             // For custom fonts
#include <QPalette>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), isAdding(false), isUpdating(false), isDeleting(false), isCalling(false), isSearching(false)
{
    ui->setupUi(this);

    // Remove manual connections as autoconnect will handle this
    // Alternatively, if you want to keep manual connections, rename the slots as done below:
    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::handleAddButton);
    connect(ui->updateButton, &QPushButton::clicked, this, &MainWindow::handleUpdateButton);
    connect(ui->deleteButton, &QPushButton::clicked, this, &MainWindow::handleDeleteButton);
    connect(ui->callButton, &QPushButton::clicked, this, &MainWindow::handleCallButton);
    connect(ui->searchButton, &QPushButton::clicked, this, &MainWindow::handleSearchButton);
    connect(ui->showRecentContactsButton, &QPushButton::clicked, this, &MainWindow::showRecentContacts);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showRecentContacts()
{
    ui->resultList->clear();
    contactManager.splayTree.displayRecentCalls(ui->resultList, contactManager.trie);
}

void MainWindow::handleAddButton()  // Renamed from on_addButton_clicked
{
    if (isAdding) return;  // Prevent double execution
    isAdding = true;

    QString nameInput = ui->nameInput->text();
    QString phoneInput = ui->phoneInput->text();
    std::string contactName = nameInput.toStdString();
    std::string contactPhone = phoneInput.toStdString();

    if (!contactName.empty() && !contactPhone.empty()) {
        contactManager.addContact(contactName, contactPhone);
        ui->resultList->addItem("Added: " + nameInput);
    }

    isAdding = false;
}

void MainWindow::handleUpdateButton()  // Renamed from on_updateButton_clicked
{
    if (isUpdating) return;
    isUpdating = true;

    QString nameInput = ui->nameInput->text();
    QString phoneInput = ui->phoneInput->text();
    std::string contactName = nameInput.toStdString();
    std::string contactPhone = phoneInput.toStdString();

    if (!contactName.empty() && !contactPhone.empty()) {
        contactManager.updateContact(contactName, contactPhone);
        ui->resultList->addItem("Updated: " + nameInput);
    }

    isUpdating = false;
}

void MainWindow::handleDeleteButton()  // Renamed from on_deleteButton_clicked
{
    if (isDeleting) return;
    isDeleting = true;

    QString nameInput = ui->nameInput->text();
    std::string contactName = nameInput.toStdString();

    if (!contactName.empty()) {
        contactManager.deleteContact(contactName);
        ui->resultList->addItem("Deleted: " + nameInput);
    }

    isDeleting = false;
}

void MainWindow::handleCallButton()  // Renamed from on_callButton_clicked
{
    if (isCalling) return;
    isCalling = true;

    QString contactNameInput = ui->nameInput->text();

    if (contactNameInput.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter a contact name.");
    } else {
        std::string phoneNumber = contactManager.trie.getPhoneNumberByName(contactNameInput.toStdString());

        if (phoneNumber.empty()) {
            QMessageBox::warning(this, "Error", "Contact not found or has no phone number.");
        } else {
            contactManager.splayTree.callContact(contactNameInput.toStdString(), phoneNumber);
            QMessageBox::information(this, "Call", QString("Called: %1 : %2").arg(contactNameInput).arg(QString::fromStdString(phoneNumber)));
        }
    }

    isCalling = false;
}

void MainWindow::handleSearchButton()  // Renamed from on_searchButton_clicked
{
    if (isSearching) return;
    isSearching = true;

    QString searchInput = ui->searchInput->text();

    if (searchInput.isEmpty()) {
        ui->resultList->clear();
    } else {
        ui->resultList->clear();
        bool isNumeric = searchInput.toStdString().find_first_not_of("0123456789") == std::string::npos;

        if (isNumeric) {
            std::string phonePrefix = searchInput.toStdString();
            contactManager.searchByPhoneNumberPrefix(phonePrefix, ui->resultList);
        } else {
            std::string namePrefix = searchInput.toStdString();
            contactManager.searchByPrefix(namePrefix, ui->resultList);

            if (ui->resultList->count() == 0) {
                ui->resultList->addItem("No contacts found.");
            }
        }
    }

    isSearching = false;
}
