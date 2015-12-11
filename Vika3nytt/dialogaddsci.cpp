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





bool DialogAddSci::on_checkBox_male_clicked(bool checked)
{
    ui->checkBox_female->setChecked(false);
    return checked;
}

bool DialogAddSci::on_checkBox_female_clicked(bool checked)
{
    ui->checkBox_male->setChecked(false);
    return checked;
}

void DialogAddSci::on_checkBox_alive_clicked(bool checked)
{
    bool temp;
    if(checked == true)
    {
       temp = false;
    }
    else
    {
        temp = true;
    }
    ui->lineEdit_addDeathYear->setEnabled(temp);
}

void DialogAddSci::on_confirmAddButton_clicked()
{
    char gender;
    bool found = true;
    QString name = ui ->lineEdit_addGivenName->text();
    string nafn = name.toStdString();
    QString surName = ui->lineEdit_addSurname->text();
    string nafn2 = surName.toStdString();
    QString birthYear = ui->lineEdit_addBirthYear->text();
    int live = birthYear.toInt();
    QString deathYear = ui->lineEdit_addDeathYear->text();
    int dead= deathYear.toInt();
    if(on_checkBox_male_clicked(true))
    {
        gender ='m';
    }
    else if(on_checkBox_female_clicked(true))
    {
        gender = 'f';
    }

    Individual i1(nafn, nafn2,gender,live,dead);
    if(name.isEmpty()||surName.isEmpty()||birthYear.isEmpty())
    {
        //found = false;
        // Error
       // return;
    }
    core.addIndividual(i1,found);
    this->close();
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
