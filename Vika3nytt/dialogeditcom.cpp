#include "dialogeditcom.h"
#include "ui_dialogeditcom.h"

DialogEditCom::DialogEditCom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEditCom)
{
    ui->setupUi(this);
}

DialogEditCom::~DialogEditCom()
{
    delete ui;
}

void DialogEditCom::on_checkBox_built_clicked()
{
    if(ui->checkBox_built->isChecked())
    {
     ui->lineEdit_yearDeth->setEnabled(true);
    }
    else
    {
        ui->lineEdit_yearDeth->setEnabled(false);
    }
}

void DialogEditCom::setName(QString & q)
{
    ui->lineEdit_name->setText(q);
}

void DialogEditCom::setType(QString & q)
{
    ui->lineEdit_type->setText(q);
}

void DialogEditCom::setBuildYear(QString & q)
{
    int built = q.toInt();
    if(built)
    {
        ui->lineEdit_yearDeth->setText(q);
        ui->checkBox_built->setChecked(true);
        ui->lineEdit_yearDeth->setEnabled(true);
    }
    else
    {
        ui->checkBox_built->setChecked(false);
    }
}
