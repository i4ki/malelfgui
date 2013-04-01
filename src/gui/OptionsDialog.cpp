#include "OptionsDialog.h"
#include "ui_OptionsDialog.h"
#include "../util/Util.h"

OptionsDialog::OptionsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OptionsDialog)
{
    ui->setupUi(this);
    ui->lineEdit->setText(Util::getInstance()->getMalelfPath());
}

OptionsDialog::~OptionsDialog()
{
    delete ui;
}

void OptionsDialog::on_buttonBox_accepted()
{
    Util::getInstance()->setMalelfPath(ui->lineEdit->text());
}
