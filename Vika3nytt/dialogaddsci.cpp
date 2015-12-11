#include "dialogaddsci.h"
#include "ui_dialogaddsci.h"

DialogAddSci::DialogAddSci(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddSci)
{
    ui->setupUi(this);
}

DialogAddSci::~DialogAddSci()
{
    delete ui;
}
