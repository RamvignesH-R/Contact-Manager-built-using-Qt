/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *nameInput;
    QLineEdit *phoneInput;
    QLineEdit *searchInput;
    QPushButton *addButton;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QPushButton *callButton;
    QPushButton *searchButton;
    QListWidget *resultList;
    QPushButton *showRecentContactsButton;
    QLabel *titleLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(false);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("/* Main Window */\n"
"QMainWindow {\n"
"    background-color: #e0f2f9; /* Soft light blue-grey background for a fresh, modern look */\n"
"    color: #333; /* Darker grey for better contrast */\n"
"    font-family: 'Arial', sans-serif; /* Clean, professional font */\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 10px; /* Rounded corners for the main window */\n"
"    padding: 20px; /* Padding for overall layout */\n"
"}\n"
"\n"
"/* Title Bar */\n"
"QWidget#titleBar {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #0056b3, stop:1 #007BFF); /* Gradient background */\n"
"    color: white; /* White text */\n"
"    font-size: 20px; /* Larger font for title */\n"
"    font-weight: bold; /* Bold font for emphasis */\n"
"    padding: 15px; /* Extra padding for better spacing */\n"
"    border-bottom: 2px solid #0056b3; /* Stylish bottom border */\n"
"}\n"
"\n"
"/* Button Styling */\n"
"QPushButton {\n"
"    background-color: #007BFF; /* Standard blue */\n"
"    color: white;\n"
""
                        "    border-radius: 8px;\n"
"    padding: 12px 24px; /* Extra padding for a bolder look */\n"
"    font-size: 16px;\n"
"    font-weight: bold; /* Bold text for stronger call to action */\n"
"    border: none;\n"
"    box-shadow: 0px 3px 10px rgba(0, 123, 255, 0.3); /* Drop shadow for depth */\n"
"    transition: background-color 0.3s ease, box-shadow 0.3s ease;\n"
"}\n"
"\n"
"QP\n"
""));
        MainWindow->setTabShape(QTabWidget::TabShape::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        nameInput = new QLineEdit(centralwidget);
        nameInput->setObjectName("nameInput");
        nameInput->setGeometry(QRect(130, 60, 301, 41));
        nameInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 12px; /* Slightly increased padding for comfort */\n"
"    border: 1px solid #007BFF; /* More vibrant border for better visibility */\n"
"    border-radius: 6px; /* Softer rounded corners */\n"
"    font-size: 14px; /* Larger font for better readability */\n"
"    color: #333; /* Darker text color for good contrast */\n"
"    background-color: #f9f9f9; /* Subtle grey background for softness */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #0056b3; /* Stronger blue on focus */\n"
"    background-color: #ffffff; /* Brighten background on focus */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #666; /* Darker placeholder for better visibility */\n"
"    font-size: 13px; /* Slightly larger placeholder text */\n"
"}\n"
""));
        nameInput->setClearButtonEnabled(true);
        phoneInput = new QLineEdit(centralwidget);
        phoneInput->setObjectName("phoneInput");
        phoneInput->setGeometry(QRect(130, 110, 301, 41));
        phoneInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 12px; /* Slightly increased padding for comfort */\n"
"    border: 1px solid #007BFF; /* More vibrant border for better visibility */\n"
"    border-radius: 6px; /* Softer rounded corners */\n"
"    font-size: 14px; /* Larger font for better readability */\n"
"    color: #333; /* Darker text color for good contrast */\n"
"    background-color: #f9f9f9; /* Subtle grey background for softness */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #0056b3; /* Stronger blue on focus */\n"
"    background-color: #ffffff; /* Brighten background on focus */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #666; /* Darker placeholder for better visibility */\n"
"    font-size: 13px; /* Slightly larger placeholder text */\n"
"}\n"
""));
        phoneInput->setClearButtonEnabled(true);
        searchInput = new QLineEdit(centralwidget);
        searchInput->setObjectName("searchInput");
        searchInput->setGeometry(QRect(70, 210, 321, 41));
        searchInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    padding: 12px; /* Slightly increased padding for comfort */\n"
"    border: 1px solid #007BFF; /* More vibrant border for better visibility */\n"
"    border-radius: 6px; /* Softer rounded corners */\n"
"    font-size: 14px; /* Larger font for better readability */\n"
"    color: #333; /* Darker text color for good contrast */\n"
"    background-color: #f9f9f9; /* Subtle grey background for softness */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #0056b3; /* Stronger blue on focus */\n"
"    background-color: #ffffff; /* Brighten background on focus */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #666; /* Darker placeholder for better visibility */\n"
"    font-size: 13px; /* Slightly larger placeholder text */\n"
"}\n"
""));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(580, 70, 141, 31));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 123, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        addButton->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setBold(true);
        addButton->setFont(font1);
        addButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF; /* Primary color */\n"
