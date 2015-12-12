#include "dialogeditcom.h"
#include "ui_dialogeditcom.h"

QString qsId;

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

void DialogEditCom::setId(QString &q)
{
    qsId = q;
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
    if(ui->lineEdit_name->text() == "")
    {
        //error
    }
    QString type = ui->lineEdit_type->text();
    if(ui->lineEdit_type->text() == "")
    {
        //error
    }
    QString yearBuilt;// = ui->lineEdit_yearBuilt->text();
    if(ui->checkBox_built->isChecked())
    {
        yearBuilt = QString::number(0);
    }
    else if(!ui->checkBox_built->isChecked() && ui->lineEdit_yearBuilt->text() != "")
    {
        yearBuilt = ui->lineEdit_yearBuilt->text();
    }
    else if(!ui->checkBox_built->isChecked() && ui->lineEdit_yearBuilt->text() == "")
    {
        //error
    }

    /*bool checked = ui->checkBox_built->isChecked();
    if((name == "") || (type == "") || ((checked) && (yearBuilt == "")))
    {
        qDebug() << QString("not enough info");
    }*/

    int id = qsId.toInt();
    core.updateCompName(name.toStdString(), id);
    core.updateCompType(type.toStdString(), id);
    core.updateCompBYear(yearBuilt.toInt(), id);
    qsId = "";
    this->close();
}

void DialogEditCom::on_Button_cancel_clicked()
{
    this->close();
}
