#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "contactmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Renamed slots to prevent double signal-slot connections
    void handleAddButton();    // Renamed from on_addButton_clicked
    void handleUpdateButton(); // Renamed from on_updateButton_clicked
    void handleDeleteButton(); // Renamed from on_deleteButton_clicked
    void handleCallButton();   // Renamed from on_callButton_clicked
    void handleSearchButton(); // Renamed from on_searchButton_clicked

public slots:
    void showRecentContacts();

private:
    Ui::MainWindow *ui;
    ContactManager contactManager;

    // Flags to prevent double execution
    bool isAdding;
    bool isUpdating;
    bool isDeleting;
    bool isCalling;
    bool isSearching;
};

#endif // MAINWINDOW_H
