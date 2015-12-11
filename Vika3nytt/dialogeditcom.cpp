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
    ui->lineEdit_yearDeth->setEnabled(true);
}
