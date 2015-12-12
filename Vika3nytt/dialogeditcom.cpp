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
        ui->lineEdit_yearBuilt->setEnabled(true);
    }
    else
    {
        ui->lineEdit_yearBuilt->setEnabled(false);
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
        ui->lineEdit_yearBuilt->setText(q);
        ui->checkBox_built->setChecked(true);
        ui->lineEdit_yearBuilt->setEnabled(true);
    }
    else
    {
        ui->checkBox_built->setChecked(false);
    }
}

void DialogEditCom::on_Button_confirm_clicked()
{
    QString name = ui->lineEdit_name->text();
    QString type = ui->lineEdit_type->text();
    QString yearBuilt = ui->lineEdit_yearBuilt->text();
    bool checked = ui->checkBox_built->isChecked();
    if((name == "") || (type == "") || ((checked) && (yearBuilt == "")))
    {
        qDebug() << QString("not enough info");
    }
}

void DialogEditCom::on_Button_cancel_clicked()
{
    this->close();
}
