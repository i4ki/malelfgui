/********************************************************************************
** Form generated from reading UI file 'MainWindown12296.ui'
**
** Created: Wed Mar 27 11:41:34 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWN12296_H
#define MAINWINDOWN12296_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSplitter>
#include <QtGui/QTextBrowser>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>
#include "../qhexedit/qhexedit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_ELF;
    QAction *actionClose_ELF;
    QAction *actionQuit;
    QAction *actionSave_ELF;
    QAction *actionUndo;
    QAction *actionAbout;
    QAction *actionRedo;
    QAction *actionFind_Replace;
    QAction *actionSave_ELF_As;
    QAction *actionDisassemble;
    QAction *actionAnalyse_Section;
    QAction *actionReverse_into_C;
    QAction *actionSilvio_Cesare_s_Padding;
    QAction *actionNOP_filling;
    QAction *actionColor_ELF;
    QAction *actionASCII;
    QAction *actionAutomatic;
    QAction *actionInteractive;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QHexEdit *hexDump;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *log;
    QTreeWidget *fileTree;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuInfect;
    QMenu *menuInfect_Binary;
    QMenu *menuAnalyse;
    QMenu *menuStatic_Analysis;
    QMenu *menuDynamic_Analysis;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(874, 566);
        actionOpen_ELF = new QAction(MainWindow);
        actionOpen_ELF->setObjectName(QString::fromUtf8("actionOpen_ELF"));
        actionClose_ELF = new QAction(MainWindow);
        actionClose_ELF->setObjectName(QString::fromUtf8("actionClose_ELF"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionSave_ELF = new QAction(MainWindow);
        actionSave_ELF->setObjectName(QString::fromUtf8("actionSave_ELF"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionUndo->setEnabled(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionRedo->setEnabled(true);
        actionFind_Replace = new QAction(MainWindow);
        actionFind_Replace->setObjectName(QString::fromUtf8("actionFind_Replace"));
        actionFind_Replace->setEnabled(false);
        actionSave_ELF_As = new QAction(MainWindow);
        actionSave_ELF_As->setObjectName(QString::fromUtf8("actionSave_ELF_As"));
        actionDisassemble = new QAction(MainWindow);
        actionDisassemble->setObjectName(QString::fromUtf8("actionDisassemble"));
        actionAnalyse_Section = new QAction(MainWindow);
        actionAnalyse_Section->setObjectName(QString::fromUtf8("actionAnalyse_Section"));
        actionAnalyse_Section->setEnabled(false);
        actionReverse_into_C = new QAction(MainWindow);
        actionReverse_into_C->setObjectName(QString::fromUtf8("actionReverse_into_C"));
        actionSilvio_Cesare_s_Padding = new QAction(MainWindow);
        actionSilvio_Cesare_s_Padding->setObjectName(QString::fromUtf8("actionSilvio_Cesare_s_Padding"));
        actionSilvio_Cesare_s_Padding->setEnabled(false);
        actionNOP_filling = new QAction(MainWindow);
        actionNOP_filling->setObjectName(QString::fromUtf8("actionNOP_filling"));
        actionNOP_filling->setEnabled(false);
        actionColor_ELF = new QAction(MainWindow);
        actionColor_ELF->setObjectName(QString::fromUtf8("actionColor_ELF"));
        actionColor_ELF->setCheckable(true);
        actionASCII = new QAction(MainWindow);
        actionASCII->setObjectName(QString::fromUtf8("actionASCII"));
        actionASCII->setCheckable(true);
        actionAutomatic = new QAction(MainWindow);
        actionAutomatic->setObjectName(QString::fromUtf8("actionAutomatic"));
        actionInteractive = new QAction(MainWindow);
        actionInteractive->setObjectName(QString::fromUtf8("actionInteractive"));
        actionInteractive->setEnabled(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        hexDump = new QHexEdit(splitter);
        hexDump->setObjectName(QString::fromUtf8("hexDump"));
        hexDump->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 423, 76));
        //hexDump->setWidget(scrollAreaWidgetContents);
        splitter->addWidget(hexDump);
        log = new QTextBrowser(splitter);
        log->setObjectName(QString::fromUtf8("log"));
        splitter->addWidget(log);
        splitter_2->addWidget(splitter);
        fileTree = new QTreeWidget(splitter_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Section"));
        fileTree->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(fileTree);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(fileTree);
        new QTreeWidgetItem(fileTree);
        new QTreeWidgetItem(fileTree);
        fileTree->setObjectName(QString::fromUtf8("fileTree"));
        splitter_2->addWidget(fileTree);

        horizontalLayout->addWidget(splitter_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 874, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menuEdit);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuInfect = new QMenu(menubar);
        menuInfect->setObjectName(QString::fromUtf8("menuInfect"));
        menuInfect_Binary = new QMenu(menuInfect);
        menuInfect_Binary->setObjectName(QString::fromUtf8("menuInfect_Binary"));
        menuAnalyse = new QMenu(menubar);
        menuAnalyse->setObjectName(QString::fromUtf8("menuAnalyse"));
        menuStatic_Analysis = new QMenu(menuAnalyse);
        menuStatic_Analysis->setObjectName(QString::fromUtf8("menuStatic_Analysis"));
        menuDynamic_Analysis = new QMenu(menuAnalyse);
        menuDynamic_Analysis->setObjectName(QString::fromUtf8("menuDynamic_Analysis"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAnalyse->menuAction());
        menubar->addAction(menuInfect->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen_ELF);
        menuFile->addAction(actionSave_ELF);
        menuFile->addAction(actionSave_ELF_As);
        menuFile->addAction(actionClose_ELF);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionFind_Replace);
        menuEdit->addSeparator();
        menuEdit->addAction(menuView->menuAction());
        menuView->addAction(actionColor_ELF);
        menuView->addAction(actionASCII);
        menuInfect->addAction(menuInfect_Binary->menuAction());
        menuInfect_Binary->addAction(actionSilvio_Cesare_s_Padding);
        menuInfect_Binary->addAction(actionNOP_filling);
        menuAnalyse->addAction(menuStatic_Analysis->menuAction());
        menuAnalyse->addAction(menuDynamic_Analysis->menuAction());
        menuStatic_Analysis->addAction(actionDisassemble);
        menuStatic_Analysis->addAction(actionAnalyse_Section);
        menuStatic_Analysis->addAction(actionReverse_into_C);
        menuDynamic_Analysis->addAction(actionAutomatic);
        menuDynamic_Analysis->addAction(actionInteractive);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MalelfGUI - Be evil!", 0, QApplication::UnicodeUTF8));
        actionOpen_ELF->setText(QApplication::translate("MainWindow", "Open ELF", 0, QApplication::UnicodeUTF8));
        actionClose_ELF->setText(QApplication::translate("MainWindow", "Close ELF", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionSave_ELF->setText(QApplication::translate("MainWindow", "Save ELF", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionFind_Replace->setText(QApplication::translate("MainWindow", "Find/Replace", 0, QApplication::UnicodeUTF8));
        actionSave_ELF_As->setText(QApplication::translate("MainWindow", "Save ELF As...", 0, QApplication::UnicodeUTF8));
        actionDisassemble->setText(QApplication::translate("MainWindow", "Disassemble", 0, QApplication::UnicodeUTF8));
        actionAnalyse_Section->setText(QApplication::translate("MainWindow", "Analyse Section", 0, QApplication::UnicodeUTF8));
        actionReverse_into_C->setText(QApplication::translate("MainWindow", "Reverse into C", 0, QApplication::UnicodeUTF8));
        actionSilvio_Cesare_s_Padding->setText(QApplication::translate("MainWindow", "Silvio Cesare's Padding", 0, QApplication::UnicodeUTF8));
        actionNOP_filling->setText(QApplication::translate("MainWindow", "NOP filling", 0, QApplication::UnicodeUTF8));
        actionColor_ELF->setText(QApplication::translate("MainWindow", "Color ELF", 0, QApplication::UnicodeUTF8));
        actionASCII->setText(QApplication::translate("MainWindow", "ASCII", 0, QApplication::UnicodeUTF8));
        actionAutomatic->setText(QApplication::translate("MainWindow", "Automatic", 0, QApplication::UnicodeUTF8));
        actionInteractive->setText(QApplication::translate("MainWindow", "Interactive", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = fileTree->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "Value", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Description", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = fileTree->isSortingEnabled();
        fileTree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = fileTree->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "ELF Header", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(1, QApplication::translate("MainWindow", "Object Type", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "e_type", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(1, QApplication::translate("MainWindow", "Version", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "e_version", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(1, QApplication::translate("MainWindow", "Entry Point", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "e_entry", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem5->setText(1, QApplication::translate("MainWindow", "PHT Offset", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "e_phoff", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem1->child(4);
        ___qtreewidgetitem6->setText(1, QApplication::translate("MainWindow", "SHT Offset", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "e_shoff", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem1->child(5);
        ___qtreewidgetitem7->setText(1, QApplication::translate("MainWindow", "ELF Header size", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "e_ehsize", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem1->child(6);
        ___qtreewidgetitem8->setText(1, QApplication::translate("MainWindow", "Size of PHT Entries", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "e_phentsize", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem1->child(7);
        ___qtreewidgetitem9->setText(1, QApplication::translate("MainWindow", "Number of PHT Entries", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "e_phnum", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem1->child(8);
        ___qtreewidgetitem10->setText(1, QApplication::translate("MainWindow", "Size of one SHT Entry", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem10->setText(0, QApplication::translate("MainWindow", "e_shentsize", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem1->child(9);
        ___qtreewidgetitem11->setText(1, QApplication::translate("MainWindow", "Number of sections", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem11->setText(0, QApplication::translate("MainWindow", "e_shnum", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem1->child(10);
        ___qtreewidgetitem12->setText(1, QApplication::translate("MainWindow", "SHT Symbol index", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem12->setText(0, QApplication::translate("MainWindow", "e_shstrndx", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem13 = fileTree->topLevelItem(1);
        ___qtreewidgetitem13->setText(0, QApplication::translate("MainWindow", "Program Header Table (PHT)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem14 = fileTree->topLevelItem(2);
        ___qtreewidgetitem14->setText(0, QApplication::translate("MainWindow", "Section Header Table (SHT)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem15 = fileTree->topLevelItem(3);
        ___qtreewidgetitem15->setText(0, QApplication::translate("MainWindow", "Symbol Table", 0, QApplication::UnicodeUTF8));
        fileTree->setSortingEnabled(__sortingEnabled);

        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuInfect->setTitle(QApplication::translate("MainWindow", "Infect", 0, QApplication::UnicodeUTF8));
        menuInfect_Binary->setTitle(QApplication::translate("MainWindow", "Infect Binary", 0, QApplication::UnicodeUTF8));
        menuAnalyse->setTitle(QApplication::translate("MainWindow", "Analyse", 0, QApplication::UnicodeUTF8));
        menuStatic_Analysis->setTitle(QApplication::translate("MainWindow", "Static Analysis", 0, QApplication::UnicodeUTF8));
        menuDynamic_Analysis->setTitle(QApplication::translate("MainWindow", "Dynamic Analysis", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWN12296_H
