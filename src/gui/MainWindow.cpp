#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <iostream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    util = new Util();

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

    QString cmd = "malelf dissect -i " + fileName;
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
        QString cmd = "malelf disas -i " + this->currentFile->fileName();
        QString result = util->executeMalelf(cmd);
        ui->log->setText(result);
    }
}

void MainWindow::on_actionReverse_into_C_triggered()
{
    if(this->currentFile){
        QString cmd = "malelf reverse_elf -r -i " + this->currentFile->fileName();
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
        /*QString cmd = "malelf dynanalyse -a -i " + this->currentFile->fileName();
        QString result = util->executeMalelf(cmd);
        ui->log->setText(result);*/
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
