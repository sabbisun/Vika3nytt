#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogaddsci.h"
#include "dialogaddcom.h"
#include "dialogeditsci.h"
#include "dialogaddcompconnection.h"
#include "dialogaddsciconnection.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createDropSearchForSci();
    setTreeSci();
    createDropSearchForComp();
    setTreeComp();

    int col = 3;
    int max = 200;
    for(int i = 0; i < col; i++)
    {
        ui->treeWidget_sci->setColumnWidth(i, max);
        ui->treeWidget_comp->setColumnWidth(i, max);
        max = max - 50;
    }
    /*   //eða:
    ui->treeWidget_sci->setColumnWidth(0, 200);
    ui->treeWidget_sci->setColumnWidth(1, 150);
    ui->treeWidget_sci->setColumnWidth(2, 100);

    ui->treeWidget_comp->setColumnWidth(0, 200);
    ui->treeWidget_comp->setColumnWidth(1, 150);
    ui->treeWidget_comp->setColumnWidth(2, 100);*/

    ui->Button_removeSci->setEnabled(false);
    ui->Button_removeComp->setEnabled(false);
    ui->Button_editComp->setEnabled(false);
    ui->Button_addCompConnection->setEnabled(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::searchSciMenu(string search)
{
   People p1;
   string searching = ui->comboBox_searchSci->currentText().toStdString();
   bool found;
   if(searching == "Name")
   {
      p1 = core.searchNam(search);
      setTreeSci(p1);
   }
   if(searching == "Gender")
   {
       char sea = search[0];
       p1 = core.searchGend(sea);
       setTreeSci(p1);
   }
   if(searching == "Year of birth")
    {
       int year = atoi(search.c_str());
       p1 = core.searchBir(year);
       setTreeSci(p1);
    }
    if(searching=="Year of death")
    {
       int year = atoi(search.c_str());
        p1 = core.searchDea(year);
        setTreeSci(p1);
    }
}

void MainWindow::searchCompMenu(const string search)
{
   Machines c1;
   string searching = ui->comboBox_searchComp->currentText().toStdString();
   if(searching == "Name")
   {
      c1 = core.searchComName(search);
      setTreeComp(c1);
   }
    if(searching == "Year of creation")
    {
       int year = atoi(search.c_str());
       c1 = core.searchComYear(year);
       setTreeComp(c1);
    }
    if(searching=="Type")
    {
        c1 = core.searchComType(search);
        setTreeComp(c1);
    }
}

void MainWindow::setTreeSci()
{
    ui->treeWidget_sci->clear();
    ui->treeWidget_sci->setColumnCount(4);
    ui->treeWidget_sci->setHeaderLabels(QStringList() << "Name" << "Gender" << "Age" << "Id");
    ui->treeWidget_sci->setColumnHidden(3, true);
    People scientists = core.sortSciAlpabetBack();

    for(int i = 0; i < scientists.getSize(); i++)
    {
        addTreeRootSci(scientists.getIndi(i));
    }
     ui->treeWidget_sci->sortByColumn(0,Qt::AscendingOrder);
}

void MainWindow::setTreeSci(People & scientists)
{
    ui->treeWidget_sci->clear();
    ui->treeWidget_sci->setColumnCount(4);
    ui->treeWidget_sci->setHeaderLabels(QStringList() << "Name" << "Gender" << "Age" << "Id");
    ui->treeWidget_sci->setColumnHidden(3, true);

    for(int i = 0; i < scientists.getSize(); i++)
    {
        addTreeRootSci(scientists.getIndi(i));
    }
}

void MainWindow::setTreeComp()
{
    ui->treeWidget_comp->clear();
    ui->treeWidget_comp->setColumnCount(4);
    ui->treeWidget_comp->setHeaderLabels(QStringList() << "Name" << "Type" << "Built" << "Id");
    ui->treeWidget_comp->setColumnHidden(3, true);

    Machines computers = core.sortCompAlpabetBack();

    for(int i = 0; i < computers.getSize(); i++)
    {
        addTreeRootComp(computers.getComputer(i));
    }
    ui->treeWidget_comp->sortByColumn(0,Qt::AscendingOrder);
}

void MainWindow::setTreeComp(Machines & computers)
{
    ui->treeWidget_comp->clear();
    ui->treeWidget_comp->setColumnCount(4);
    ui->treeWidget_comp->setHeaderLabels(QStringList() << "Name" << "Type" << "Built" << "Id");
    ui->treeWidget_comp->setColumnHidden(3, true);

    for(int i = 0; i < computers.getSize(); i++)
    {
        addTreeRootComp(computers.getComputer(i));
    }
}

void MainWindow::addTreeRootSci(Individual scientist)
{
    QString name, gender, age;

    int id = scientist.getId();
    Machines connected = core.getConnectedComp(id);
    name = QString::fromStdString(scientist.getSurname() + ", " + scientist.getName());
    if(scientist.getGender() == 'm')
    {
        gender = QString::fromStdString("Male");
    }
    else
    {
        gender = QString::fromStdString("Female");
    }

    if(scientist.getDeath() == 0)
    {
        age = QString::number(scientist.getBirth()) + " - Today";
    }
    else
    {
    age = QString::number(scientist.getBirth()) + " - " + QString::number(scientist.getDeath());
    }

    QString idNumber = QString::number(id);
    QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->treeWidget_sci);
    treeItem->setText(0, name);
    treeItem->setText(1, gender);
    treeItem->setText(2, age);
    treeItem->setText(3, idNumber);

    for(int i = 0; i < connected.getSize(); i++)
    {
      addTreeChildSci(treeItem, connected.getComputer(i));
    }
}

