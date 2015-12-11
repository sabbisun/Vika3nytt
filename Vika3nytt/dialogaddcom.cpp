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
