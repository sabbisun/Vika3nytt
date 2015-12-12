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

void DialogEditSci::setName(QString &q)
{
    ui->lineEdit_name->setText(q);
}

void DialogEditSci::setSurname(QString &q)
{
    ui->lineEdit_surname->setText(q);
}

void DialogEditSci::setGender(QString &q)
{
    std::string gen = q.toStdString();
    if(gen == "m" || gen == "M")
    {
        ui->checkBox_male->setChecked(true);
    }
    else
    {
        ui->checkBox_female->setChecked(true);
    }
}

void DialogEditSci::setByear(QString &q)
{
    ui->lineEdit_yearBirth->setText(q);
}

void DialogEditSci::setDyear(QString &q)
{
    int alive = q.toInt();
    if(alive)
    {
        ui->lineEdit_yearDeth->setText(q);
        ui->checkBox_alive->setChecked(false);
        ui->lineEdit_yearDeth->setEnabled(true);
    }
    else
    {
        ui->checkBox_alive->setChecked(true);
    }
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

void DialogEditSci::on_Button_cancel_clicked()
{
    this->close();
}

void DialogEditSci::on_Button_confirm_clicked()
{
    QString name = ui->lineEdit_name->text();
    QString surname = ui->lineEdit_surname->text();
    QString gender;
    if(ui->checkBox_female->isChecked())
    {
        gender = "f";
    }
    else if(ui->checkBox_male->isChecked())
    {
        gender = "m";
    }
    else
    {
        //error: must choose gender
    }
    QString byear = ui->lineEdit_yearBirth->text();
    QString dyear;
    if(ui->checkBox_alive->isChecked())
    {
        dyear = QString::number(0);
    }
    else if(!ui->checkBox_alive->isChecked() && ui->lineEdit_yearDeth->text() != "")
    {
        dyear = ui->lineEdit_yearDeth->text();
    }

}




