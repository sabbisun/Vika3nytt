#include "dialogaddcompconnection.h"
#include "ui_dialogaddcompconnection.h"

DialogAddCompConnection::DialogAddCompConnection(QWidget *parent) :
    QDialog(parent,Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowMinMaxButtonsHint ),
    ui(new Ui::DialogAddCompConnection)
{
    ui->setupUi(this);
    createComboBox();
}

DialogAddCompConnection::~DialogAddCompConnection()
{
    delete ui;
}

void DialogAddCompConnection::createComboBox()
{
    People p1 = core.sortSciAlpabetFront();
    for(int i = 0; i < p1.getSize(); i++)
    {
        ui->comboBox_addCompCon->addItem(QString::fromStdString(p1.getIndi(i).getSurname() + ", " + p1.getIndi(i).getName()));
    }
}

void DialogAddCompConnection::on_button_confirmCompCon_clicked()
{
    string name = ui->comboBox_addCompCon->currentText().toStdString();
    People p1 = core.sortSciAlpabetFront();
    int id;
    for(int i = 0; i < p1.getSize(); i++)
    {
        string label = p1.getIndi(i).getSurname()+", " + p1.getIndi(i).getName() ;
        if(name == label)
        {
            id = p1.getIndi(i).getId();
            break;
        }
    }
    QDialog::done(id);
}

void DialogAddCompConnection::on_button_cancelConComp_clicked()
{
    QDialog::done(-1);
}
