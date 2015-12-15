#include "dialogaddcom.h"
#include "ui_dialogaddcom.h"

DialogAddCom::DialogAddCom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddCom)
{
    ui->setupUi(this);

    QFont f( "Arial", 10, QFont::Bold);
    ui->label_errorNameComp->setFont(f);
    ui->label_errorTypeComp->setFont(f);
    ui->label_errorCompYear->setFont(f);
    // Changes font of the error labels
}

DialogAddCom::~DialogAddCom()
{
    delete ui;
}

void DialogAddCom::on_checkBox_created_clicked()
{
    if(ui->checkBox_created->isChecked())
    {
        ui->lineEdit_creationYear->setEnabled(false);
        ui->lineEdit_creationYear->setText("");
    }
    else
    {
       ui->lineEdit_creationYear->setEnabled(true);
    }
}

void DialogAddCom::on_confirmAddButton_clicked()
{
    bool error = false;
    bool found = false;
    clearErrorLabels();
    QString name = ui ->lineEdit_addComName->text();
    string nafn = name.toStdString();
    QString qType = ui->lineEdit_addType->text();
    string type = qType.toStdString();
    QString creationYear = ui->lineEdit_creationYear->text();
    string about = ui->textEdit_addComp->document()->toPlainText().toStdString();
    int live = creationYear.toInt();
    int currentYear = QDate::currentDate().year();

    if(name.isEmpty())
    {
        ui->label_errorNameComp->setText("<font color=\"Red\">Please enter a name!");
        error = true;
    }

    if(ui->checkBox_created->isChecked())
    {
        live = 0;
    }
    else if(creationYear.isEmpty())
    {
        ui->label_errorCompYear->setText("<font color=\"Red\">Please enter a creation year!");
        error = true;
    }
    else if(live == 0 || live > currentYear)
    {
        ui->label_errorCompYear->setText("<font color=\"Red\">Invalid death year!");
        error = true;
    }

    if(qType.isEmpty())
    {
        ui->label_errorTypeComp->setText("<font color=\"Red\">Please enter a type");
        error = true;
    }

    if(!error)
    {
        Computer c1(live, nafn, type, about);
        core.addComputer(c1, found);
        if(found)
        {
            ui->label_errorNameComp->setText("<font color=\"Red\">This computer is already in the database!");
            ui->label_errorCompYear->setText("<font color=\"Red\">This computer is already in the database!");
            ui->label_errorTypeComp->setText("<font color=\"Red\">This computer is already in the database!");
        }
        else
        {
            this->close();
        }
    }
}

void DialogAddCom::on_pushButton_cancelAdd_pressed()
{
    this->close();
}

void DialogAddCom::clearErrorLabels()
{
    ui->label_errorNameComp->setText("");
    ui->label_errorCompYear->setText("");
    ui->label_errorTypeComp->setText("");
}
