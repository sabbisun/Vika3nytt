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
        ui->lineEdit_addCreationYear->setEnabled(true);
    }
    else
    {
       ui->lineEdit_addCreationYear->setEnabled(false);
    }
}
