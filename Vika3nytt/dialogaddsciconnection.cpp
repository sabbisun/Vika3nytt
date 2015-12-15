#include "dialogaddsciconnection.h"
#include "ui_dialogaddsciconnection.h"

DialogAddSciConnection::DialogAddSciConnection(QWidget *parent) :
    QDialog(parent, Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowMinMaxButtonsHint ),
    ui(new Ui::DialogAddSciConnection)
{
    ui->setupUi(this);
    createComboBox();
}

DialogAddSciConnection::~DialogAddSciConnection()
{
    delete ui;
}

void DialogAddSciConnection::createComboBox()
{
    Machines c1 = core.sortCompAlpabetFront();
    for(int i = 0; i < c1.getSize(); i++)
    {
        ui->comboBox_AddSciCon->addItem(QString::fromStdString(c1.getComputer(i).getName()));
    }
}

void DialogAddSciConnection::on_button_confirmSciCon_clicked()
{
    string name = ui->comboBox_AddSciCon->currentText().toStdString();
    Machines c1 = core.sortCompAlpabetFront();
    int id = -1;
    for(int i = 0; i < c1.getSize(); i++)
    {
        if(name == c1.getComputer(i).getName())
        {
            id = c1.getComputer(i).getId();
            break;
        }
    }
    QDialog::done(id);
}

void DialogAddSciConnection::on_button_cancelConSci_clicked()
{
    QDialog::done(-1);
}
