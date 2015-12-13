#include "dialogeditsci.h"
#include "ui_dialogeditsci.h"

QString qId = "";

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

void DialogEditSci::setId(QString &q)
{
    qId = q;
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
    if(gen == "Male")
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
        ui->checkBox_female->setChecked(false);
    }
    else
    {
        ui->checkBox_female->setChecked(true);
    }
}

void DialogEditSci::on_checkBox_female_clicked()
{
    if(ui->checkBox_female->isChecked())
    {
        ui->checkBox_male->setChecked(false);
    }
    else
    {
        ui->checkBox_male->setChecked(true);
    }
}

void DialogEditSci::on_Button_cancel_clicked()
{
    this->close();
}

void DialogEditSci::on_Button_confirm_clicked()
{
    bool isLegalEdit = true;

    QString name = ui->lineEdit_name->text();
    if(name.isEmpty())
    {
        ui->label_nameError->setText("name cannot be empty");
        isLegalEdit = false;
    }
    QString surname = ui->lineEdit_surname->text();
    if(surname.isEmpty())
    {
        ui->label_surnameError->setText("surname cannot be empty");
        isLegalEdit = false;
    }

    QString gender;
    if(ui->checkBox_female->isChecked())
    {
        gender = "f";
    }
    else if(ui->checkBox_male->isChecked())
    {
        gender = "m";
    }
    else if (!ui->checkBox_female->isChecked() && !ui->checkBox_male->isChecked())
    {
        // Wont happen because either is always checked
    }

    QString byear = ui->lineEdit_yearBirth->text();
    if(byear.isEmpty())
    {
        ui->label_birthError->setText("must enter birth");
        isLegalEdit = false;
    }
    QString dyear = ui->lineEdit_yearDeth->text();
    if(ui->checkBox_alive->isChecked())
    {
        dyear = QString::number(0);
        ui->lineEdit_yearBirth->setEnabled(false);
    }
    else if(!ui->checkBox_alive->isChecked() && dyear.isEmpty())
    {
         ui->label_deathError->setText("enter death");
         isLegalEdit = false;
    }
    else if(!ui->checkBox_alive->isChecked() && !dyear.isEmpty())
    {
        dyear = ui->lineEdit_yearDeth->text();
        if(dyear.toInt() < byear.toInt())
        {
            ui->label_deathError->setText("cannot die before being born");
            isLegalEdit = false;
        }
        else
        {
            dyear = ui->lineEdit_yearDeth->text();
            ui->lineEdit_yearBirth->setEnabled(false);
        }
    }
    else //if(!ui->checkBox_alive->isChecked() && dyear.isEmpty())
    {
        ui->label_deathError->setText("must enter death or check alive");
        isLegalEdit = false;
    }

    if(isLegalEdit)
    {
        int id = qId.toInt();
        core.updateIndiName(name.toStdString(), id);
        core.updateIndiSurname(surname.toStdString(), id);
        core.updateIndiGender(QString(gender).toStdString()[0], id);
        core.updateIndiBYear(byear.toUInt(), id);
        core.updateIndiDYear(dyear.toUInt(), id);
        qId = ""; //global...
        this->close();
    }
}




