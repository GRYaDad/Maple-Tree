/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionChange_Library;
    QAction *actionDownload_Title;
    QAction *actionDecrypt_Content;
    QAction *actionVerbose;
    QAction *actionUpdate;
    QAction *actionDLC;
    QAction *actionBackup;
    QAction *actionImport;
    QAction *actionIntegrateCemu;
    QAction *actionConfigTemporary;
    QAction *actionConfigPersistent;
    QAction *actionRefreshLibrary;
    QAction *actionOffline_Mode;
    QAction *actionClear_Settings;
    QAction *actionCovertArt;
    QAction *actionCompress;
    QAction *actionDecompress;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget;
    QWidget *tab_3;
    QLineEdit *searchInput;
    QListWidget *titlelistWidget;
    QComboBox *regionBox;
    QWidget *tab_2;
    QTextEdit *textEdit;
    QProgressBar *progressBar;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuLog;
    QMenu *menuConfig;
    QMenu *menuGame_Library;
    QMenu *menuContent;
    QMenu *menuDownload;
    QMenu *menuCemu;
    QMenu *menuSave_Data;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(882, 510);
        MainWindow->setMinimumSize(QSize(854, 510));
        MainWindow->setMaximumSize(QSize(906, 510));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionChange_Library = new QAction(MainWindow);
        actionChange_Library->setObjectName(QString::fromUtf8("actionChange_Library"));
        actionDownload_Title = new QAction(MainWindow);
        actionDownload_Title->setObjectName(QString::fromUtf8("actionDownload_Title"));
        actionDecrypt_Content = new QAction(MainWindow);
        actionDecrypt_Content->setObjectName(QString::fromUtf8("actionDecrypt_Content"));
        actionDecrypt_Content->setCheckable(false);
        actionVerbose = new QAction(MainWindow);
        actionVerbose->setObjectName(QString::fromUtf8("actionVerbose"));
        actionVerbose->setCheckable(true);
        actionVerbose->setEnabled(true);
        actionUpdate = new QAction(MainWindow);
        actionUpdate->setObjectName(QString::fromUtf8("actionUpdate"));
        actionUpdate->setEnabled(true);
        actionDLC = new QAction(MainWindow);
        actionDLC->setObjectName(QString::fromUtf8("actionDLC"));
        actionDLC->setEnabled(true);
        actionBackup = new QAction(MainWindow);
        actionBackup->setObjectName(QString::fromUtf8("actionBackup"));
        actionBackup->setEnabled(false);
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionImport->setEnabled(false);
        actionIntegrateCemu = new QAction(MainWindow);
        actionIntegrateCemu->setObjectName(QString::fromUtf8("actionIntegrateCemu"));
        actionIntegrateCemu->setCheckable(true);
        actionIntegrateCemu->setEnabled(true);
        actionConfigTemporary = new QAction(MainWindow);
        actionConfigTemporary->setObjectName(QString::fromUtf8("actionConfigTemporary"));
        actionConfigTemporary->setCheckable(true);
        actionConfigPersistent = new QAction(MainWindow);
        actionConfigPersistent->setObjectName(QString::fromUtf8("actionConfigPersistent"));
        actionConfigPersistent->setCheckable(true);
        actionConfigPersistent->setChecked(false);
        actionRefreshLibrary = new QAction(MainWindow);
        actionRefreshLibrary->setObjectName(QString::fromUtf8("actionRefreshLibrary"));
        actionOffline_Mode = new QAction(MainWindow);
        actionOffline_Mode->setObjectName(QString::fromUtf8("actionOffline_Mode"));
        actionOffline_Mode->setCheckable(true);
        actionClear_Settings = new QAction(MainWindow);
        actionClear_Settings->setObjectName(QString::fromUtf8("actionClear_Settings"));
        actionCovertArt = new QAction(MainWindow);
        actionCovertArt->setObjectName(QString::fromUtf8("actionCovertArt"));
        actionCovertArt->setCheckable(false);
        actionCompress = new QAction(MainWindow);
        actionCompress->setObjectName(QString::fromUtf8("actionCompress"));
        actionDecompress = new QAction(MainWindow);
        actionDecompress->setObjectName(QString::fromUtf8("actionDecompress"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 595, 415));
        tabWidget->setUsesScrollButtons(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        listWidget = new QListWidget(tab);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 571, 371));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        searchInput = new QLineEdit(tab_3);
        searchInput->setObjectName(QString::fromUtf8("searchInput"));
        searchInput->setGeometry(QRect(10, 10, 501, 22));
        titlelistWidget = new QListWidget(tab_3);
        titlelistWidget->setObjectName(QString::fromUtf8("titlelistWidget"));
        titlelistWidget->setGeometry(QRect(10, 40, 571, 341));
        titlelistWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        regionBox = new QComboBox(tab_3);
        regionBox->addItem(QString());
        regionBox->addItem(QString());
        regionBox->addItem(QString());
        regionBox->addItem(QString());
        regionBox->setObjectName(QString::fromUtf8("regionBox"));
        regionBox->setGeometry(QRect(520, 10, 61, 22));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        regionBox->setFont(font);
        regionBox->setMaxCount(10);
        regionBox->setFrame(true);
        regionBox->setModelColumn(0);
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 591, 421));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setReadOnly(true);
        tabWidget->addTab(tab_2, QString());
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 420, 861, 28));
        progressBar->setAutoFillBackground(false);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"border: 1px solid black;\n"
