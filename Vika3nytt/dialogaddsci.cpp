#include "dialogaddsci.h"
#include "ui_dialogaddsci.h"

DialogAddSci::DialogAddSci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddSci)
{
    ui->setupUi(this);
}

DialogAddSci::~DialogAddSci()
{
    delete ui;
}

void DialogAddSci::on_checkBox_alive_clicked()
{
    if(ui->checkBox_alive->isChecked())
    {
        ui->lineEdit_addDeathYear->setEnabled(false);
    }
    else
    {
         ui->lineEdit_addDeathYear->setEnabled(true);
    }

}
