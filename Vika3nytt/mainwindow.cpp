#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogaddsci.h"
#include "dialogeditsci.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createDropSearchForSci();
    setTreeSci();
    createDropSearchForComp();
    setTreeComp();

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

    People scientists = core.sortSciAlpabetFront();

    for(int i = 0; i < scientists.getSize(); i++)
    {
        addTreeRootSci(scientists.getIndi(i));
    }
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

    Machines computers = core.sortCompAlpabetFront();

    for(int i = 0; i < computers.getSize(); i++)
    {
        addTreeRootComp(computers.getComputer(i));
    }
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
    if(index == 0)
    {
        createDropSearchForSci();
        setTreeSci();
    }
    else
    {
        createDropSearchForComp();
        setTreeComp();
    }
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
}

void MainWindow::on_Button_editSci_clicked()
{
    DialogEditSci editSciWindow;
    editSciWindow.setModal(true);
    editSciWindow.exec();
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
        msgBox.setInformativeText("Are you sure you want to remove scientist with the id " + temp + "?");
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
        //ui->treeWidget_sci->currentItem()->
    }


}

void MainWindow::on_treeWidget_sci_itemSelectionChanged()
{
    ui->Button_removeSci->setEnabled(true);


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
        msgBox.setInformativeText("Are you sure you want to remove the computer with the id " + temp + "?");
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

    }
}