"text-align: center;\n"
"padding: 1px;\n"
"width: 15px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"background-color: #cd9bff;\n"
"border: 1px solid black;\n"
"}"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 25, 271, 386));
        label->setMinimumSize(QSize(0, 0));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(2);
        label->setMidLineWidth(0);
        label->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 882, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuLog = new QMenu(menuFile);
        menuLog->setObjectName(QString::fromUtf8("menuLog"));
        menuLog->setEnabled(true);
        menuConfig = new QMenu(menuFile);
        menuConfig->setObjectName(QString::fromUtf8("menuConfig"));
        menuConfig->setEnabled(true);
        menuGame_Library = new QMenu(menubar);
        menuGame_Library->setObjectName(QString::fromUtf8("menuGame_Library"));
        menuContent = new QMenu(menubar);
        menuContent->setObjectName(QString::fromUtf8("menuContent"));
        menuDownload = new QMenu(menuContent);
        menuDownload->setObjectName(QString::fromUtf8("menuDownload"));
        menuCemu = new QMenu(menubar);
        menuCemu->setObjectName(QString::fromUtf8("menuCemu"));
        menuSave_Data = new QMenu(menuCemu);
        menuSave_Data->setObjectName(QString::fromUtf8("menuSave_Data"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuGame_Library->menuAction());
        menubar->addAction(menuContent->menuAction());
        menubar->addAction(menuCemu->menuAction());
        menuFile->addAction(menuLog->menuAction());
        menuFile->addAction(menuConfig->menuAction());
        menuFile->addAction(actionClear_Settings);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuLog->addAction(actionVerbose);
        menuConfig->addAction(actionConfigTemporary);
        menuConfig->addAction(actionConfigPersistent);
        menuGame_Library->addAction(actionChange_Library);
        menuGame_Library->addAction(actionRefreshLibrary);
        menuGame_Library->addSeparator();
        menuGame_Library->addAction(actionOffline_Mode);
        menuContent->addAction(actionDecrypt_Content);
        menuContent->addAction(menuDownload->menuAction());
        menuContent->addSeparator();
        menuContent->addAction(actionCovertArt);
        menuContent->addSeparator();
        menuContent->addAction(actionCompress);
        menuContent->addAction(actionDecompress);
        menuDownload->addAction(actionDownload_Title);
        menuDownload->addAction(actionUpdate);
        menuDownload->addAction(actionDLC);
        menuCemu->addAction(actionIntegrateCemu);
        menuCemu->addAction(menuSave_Data->menuAction());
        menuSave_Data->addAction(actionBackup);
        menuSave_Data->addAction(actionImport);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        regionBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MapleSeed++", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("MainWindow", "Exit the program", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionChange_Library->setText(QApplication::translate("MainWindow", "Change", nullptr));
#ifndef QT_NO_TOOLTIP
        actionChange_Library->setToolTip(QApplication::translate("MainWindow", "Change the current games location", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionChange_Library->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionDownload_Title->setText(QApplication::translate("MainWindow", "Title", nullptr));
        actionDecrypt_Content->setText(QApplication::translate("MainWindow", "Decrypt", nullptr));
        actionVerbose->setText(QApplication::translate("MainWindow", "Verbose", nullptr));
        actionUpdate->setText(QApplication::translate("MainWindow", "Update", nullptr));
        actionDLC->setText(QApplication::translate("MainWindow", "DLC", nullptr));
        actionBackup->setText(QApplication::translate("MainWindow", "Backup", nullptr));
        actionImport->setText(QApplication::translate("MainWindow", "Import", nullptr));
        actionIntegrateCemu->setText(QApplication::translate("MainWindow", "Integrate", nullptr));
        actionConfigTemporary->setText(QApplication::translate("MainWindow", "Temporary", nullptr));
        actionConfigPersistent->setText(QApplication::translate("MainWindow", "Persistent", nullptr));
        actionRefreshLibrary->setText(QApplication::translate("MainWindow", "Refresh", nullptr));
        actionOffline_Mode->setText(QApplication::translate("MainWindow", "Offline Mode", nullptr));
        actionClear_Settings->setText(QApplication::translate("MainWindow", "Clear Settings", nullptr));
        actionCovertArt->setText(QApplication::translate("MainWindow", "Cover Art", nullptr));
        actionCompress->setText(QApplication::translate("MainWindow", "Compress", nullptr));
        actionDecompress->setText(QApplication::translate("MainWindow", "Decompress", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Main", nullptr));
        regionBox->setItemText(0, QString());
        regionBox->setItemText(1, QApplication::translate("MainWindow", "USA", nullptr));
        regionBox->setItemText(2, QApplication::translate("MainWindow", "EUR", nullptr));
        regionBox->setItemText(3, QApplication::translate("MainWindow", "JAP", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Titles", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Log", nullptr));
        progressBar->setFormat(QApplication::translate("MainWindow", "%p%", nullptr));
        label->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuLog->setTitle(QApplication::translate("MainWindow", "Log", nullptr));
        menuConfig->setTitle(QApplication::translate("MainWindow", "Config", nullptr));
        menuGame_Library->setTitle(QApplication::translate("MainWindow", "Library", nullptr));
        menuContent->setTitle(QApplication::translate("MainWindow", "Content", nullptr));
        menuDownload->setTitle(QApplication::translate("MainWindow", "Download", nullptr));
        menuCemu->setTitle(QApplication::translate("MainWindow", "Cemu", nullptr));
        menuSave_Data->setTitle(QApplication::translate("MainWindow", "Save Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
