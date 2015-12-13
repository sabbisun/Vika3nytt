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
        ui->lineEdit_yearBuilt->setEnabled(false);
    }
    else
    {
        ui->lineEdit_yearBuilt->setEnabled(true);
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
    bool isLegalEdit = true;

    QString name = ui->lineEdit_name->text();
    if(name.isEmpty())
    {
        ui->label_typeError->setText("must enter name");
        isLegalEdit = false;
    }
    QString type = ui->lineEdit_type->text();
    if(type.isEmpty())
    {
        ui->label_typeError->setText("must enter type");
        isLegalEdit = false;
    }
    QString yearBuilt = ui->lineEdit_yearBuilt->text();
    if(ui->checkBox_built->isChecked())
    {
        yearBuilt = QString::number(0);
    }
    else if(!ui->checkBox_built->isChecked() && !yearBuilt.isEmpty())
    {
        yearBuilt = ui->lineEdit_yearBuilt->text();
    }
    else if(!ui->checkBox_built->isChecked() && yearBuilt.isEmpty())
    {
        ui->label_buildYearError->setText("enter build year");
        isLegalEdit = false;
    }

    if(isLegalEdit)
    {
        int id = qsId.toInt();
        core.updateCompName(name.toStdString(), id);
        core.updateCompType(type.toStdString(), id);
        core.updateCompBYear(yearBuilt.toInt(), id);
        qsId = "";
        this->close();
    }
}

void DialogEditCom::on_Button_cancel_clicked()
{
    this->close();
}
