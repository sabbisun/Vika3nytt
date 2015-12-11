#include "dialogeditsci.h"
#include "ui_dialogeditsci.h"

DialogEditSci::DialogEditSci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEditSci)
{
    ui->setupUi(this);
}

DialogEditSci::~DialogEditSci()
{
    delete ui;
}

void DialogEditSci::on_checkBox_alive_clicked()
{
    if(ui->checkBox_alive->isChecked())
    {
        ui->lineEdit_yearDeth->setEnabled(false);
    }
    else
    {
        ui->lineEdit_yearDeth->setEnabled(true);
    }

}

void DialogEditSci::on_checkBox_male_clicked()
{
    if(ui->checkBox_male->isChecked())
    {
        ui->checkBox_female->setEnabled(false);
    }
    else
    {
        ui->checkBox_female->setEnabled(true);
    }

}

void DialogEditSci::on_checkBox_female_clicked()
{
    if(ui->checkBox_female->isChecked())
    {
        ui->checkBox_male->setEnabled(false);
    }
    else
    {
        ui->checkBox_male->setEnabled(true);
    }
}

