/********************************************************************************
** Form generated from reading UI file 'MainWindownn5203.ui'
**
** Created: Wed Mar 27 08:35:43 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWNN5203_H
#define MAINWINDOWNN5203_H

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
#include <QtGui/QTableWidget>
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
    QAction *actionDissect_Section;
    QAction *actionAbout;
    QAction *actionRedo;
    QAction *actionFind_Replace;
    QAction *actionDynamic_Analysis;
    QAction *actionSave_ELF_As;
    QAction *actionDisassemble;
    QAction *actionAnalyse_Section;
    QAction *actionReverse_into_C;
    QAction *actionSilvio_Cesare_s_Padding;
    QAction *actionNOP_filling;
    QAction *actionColor_ELF;
    QAction *actionASCII;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter_3;
    QSplitter *splitter;
    QHexEdit *hexDump;
    QWidget *scrollAreaWidgetContents;
    QTableWidget *inspector;
    QSplitter *splitter_2;
    QTreeWidget *fileTree;
    QTextBrowser *log;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuDissect;
    QMenu *menuView;
    QMenu *menuInfect;
    QMenu *menuInfect_Binary;
    QMenu *menuAnalyse;
    QMenu *menuStatic_Analysis;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1239, 605);
        actionOpen_ELF = new QAction(MainWindow);
        actionOpen_ELF->setObjectName(QString::fromUtf8("actionOpen_ELF"));
        actionClose_ELF = new QAction(MainWindow);
        actionClose_ELF->setObjectName(QString::fromUtf8("actionClose_ELF"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionSave_ELF = new QAction(MainWindow);
        actionSave_ELF->setObjectName(QString::fromUtf8("actionSave_ELF"));
        actionDissect_Section = new QAction(MainWindow);
        actionDissect_Section->setObjectName(QString::fromUtf8("actionDissect_Section"));
        actionDissect_Section->setEnabled(false);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionRedo->setEnabled(false);
        actionFind_Replace = new QAction(MainWindow);
        actionFind_Replace->setObjectName(QString::fromUtf8("actionFind_Replace"));
        actionFind_Replace->setEnabled(false);
        actionDynamic_Analysis = new QAction(MainWindow);
        actionDynamic_Analysis->setObjectName(QString::fromUtf8("actionDynamic_Analysis"));
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
        actionNOP_filling = new QAction(MainWindow);
        actionNOP_filling->setObjectName(QString::fromUtf8("actionNOP_filling"));
        actionColor_ELF = new QAction(MainWindow);
        actionColor_ELF->setObjectName(QString::fromUtf8("actionColor_ELF"));
        actionColor_ELF->setCheckable(true);
        actionASCII = new QAction(MainWindow);
        actionASCII->setObjectName(QString::fromUtf8("actionASCII"));
        actionASCII->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        hexDump = new QHexEdit(splitter);
        hexDump->setObjectName(QString::fromUtf8("hexDump"));
        hexDump->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 76, 183));
        //hexDump->setWidget(scrollAreaWidgetContents);
        splitter->addWidget(hexDump);
        inspector = new QTableWidget(splitter);
        if (inspector->columnCount() < 2)
            inspector->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        inspector->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        inspector->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (inspector->rowCount() < 1)
            inspector->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        inspector->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFlags(Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        inspector->setItem(0, 0, __qtablewidgetitem3);
        inspector->setObjectName(QString::fromUtf8("inspector"));
        splitter->addWidget(inspector);
        splitter_3->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
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
        log = new QTextBrowser(splitter_2);
        log->setObjectName(QString::fromUtf8("log"));
        splitter_2->addWidget(log);
        splitter_3->addWidget(splitter_2);

        horizontalLayout_2->addWidget(splitter_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1239, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuDissect = new QMenu(menubar);
        menuDissect->setObjectName(QString::fromUtf8("menuDissect"));
        menuView = new QMenu(menuDissect);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuInfect = new QMenu(menubar);
        menuInfect->setObjectName(QString::fromUtf8("menuInfect"));
        menuInfect_Binary = new QMenu(menuInfect);
        menuInfect_Binary->setObjectName(QString::fromUtf8("menuInfect_Binary"));
        menuAnalyse = new QMenu(menubar);
        menuAnalyse->setObjectName(QString::fromUtf8("menuAnalyse"));
        menuStatic_Analysis = new QMenu(menuAnalyse);
        menuStatic_Analysis->setObjectName(QString::fromUtf8("menuStatic_Analysis"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuDissect->menuAction());
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
        menuDissect->addAction(actionDissect_Section);
        menuDissect->addAction(actionRedo);
        menuDissect->addAction(actionFind_Replace);
        menuDissect->addSeparator();
        menuDissect->addAction(menuView->menuAction());
        menuView->addAction(actionColor_ELF);
        menuView->addAction(actionASCII);
        menuInfect->addAction(menuInfect_Binary->menuAction());
        menuInfect_Binary->addAction(actionSilvio_Cesare_s_Padding);
        menuInfect_Binary->addAction(actionNOP_filling);
        menuAnalyse->addAction(menuStatic_Analysis->menuAction());
        menuAnalyse->addAction(actionDynamic_Analysis);
        menuStatic_Analysis->addAction(actionDisassemble);
        menuStatic_Analysis->addAction(actionAnalyse_Section);
        menuStatic_Analysis->addAction(actionReverse_into_C);

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
        actionDissect_Section->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionFind_Replace->setText(QApplication::translate("MainWindow", "Find/Replace", 0, QApplication::UnicodeUTF8));
        actionDynamic_Analysis->setText(QApplication::translate("MainWindow", "Dynamic Analysis", 0, QApplication::UnicodeUTF8));
        actionSave_ELF_As->setText(QApplication::translate("MainWindow", "Save ELF As...", 0, QApplication::UnicodeUTF8));
        actionDisassemble->setText(QApplication::translate("MainWindow", "Disassemble", 0, QApplication::UnicodeUTF8));
        actionAnalyse_Section->setText(QApplication::translate("MainWindow", "Analyse Section", 0, QApplication::UnicodeUTF8));
        actionReverse_into_C->setText(QApplication::translate("MainWindow", "Reverse into C", 0, QApplication::UnicodeUTF8));
        actionSilvio_Cesare_s_Padding->setText(QApplication::translate("MainWindow", "Silvio Cesare's Padding", 0, QApplication::UnicodeUTF8));
        actionNOP_filling->setText(QApplication::translate("MainWindow", "NOP filling", 0, QApplication::UnicodeUTF8));
        actionColor_ELF->setText(QApplication::translate("MainWindow", "Color ELF", 0, QApplication::UnicodeUTF8));
        actionASCII->setText(QApplication::translate("MainWindow", "ASCII", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = inspector->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Property", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = inspector->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Value", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = inspector->isSortingEnabled();
        inspector->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = inspector->item(0, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Entry Point", 0, QApplication::UnicodeUTF8));
        inspector->setSortingEnabled(__sortingEnabled);

        QTreeWidgetItem *___qtreewidgetitem = fileTree->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "Value", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Description", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = fileTree->isSortingEnabled();
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
        fileTree->setSortingEnabled(__sortingEnabled1);

        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuDissect->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuInfect->setTitle(QApplication::translate("MainWindow", "Infect", 0, QApplication::UnicodeUTF8));
        menuInfect_Binary->setTitle(QApplication::translate("MainWindow", "Infect Binary", 0, QApplication::UnicodeUTF8));
        menuAnalyse->setTitle(QApplication::translate("MainWindow", "Analyse", 0, QApplication::UnicodeUTF8));
        menuStatic_Analysis->setTitle(QApplication::translate("MainWindow", "Static Analysis", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWNN5203_H
