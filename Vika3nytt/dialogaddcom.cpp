#include "dialogaddcom.h"
#include "ui_dialogaddcom.h"

DialogAddCom::DialogAddCom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddCom)
{
    ui->setupUi(this);

    QFont f( "Arial", 10, QFont::Bold);
    ui->label_errorNameComp->setFont(f);
    ui->label_errorTypeComp->setFont(f);
    ui->label_errorCompYear->setFont(f);
}

DialogAddCom::~DialogAddCom()
{
    delete ui;
}

void DialogAddCom::on_checkBox_created_clicked()
{
    if(ui->checkBox_created->isChecked())
    {
        ui->lineEdit_creationYear->setEnabled(true);
    }
    else
    {
       ui->lineEdit_creationYear->setEnabled(false);
    }
}

void DialogAddCom::on_confirmAddButton_clicked()
{
    char gender;
    bool error = false;
    bool found = false;
    clearErrorLabels();
    QString name = ui ->lineEdit_addComName->text();
    string nafn = name.toStdString();
    QString qType = ui->lineEdit_addType->text();
    string type = qType.toStdString();
    QString creationYear = ui->lineEdit_creationYear->text();
    int live = creationYear.toInt();

    if(name.isEmpty())
    {
        ui->label_errorNameComp->setText("<font color=\"Red\">Name cannot be empty!");
        error = true;
    }

    if(!ui->checkBox_created->isChecked())
    {
        live = 0;
    }
    else if(live == 0 || creationYear.isEmpty())
    {
        ui->label_errorCompYear->setText("<font color=\"Red\">That is not a possible creation year!");
        error = true;
    }

    if(qType.isEmpty())
    {
        ui->label_errorTypeComp->setText("<font color=\"Red\">Type cannot be empty!");
        error = true;
    }

    if(!error)
    {
        Computer c1(live, nafn, type);
        core.addComputer(c1, found);
        if(found)
        {
            ui->label_errorNameComp->setText("<font color=\"Red\">This computer is already in the database!");
            ui->label_errorCompYear->setText("<font color=\"Red\">This computer is already in the database!");
            ui->label_errorTypeComp->setText("<font color=\"Red\">This computer is already in the database!");
        }
        else
        {
            this->close();
        }
    }
}

void DialogAddCom::on_pushButton_cancelAdd_pressed()
{
    this->close();
}

void DialogAddCom::clearErrorLabels()
{
    ui->label_errorNameComp->setText("");
    ui->label_errorCompYear->setText("");
    ui->label_errorTypeComp->setText("");
}
