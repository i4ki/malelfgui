#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFile>
#include <QMainWindow>
#include <string>
#include "../controller/MainWindowController.h"
#include "../util/Util.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    MainWindowController* controller;
    
private slots:
    void on_actionQuit_triggered();

    void on_actionOpen_ELF_triggered();

    void on_actionClose_ELF_triggered();

    void on_actionAbout_triggered();

    void on_actionSave_ELF_triggered();

    void on_actionSave_ELF_As_triggered();

    void on_actionDisassemble_triggered();

    void on_actionReverse_into_C_triggered();

    void on_actionColor_ELF_triggered();

    void on_actionASCII_triggered();

    void on_actionAutomatic_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionOptions_triggered();

private:
    Ui::MainWindow *ui;
    QFile* currentFile;
    Util* util;

    void init();
    void setCurrentFile(QFile*);
    void setAddresses();
    void setMenusEnabled(bool);

    bool viewASCII;
    bool colorELF;

};

#endif // MAINWINDOW_H
