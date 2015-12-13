#include "dialogaddcom.h"
#include "ui_dialogaddcom.h"

DialogAddCom::DialogAddCom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddCom)
{
    ui->setupUi(this);
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
}
void DialogAddCom::on_pushButton_cancelAdd_pressed()
{
    this->close();
}
