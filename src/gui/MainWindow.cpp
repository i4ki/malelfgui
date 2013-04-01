#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "OptionsDialog.h"

#include <iostream>
#include <unistd.h>
#include <signal.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    util = Util::getInstance();

    init();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete controller;
    delete currentFile;
    delete util;
}

void MainWindow::init(){

    this->setCurrentFile(NULL);

    this->viewASCII = true;
    this->colorELF = true;
    ui->actionASCII->setChecked(true);
    ui->actionColor_ELF->setChecked(true);

    ui->splitter->setStretchFactor(0,1);
    ui->splitter->setStretchFactor(1,0);

    ui->splitter_2->setStretchFactor(0,1);
    ui->splitter_2->setStretchFactor(1,0);

    for(int i = 0; i < ui->fileTree->columnCount(); i++)
        ui->fileTree->resizeColumnToContents(i);

    this->setMenusEnabled(false);

    this->showMaximized();
}

void MainWindow::on_actionQuit_triggered()
{
    controller->Quit();
}

void MainWindow::on_actionOpen_ELF_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "",
                                                     tr("Files (*.*)"));

    QFile* file = new QFile(fileName);
        if (!file->open(QFile::ReadWrite)) {
            QMessageBox::warning(this, tr("SDI"),
                                 tr("Cannot read file %1:\n%2.")
                                 .arg(fileName)
                                 .arg(file->errorString()));
            return;
        }

    QApplication::setOverrideCursor(Qt::WaitCursor);
    this->setAddresses();
    ui->hexDump->setData(file->readAll());
    QApplication::restoreOverrideCursor();

    this->setCurrentFile(file);
    this->setMenusEnabled(true);

    QString cmd = "dissect -i " + fileName;
    QString result = util->executeMalelf(cmd);
    ui->log->setText(result);
}

void MainWindow::on_actionClose_ELF_triggered()
{
    if(this->currentFile){
        this->currentFile->close();
        this->setAddresses();
        ui->hexDump->setData(NULL);
        this->setMenusEnabled(false);
    }
}

void MainWindow::setCurrentFile(QFile* file)
{
    this->currentFile = file;
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox msgBox(this);
    msgBox.setWindowTitle(tr("About"));
    msgBox.setInformativeText(tr("MalelficusGUI is a Graphical User Interface for Malelficus"));
    msgBox.exec();
}

void MainWindow::on_actionSave_ELF_triggered()
{
    if(this->currentFile){
        this->currentFile->seek(0);
        this->currentFile->write(ui->hexDump->data());
    }
}

void MainWindow::on_actionSave_ELF_As_triggered()
{
    if(this->currentFile){
        QString fileName = QFileDialog::getOpenFileName(this, tr("Save ELF as..."),
                                                         "",
                                                         tr("Files (*.*)"));

        QFile* file = new QFile(fileName);
            if (!file->open(QFile::ReadWrite)) {
                QMessageBox::warning(this, tr("SDI"),
                                     tr("Cannot read file %1:\n%2.")
                                     .arg(fileName)
                                     .arg(file->errorString()));
                return;
            }

        file->write(ui->hexDump->data());

        this->setCurrentFile(file);
    }
}

void MainWindow::on_actionDisassemble_triggered()
{
    if(this->currentFile){
        QString cmd = "disas -i " + this->currentFile->fileName();
        QString result = util->executeMalelf(cmd);
        ui->log->setText(result);
    }
}

void MainWindow::on_actionReverse_into_C_triggered()
{
    if(this->currentFile){
        QString cmd = "reverse_elf -r -i " + this->currentFile->fileName();
        QString result = util->executeMalelf(cmd);
        ui->log->setText(result);
    }
}

void MainWindow::on_actionColor_ELF_triggered()
{
    this->colorELF = ui->actionColor_ELF->isChecked();
    ui->hexDump->setColorELF(this->colorELF);
    ui->hexDump->repaint();
}

void MainWindow::on_actionASCII_triggered()
{
    this->viewASCII = ui->actionASCII->isChecked();
    ui->hexDump->setAsciiArea(this->viewASCII);
    ui->hexDump->repaint();
}

void MainWindow::setAddresses(){
    //Example values, they will have to be taken from the ELF
    ui->hexDump->setELFHeaderSize(0x34);
    ui->hexDump->setELFPhtOffset(0x00000034);
    ui->hexDump->setELFShtOffset(0x00000100);
}

void MainWindow::on_actionAutomatic_triggered()
{
    if(this->currentFile){
        /*QString cmd = "dynanalyse -a -i " + this->currentFile->fileName();
        QString result = util->executeMalelf(cmd);
        ui->log->setText(result);*/

        /*
        pid_t pid = NULL;
        int pipefd[2];
        FILE* output;
        char buf[256];

        pipe(pipefd);
        pid = fork();
        if (pid == 0)
        {
        // Child
          dup2(pipefd[0], STDIN_FILENO);
          dup2(pipefd[1], STDOUT_FILENO);
          dup2(pipefd[1], STDERR_FILENO);
          execl("malelf", "/usr/bin/malelf", (char*) NULL);
          // Nothing below this line should be executed by child process. If so,
          // it means that the execl function wasn't successfull, so lets exit:
          exit(1);
        }
        // The code below will be executed only by parent. You can write and read
        // from the child using pipefd descriptors, and you can send signals to
        // the process using its pid by kill() function. If the child process will
        // exit unexpectedly, the parent process will obtain SIGCHLD signal that
        // can be handled (e.g. you can respawn the child process).

        // Now, you can write to the process using pipefd[0], and read from pipefd[1]:

        write(pipefd[0], "message", strlen("message")); // write message to the process
        read(pipefd[1], buf, sizeof(buf)); // read from the process. Note that this will catch
                                           // standard  output together with error output
        ui->log->setText(buf);
        kill(pid, SIGKILL); //send signo signal to the child process
        */
    }
}

void MainWindow::setMenusEnabled(bool enabled)
{
    ui->menuEdit->setEnabled(enabled);
    ui->menuAnalyse->setEnabled(enabled);
    ui->menuInfect->setEnabled(enabled);
}

void MainWindow::on_actionUndo_triggered()
{
    ui->hexDump->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->hexDump->redo();
}

void MainWindow::on_actionOptions_triggered()
{
    OptionsDialog* options = new OptionsDialog(this);
    options->show();
}