"    color: white;\n"
"    border-radius: 8px; /* Rounded corners */\n"
"    padding: 10px 20px; /* Vertical and horizontal padding */\n"
"    font-size: 10px; /* Font size */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Darker shade on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003f7f; /* Even darker on press */\n"
"}\n"
""));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ContactNew));
        addButton->setIcon(icon);
        updateButton = new QPushButton(centralwidget);
        updateButton->setObjectName("updateButton");
        updateButton->setGeometry(QRect(580, 110, 141, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        updateButton->setPalette(palette1);
        updateButton->setFont(font1);
        updateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF; /* Primary color */\n"
"    color: white;\n"
"    border-radius: 8px; /* Rounded corners */\n"
"    padding: 10px 20px; /* Vertical and horizontal padding */\n"
"    font-size: 10px; /* Font size */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Darker shade on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003f7f; /* Even darker on press */\n"
"}\n"
""));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::SyncSynchronizing));
        updateButton->setIcon(icon1);
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(580, 150, 141, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        deleteButton->setPalette(palette2);
        deleteButton->setFont(font1);
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF; /* Primary color */\n"
"    color: white;\n"
"    border-radius: 8px; /* Rounded corners */\n"
"    padding: 10px 20px; /* Vertical and horizontal padding */\n"
"    font-size: 10px; /* Font size */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Darker shade on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003f7f; /* Even darker on press */\n"
"}\n"
""));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        deleteButton->setIcon(icon2);
        callButton = new QPushButton(centralwidget);
        callButton->setObjectName("callButton");
        callButton->setGeometry(QRect(130, 160, 111, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        callButton->setPalette(palette3);
        callButton->setFont(font1);
        callButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF; /* Primary color */\n"
"    color: white;\n"
"    border-radius: 8px; /* Rounded corners */\n"
"    padding: 10px 20px; /* Vertical and horizontal padding */\n"
"    font-size: 10px; /* Font size */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Darker shade on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003f7f; /* Even darker on press */\n"
"}\n"
""));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::CallStart));
        callButton->setIcon(icon3);
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(430, 220, 91, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        searchButton->setPalette(palette4);
        searchButton->setFont(font1);
        searchButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF; /* Primary color */\n"
"    color: white;\n"
"    border-radius: 8px; /* Rounded corners */\n"
"    padding: 10px 20px; /* Vertical and horizontal padding */\n"
"    font-size: 10px; /* Font size */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Darker shade on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003f7f; /* Even darker on press */\n"
"}\n"
""));
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::EditFind));
        searchButton->setIcon(icon4);
        resultList = new QListWidget(centralwidget);
        resultList->setObjectName("resultList");
        resultList->setGeometry(QRect(70, 260, 651, 291));
        resultList->setStyleSheet(QString::fromUtf8("/* List Widget Styling */\n"
"QListWidget {\n"
"    background-color: #f1f7fa; /* Soft light blue background to blend with the main window */\n"
"    border: 1px solid #007BFF; /* Subtle blue border to match buttons */\n"
"    border-radius: 6px; /* Rounded corners for a modern look */\n"
"    padding: 5px; /* Padding inside the list */\n"
"    font-size: 14px; /* Consistent font size */\n"
"}\n"
"\n"
"/* Regular Item Styling */\n"
"QListWidget::item {\n"
"    padding: 10px; /* Spacing around list items */\n"
"    background-color: #f9f9f9; /* Slightly lighter background for items */\n"
"    color: #333; /* Dark text for readability */\n"
"    border-bottom: 1px solid #ddd; /* Subtle bottom border between items */\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: #e0f2f9; /* Light blue hover effect to complement the window */\n"
"    color: #007BFF; /* Blue text on hover */\n"
"}\n"
"\n"
"/* Selected Item Styling */\n"
"QListWidget::item:selected {\n"
"    background-color: #007BFF; /* Solid b"
                        "lue for selected items */\n"
"    color: white; /* White text for contrast */\n"
"    border-radius: 4px; /* Rounded corners for selected items */\n"
"    font-weight: bold; /* Bold text for emphasis */\n"
"}\n"
"\n"
"/* Alternate Row Styling */\n"
"QListWidget::item:nth-child(even) {\n"
"    background-color: #eaf4fb; /* Alternate row shading for better readability */\n"
"}\n"
"\n"
"/* Scrollbar Styling for List Widget */\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: #f1f7fa; /* Match the list widget background */\n"
"    width: 12px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #007BFF; /* Blue handle to match selected items */\n"
"    border-radius: 6px; /* Rounded handle */\n"
"    min-height: 20px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    background: none;\n"
"}\n"
""));
        showRecentContactsButton = new QPushButton(centralwidget);
        showRecentContactsButton->setObjectName("showRecentContactsButton");
        showRecentContactsButton->setGeometry(QRect(550, 220, 161, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        showRecentContactsButton->setPalette(palette5);
        showRecentContactsButton->setFont(font1);
        showRecentContactsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007BFF; /* Primary color */\n"
"    color: white;\n"
"    border-radius: 8px; /* Rounded corners */\n"
"    padding: 10px 20px; /* Vertical and horizontal padding */\n"
"    font-size: 10px; /* Font size */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Darker shade on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #003f7f; /* Even darker on press */\n"
"}\n"
""));
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        showRecentContactsButton->setIcon(icon5);
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(240, 10, 311, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setWeight(QFont::DemiBold);
        titleLabel->setFont(font2);
        titleLabel->setStyleSheet(QString::fromUtf8("/* Title Label */\n"
"QLabel#titleLabel {\n"
"    color: #666666; /* Light grey for subtle contrast */\n"
"    font-family: 'Arial', sans-serif;\n"
"    font-size: 28px; /* Slightly larger for emphasis */\n"
"    font-weight: 600; /* Semi-bold to make it stand out */\n"
"    letter-spacing: 1px; /* Add spacing between letters for a refined look */\n"
"    padding: 5px; /* Light padding for spacing */\n"
"    text-align: center; /* Center the text */\n"
"}\n"
""));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        nameInput->setText(QString());
        nameInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Contact Name ", nullptr));
        phoneInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Phone Number", nullptr));
        searchInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search Contact (prefix)", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add Contact", nullptr));
        updateButton->setText(QCoreApplication::translate("MainWindow", "Update Contact", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Delete Contact", nullptr));
        callButton->setText(QCoreApplication::translate("MainWindow", "Call Contact", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        showRecentContactsButton->setText(QCoreApplication::translate("MainWindow", "Show Recent Contacts", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "Contact Manager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