void MainWindow::addTreeChildSci(QTreeWidgetItem *parent, Computer computer)
{
    // QString name, QString type, QString built
    int id = computer.getId();
    QString name, type, built;
    name = QString::fromStdString(computer.getName());
    type = QString::fromStdString(computer.getType());

    if(computer.getYear() == 0)
    {
        built = "Unbuilt";
    }
    else
    {
        built = QString::number(computer.getYear());
    }

    QString idNumber = QString::number(id);
    QTreeWidgetItem *treeItem = new QTreeWidgetItem();
    treeItem->setText(0, name);
    treeItem->setText(1, type);
    treeItem->setText(2, built);
    treeItem->setText(3, idNumber);

    parent->addChild(treeItem);
}

void MainWindow::addTreeRootComp(Computer computer)
{
    QString name, type, built;

    int id = computer.getId();
    People connected = core.getConnectedSci(id);

    name = QString::fromStdString(computer.getName());
    type = QString::fromStdString(computer.getType());

    if(computer.getYear() == 0)
    {
        built = "Unbuilt";
    }
    else
    {
        built = QString::number(computer.getYear());
    }

    QString idNumber = QString::number(id);
    QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->treeWidget_comp);
    treeItem->setText(0, name);
    treeItem->setText(1, type);
    treeItem->setText(2, built);
    treeItem->setText(3, idNumber);

    for(int i = 0; i < connected.getSize(); i++)
    {
      addTreeChildComp(treeItem, connected.getIndi(i));
    }
}

void MainWindow::addTreeChildComp(QTreeWidgetItem *parent, Individual scientist)
{
    int id = scientist.getId();
    // QString name, QString type, QString built
    QString name, gender, age;

    name = QString::fromStdString(scientist.getSurname() + ", " + scientist.getName());
    if(scientist.getGender() == 'm')
    {
        gender = QString::fromStdString("Male");
    }
    else
    {
        gender = QString::fromStdString("Female");
    }

    if(scientist.getDeath() == 0)
    {
        age = QString::number(scientist.getBirth()) + " - Today";
    }
    else
    {
    age = QString::number(scientist.getBirth()) + " - " + QString::number(scientist.getDeath());
    }

    QString idNumber = QString::number(id);
    QTreeWidgetItem *treeItem = new QTreeWidgetItem();
    treeItem->setText(0, name);
    treeItem->setText(1, gender);
    treeItem->setText(2, age);
    treeItem->setText(3, idNumber);

    parent->addChild(treeItem);
}
void MainWindow::createDropSearchForSci()
{
    ui->comboBox_searchSci->clear();
    ui->comboBox_searchSci->addItem("");
    ui->comboBox_searchSci->addItem("Name");
    ui->comboBox_searchSci->addItem("Gender");
    ui->comboBox_searchSci->addItem("Year of birth");
    ui->comboBox_searchSci->addItem("Year of death");
}

void MainWindow::createDropSearchForComp()
{
    ui->comboBox_searchComp->clear();
    ui->comboBox_searchComp->addItem("");
    ui->comboBox_searchComp->addItem("Name");
    ui->comboBox_searchComp->addItem("Type");
    ui->comboBox_searchComp->addItem("Year of creation");
}
void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    ui->Button_removeComp->setEnabled(false);
    ui->Button_editComp->setEnabled(false);
    ui->Button_addCompConnection->setEnabled(false);
    ui->Button_removeSci->setEnabled(false);
    ui->Button_editSci->setEnabled(false);
    ui->Button_addSciConnection->setEnabled(false);

}

