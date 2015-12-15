#include "dialogeditsci.h"
#include "ui_dialogeditsci.h"

QString qId = "";

DialogEditSci::DialogEditSci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEditSci)
{
    ui->setupUi(this);

    QFont f( "Arial", 10, QFont::Bold);
    ui->label_nameError->setFont(f);
    ui->label_surnameError->setFont(f);
    ui->label_birthError->setFont(f);
    ui->label_deathError->setFont(f);
    // Changes font of the error labels
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

void DialogEditSci::setDesc(QString &q)
{
    ui->lineEdit_editSciDesc->setPlainText(q);
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
    clearErrorLabels();
    int currentYear = QDate::currentDate().year();

    QString name = ui->lineEdit_name->text();
    if(name.isEmpty())
    {
        ui->label_nameError->setText("<font color=\"Red\">Please enter a name.");
        isLegalEdit = false;
    }
    QString surname = ui->lineEdit_surname->text();
    if(surname.isEmpty())
    {
        ui->label_surnameError->setText("<font color=\"Red\">Please enter a surname.");
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

    QString byear = ui->lineEdit_yearBirth->text();
    if(byear.isEmpty() || (byear.toInt() == 0) || byear.toInt() > currentYear)
    {
        ui->label_birthError->setText("<font color=\"Red\">Please enter a birth year.");
        isLegalEdit = false;
    }

    QString dyear = ui->lineEdit_yearDeth->text();
    if(ui->checkBox_alive->isChecked())
    {
        dyear = QString::number(0);
    }
    else if(!ui->checkBox_alive->isChecked() && dyear.isEmpty())
    {
         ui->label_deathError->setText("<font color=\"Red\">Please enter a death year.");
         isLegalEdit = false;
    }
    else if(!ui->checkBox_alive->isChecked() && !dyear.isEmpty())
    {
        dyear = ui->lineEdit_yearDeth->text();
        if(dyear.toInt() < byear.toInt() || dyear.toInt() > currentYear)
        {
            ui->label_deathError->setText("<font color=\"Red\">Invalid deathyear.");
            isLegalEdit = false;
        }
        else
        {
            dyear = ui->lineEdit_yearDeth->text();
        }
    }
    string desc = ui->lineEdit_editSciDesc->document()->toPlainText().toStdString();
    if(isLegalEdit)
    {
        int id = qId.toInt();
        core.updateIndiName(name.toStdString(), id);
        core.updateIndiSurname(surname.toStdString(), id);
        core.updateIndiGender(QString(gender).toStdString()[0], id);
        core.updateIndiBYear(byear.toUInt(), id);
        core.updateIndiDYear(dyear.toUInt(), id);
        core.updateIndiDesc(desc,id);
        qId = "";
        this->close();
    }
}

void DialogEditSci::clearErrorLabels()
{
    ui->label_nameError->setText("");
    ui->label_surnameError->setText("");
    ui->label_deathError->setText("");
    ui->label_birthError->setText("");
}




