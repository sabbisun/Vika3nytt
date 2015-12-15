#include "dialogaddsci.h"
#include "ui_dialogaddsci.h"

DialogAddSci::DialogAddSci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddSci)
{
    ui->setupUi(this);

    QFont f( "Arial", 10, QFont::Bold);
    ui->label_errorSciName->setFont(f);
    ui->label_errorSciSurname->setFont(f);
    ui->label_errorSciGender->setFont(f);
    ui->label_errorSciBirth->setFont(f);
    ui->label_errorSciDeath->setFont(f);
}

DialogAddSci::~DialogAddSci()
{
    delete ui;
}

void DialogAddSci::on_checkBox_male_clicked()
{
    ui->checkBox_female->setChecked(false);
}

void DialogAddSci::on_checkBox_female_clicked()
{
    ui->checkBox_male->setChecked(false);
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
    int dead = deathYear.toInt();
    string about = ui->lineEdit_descriptionSci->document()->toPlainText().toStdString();
    int currentYear = QDate::currentDate().year();

    if(ui->checkBox_male->isChecked())
    {
        gender ='m';
    }
    else if(ui->checkBox_female->isChecked())
    {
        gender = 'f';
    }

    if(ui->checkBox_alive->isChecked())
    {
        dead = 0;
    }

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
        ui->label_errorSciGender->setText("<font color=\"Red\">Scientist must have a gender!");
        error = true;
    }

    if(birthYear.isEmpty()||live == 0)
    {
        ui->label_errorSciBirth->setText("<font color=\"Red\">Invalid birth year!");
        error = true;
    }

    if(live > currentYear)
    {
        ui->label_errorSciBirth->setText("<font color=\"Red\">Invalid birth year!");
        error = true;
    }

    if((deathYear.isEmpty() && !ui->checkBox_alive->isChecked()))
    {
        ui->label_errorSciDeath->setText("<font color=\"Red\">Invalid death year!");
        error = true;
    }

    if(dead > 0 && live > dead)
    {
         ui->label_errorSciDeath->setText("<font color=\"Red\">You cannot die before you die");
         error = true;
    }

    if(dead == 0 && !ui->checkBox_alive->isChecked())
    {
        ui->label_errorSciDeath->setText("<font color=\"Red\">Invalid death year!");
        error = true;
    }

    if(dead > currentYear)
    {
        ui->label_errorSciDeath->setText("<font color=\"Red\">Invalid death year!");
        error = true;
    }

    if(!error)
    {
        Individual i1(nafn, nafn2, gender, live, dead,about);
        core.addIndividual(i1,found);
        if(found)
        {
            ui->label_errorSciName->setText("<font color=\"Red\">Scientist is already in the database");
            ui->label_errorSciSurname->setText("<font color=\"Red\">Scientist is already in the database");
            ui->label_errorSciBirth->setText("<font color=\"Red\">Scientist is already in the database");
            ui->label_errorSciDeath->setText("<font color=\"Red\">Scientist is already in the database");
        }
        else
        {
            this->close();
        }
    }
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