void MainWindow::on_lineEdit_searchSci_textChanged(const QString &arg1)
{
    string search = arg1.toStdString();
    searchSciMenu(search);
}

void MainWindow::on_comboBox_searchSci_currentIndexChanged(const QString &arg1)
{
    ui->lineEdit_searchSci->setEnabled(true);
}

void MainWindow::on_lineEdit_searchComp_textChanged(const QString &arg1)
{
    string search = arg1.toStdString();
    searchCompMenu(search);
}

void MainWindow::on_comboBox_searchComp_currentIndexChanged(const QString &arg1)
{
    ui->lineEdit_searchComp->setEnabled(true);
}

void MainWindow::on_Button_addSci_clicked()
{
   DialogAddSci addSciWindow;
   addSciWindow.setModal(true);
   addSciWindow.exec();
   setTreeSci();
}



void MainWindow::on_Button_editSci_clicked()
{
    ui->Button_editSci->setEnabled(false);
    if(!ui->treeWidget_sci->currentItem()->parent())
    {
        QString id = ui->treeWidget_sci->currentItem()->text(3);
        QString gender = ui->treeWidget_sci->currentItem()->text(1);

        int trueID = id.toInt(); //leita að gaur með þetta id og fá nöfnin og árin
        QString name, surname, bYear, dYear;

        People temp = core.sortSciAlpabetFront();
        for(int i = 0; i < temp.getSize(); i++)
        {
            if(temp.getIndi(i).getId() == trueID)
            {
                name = QString::fromStdString(temp.getIndi(i).getName());
                surname = QString::fromStdString(temp.getIndi(i).getSurname());
                bYear = QString::number(temp.getIndi(i).getBirth());
                dYear = QString::number(temp.getIndi(i).getDeath());
            }
        }
        DialogEditSci editor;
        editor.setModal(true);
        editor.setId(id);
        editor.setName(name);
        editor.setSurname(surname);
        editor.setGender(gender);
        editor.setByear(bYear);
        editor.setDyear(dYear);
        editor.exec();
    }
    setTreeSci();
    ui->Button_editSci->setEnabled(true);
}

void MainWindow::on_Button_removeSci_clicked()
{
    ui->Button_removeSci->setEnabled(false);

    if(!ui->treeWidget_sci->currentItem()->parent())
    {
        qDebug() << QString("valdir vísindamann, parent");
        QModelIndexList selectedList = ui->treeWidget_sci->selectionModel()->selectedRows();

        int index;
        for(int i = 0; i < selectedList.count(); i++)
        {
            //QMessageBox::information(this,"", QString::number(selectedList.at(i).row()));
            index = selectedList.at(i).row();
        }

        //þetta er id-ið af manneskjunni í röð index
        QString temp = ui->treeWidget_sci->model()->data(ui->treeWidget_sci->model()->index(index, 3)).toString();
        int id = temp.toInt();

        //messagebox
        QMessageBox msgBox;
        msgBox.setText("Removal of a scientist");
        msgBox.setInformativeText("Are you sure you want to remove the selected scientist?");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        //msgBox.setDefaultButton(QMessageBox::Cancel);  //maybe
        int ret = msgBox.exec();

        bool removed;   //taka seinna

        switch (ret) {
            case QMessageBox::Yes:      core.removeIndividual(id, removed);
                                        setTreeSci();
                                        break;
            case QMessageBox::Cancel:   // Cancel was clicked
                                        break;
            default:                    // should never be reached
                                        break;
        }

    }
    else
    {
        qDebug() << QString("valdir tölvu, child");
        QString comIdQ = ui->treeWidget_sci->currentItem()->text(3);
        QString sciIdQ = ui->treeWidget_sci->currentItem()->parent()->text(3);
        QString comNameQ =  ui->treeWidget_sci->currentItem()->text(0);
        QString sciNameQ =  ui->treeWidget_sci->currentItem()->parent()->text(0);

        int sciId = sciIdQ.toInt();
        int comId = comIdQ.toInt();

        //core.removeConnection(sciId, comId);

        QMessageBox msgBoxRmCon;
        msgBoxRmCon.setText("Removal of a connection");
        QString text = "Are you sure you want to disconnect: \nScientist: " + sciNameQ + "\nComputer: " + comNameQ;
        msgBoxRmCon.setInformativeText(text);
        msgBoxRmCon.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        int ret = msgBoxRmCon.exec();

    }


}

