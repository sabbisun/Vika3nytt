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
    bool found = true;
    QString name = ui ->lineEdit_addComName->text();
    string nafn = name.toStdString();
    QString qType = ui->lineEdit_addType->text();
    string type = qType.toStdString();
    QString creationYear = ui->lineEdit_creationYear->text();
    int live = creationYear.toInt();

    Computer c1(live, nafn,type);
    if(name.isEmpty()||qType.isEmpty())
    {
       //found = false;
        // Error
       //return;
    }
    core.addComputer(c1,found);
    this->close();
}


void DialogAddCom::on_pushButton_cancelAdd_pressed()
{
    this->close();
}
