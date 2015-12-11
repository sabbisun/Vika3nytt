#include "dialogeditsci.h"
#include "ui_dialogeditsci.h"

DialogEditSci::DialogEditSci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEditSci)
{
    ui->setupUi(this);
}

DialogEditSci::~DialogEditSci()
{
    delete ui;
}

void DialogEditSci::on_checkBox_alive_clicked()
{
    ui->lineEdit_yearDeth->setEnabled(false);
}
