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
    bool error = false;
    clearErrorLabels();
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
    if(name.isEmpty())
    {
        ui->label_errorSciName->setText("<font color=\"Red\">Name cannot be empty");
        error = true;
    }
    if(surName.isEmpty())
    {
        ui->label_errorSciSurname->setText("<font color=\"Red\">Surname cannot be empty");
        error = true;
    }
    if(!ui->checkBox_female->isChecked() && !ui->checkBox_male->isChecked())
    {
        ui->label_errorSciGender->setText("Scientist must have a gender!");
        error = true;
    }
    if(birthYear.isEmpty()||live == 0)
    {
        ui->label_errorSciBirth->setText("<font color=\"Red\">Invalid birth year!");
        error = true;
    }
    if(deathYear.isEmpty()||!(ui->checkBox_alive->isChecked())||live>dead||dead == 0)
    {
        ui->label_errorSciDeath->setText("<font color=\"Red\">Invalid death year!");
        error = true;
    }
    if(!error)
    {
        core.addIndividual(i1,found);
        if(found)
        {
             ui->label_errorSciName->setText("Scientist is already in the database");
             ui->label_errorSciSurname->setText("Scientist is already in the database");
             ui->label_errorSciBirth->setText("Scientist is already in the database");
             ui->label_errorSciDeath->setText("Scientist is already in the database");

        }
        else
        {
             this->close();
        }
    }

    /*
    char gender;
    bool error = false;
    bool found = false;
    QString name = ui ->lineEdit_addComName->text();
    string nafn = name.toStdString();
    QString qType = ui->lineEdit_addType->text();
    string type = qType.toStdString();
    QString creationYear = ui->lineEdit_creationYear->text();
    int live = creationYear.toInt();

    Computer c1(live, nafn,type);
    if(name.isEmpty())
    {
        ui->label_errorNameComp->setText("Name cannot be empty!");
       error = true;
    }
    if(isdigit(live) || creationYear.isEmpty())
    {
        ui->label_errorCompYear->setText("That is not a possible creation year!");
        error = true;
    }
    if(qType.isEmpty())
    {
        ui->label_errorTypeComp->setText("Type cannot be empty!");
    }
    if(!error)
    {
        core.addComputer(c1,found);
        if(found)
        {
            ui->label_errorNameComp->setText("This computer is already in the database!");
            ui->label_errorCompYear->setText("This computer is already in the database!");
            ui->label_errorTypeComp->setText("This computer is already in the database!");
        }
        else
        {
            this->close();
        }

    }
    */
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
void DialogAddSci::on_pushButton_cancelAdd_clicked()
{
    this->close();
}

void DialogAddSci::clearErrorLabels()
{
    ui->label_errorSciName->setText("");
    ui->label_errorSciGender->setText("");
    ui->label_errorSciBirth->setText("");
    ui->label_errorSciDeath->setText("");
    ui->label_errorSciSurname->setText("");
}