void MainWindow::on_treeWidget_sci_itemSelectionChanged()
{
    ui->Button_removeSci->setEnabled(true);
    if(!ui->treeWidget_sci->currentItem()->parent())
    {
        ui->Button_editSci->setEnabled(true);
        ui->Button_addSciConnection->setEnabled(true);
    }
    else
    {
        ui->Button_editSci->setEnabled(false);
        ui->Button_addSciConnection->setEnabled(false);
    }
}

void MainWindow::on_Button_removeComp_clicked()
{
    ui->Button_removeComp->setEnabled(false);
    QModelIndexList selectedList = ui->treeWidget_comp->selectionModel()->selectedRows();

    if(!ui->treeWidget_comp->currentItem()->parent())
    {
        qDebug() << QString("valdir tölvu, parent");
        int index;
        for(int i = 0; i < selectedList.count(); i++)
        {
            index = selectedList.at(i).row();
        }

        QString temp = ui->treeWidget_comp->model()->data(ui->treeWidget_comp->model()->index(index, 3)).toString();
        int id = temp.toInt();
        // The Id of the computer in row 'index' of table

        QMessageBox msgBox;
        msgBox.setText("Removal of a scomputer");
        msgBox.setInformativeText("Are you sure you want to remove the selected computer");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        int ret = msgBox.exec();
        // Messagebox asks if user wants to remove or not

        bool removed;

        switch (ret) {
            case QMessageBox::Yes:      core.removeComputer(id, removed);
                                        setTreeComp();
                                        break;
            case QMessageBox::Cancel:   // Cancel was clicked
                                        break;
            default:                    // should never be reached
                                        break;
        }
    }
    else
    {
        qDebug() << QString("valdir vísindamann, child");

        QString sciNameQ = ui->treeWidget_comp->currentItem()->text(0);
        QString sciIdQ = ui->treeWidget_comp->currentItem()->text(3);
        QString comNameQ = ui->treeWidget_comp->currentItem()->parent()->text(0);
        QString comIdQ = ui->treeWidget_comp->currentItem()->parent()->text(3);

        qDebug() << sciNameQ;
        qDebug() << comNameQ;

        //int sciId;
        //int comId;

        QMessageBox msgBoxRmCon;
        msgBoxRmCon.setText("Removal of a connection");
        QString text = "Are you sure you want to disconnect: \nScientist: " + sciNameQ + "\nComputer: " + comNameQ;
        msgBoxRmCon.setInformativeText(text);
        msgBoxRmCon.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        int ret = msgBoxRmCon.exec();
    }
}

void MainWindow::on_treeWidget_comp_itemSelectionChanged()
{
    ui->Button_removeComp->setEnabled(true);
    if(!ui->treeWidget_comp->currentItem()->parent())
    {
        ui->Button_editComp->setEnabled(true);
        ui->Button_addCompConnection->setEnabled(true);
    }
    else
    {
        ui->Button_editComp->setEnabled(false);
        ui->Button_addCompConnection->setEnabled(false);
    }
}

void MainWindow::on_Button_editComp_clicked()
{
    ui->Button_editComp->setEnabled(false);
    if(!ui->treeWidget_comp->currentItem()->parent())
    {
        qDebug() << ui->treeWidget_comp->currentItem()->text(3);
        qDebug() << ui->treeWidget_comp->currentItem()->text(0);
        QString name = ui->treeWidget_comp->currentItem()->text(0);
        QString type = ui->treeWidget_comp->currentItem()->text(1);
        QString buildYear = ui->treeWidget_comp->currentItem()->text(2);
        DialogEditCom editor;
        editor.setModal(true);
        editor.setName(name);
        editor.setType(type);
        editor.setBuildYear(buildYear);
        editor.exec();
    }
}

void MainWindow::on_Button_addSciConnection_clicked()
{
    DialogAddSciConnection addSciConn;
    addSciConn.setModal(true);
    int idcomp = addSciConn.exec();
    //þetta er id-ið af manneskjunni í röð ind
    QString temp = ui->treeWidget_sci->currentItem()->text(3);
    int idsci = temp.toUInt();
    core.addConnection(idsci,idcomp);
    setTreeSci();
}

void MainWindow::on_Button_addCompConnection_clicked()
{
    DialogAddCompConnection addCompConn;
    addCompConn.setModal(true);
    int idsci = addCompConn.exec();
    QString temp = ui->treeWidget_comp->currentItem()->text(3);
    int idcomp = temp.toInt();
    core.addConnection(idsci,idcomp);
    setTreeComp();
}

void MainWindow::on_Button_addComp_clicked()
{
       DialogAddCom addComWindow;
       addComWindow.setModal(true);
       addComWindow.exec();
       setTreeComp();

}
