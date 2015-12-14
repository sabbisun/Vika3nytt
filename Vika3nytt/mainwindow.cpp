#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    ui->Button_aboutSci->setEnabled(false);

    setColumnWidth();

    disableButtons();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::searchSciMenu(string search)
{
    string searching = ui->comboBox_searchSci->currentText().toStdString();
    People p1;
    if(searching == "Name")
    {
        p1 = core.searchNam(search);
        setTreeSci(p1);
    }
    else if(searching == "Gender")
    {
        char sea = search[0];
        p1 = core.searchGend(sea);
        setTreeSci(p1);
    }
    else if(searching == "Year of birth")
    {
        int year = atoi(search.c_str());
        p1 = core.searchBir(year);
        setTreeSci(p1);
    }
    else if(searching == "Year of death")
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
    ui->treeWidget_sci->setColumnCount(5);
    ui->treeWidget_sci->setHeaderLabels(QStringList() << "Name" << "Gender" << "Birth year" << "Id" << "Death year");
    ui->treeWidget_sci->setColumnHidden(3, true);
    People scientists = core.sortSciAlpabetBack();

    for(int i = 0; i < scientists.getSize(); i++)
    {
        addTreeRootSci(scientists.getIndi(i));
    }
     ui->treeWidget_sci->sortByColumn(0, Qt::AscendingOrder);
}

void MainWindow::setTreeSci(People & scientists)
{
    ui->treeWidget_sci->clear();
    ui->treeWidget_sci->setColumnCount(5);
    ui->treeWidget_sci->setHeaderLabels(QStringList() << "Name" << "Gender" << "Birth year" << "Id" << "Death year");
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
    QString name, gender, bYear, dYear;

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

    bYear = QString::number(scientist.getBirth());

    if(scientist.getDeath() == 0)
    {
        dYear = "Alive";
    }
    else
    {
        dYear = QString::number(scientist.getDeath());
    }

    QString idNumber = QString::number(id);
    QTreeWidgetItem *treeItem = new QTreeWidgetItem(ui->treeWidget_sci);
    treeItem->setText(0, name);
    treeItem->setText(1, gender);
    treeItem->setText(2, bYear);
    treeItem->setText(3, idNumber);
    treeItem->setText(4, dYear);

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
        built = "Not built";
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
        built = "Not built";
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
        age = QString::number(scientist.getBirth()) + " - Alive";
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

void MainWindow::disableButtons()
{
    ui->Button_removeSci->setEnabled(false);
    ui->Button_removeComp->setEnabled(false);
    ui->Button_editSci->setEnabled(false);
    ui->Button_editComp->setEnabled(false);
    ui->Button_addSciConnection->setEnabled(false);
    ui->Button_addCompConnection->setEnabled(false);
    ui->Button_aboutSci->setEnabled(false);
    ui->Button_aboutcomp->setEnabled(false);
}

void MainWindow::setColumnWidth()
{
    int col = 3;
    int max = 200;
    for(int i = 0; i < col; i++)
    {
        ui->treeWidget_sci->setColumnWidth(i, max);
        ui->treeWidget_comp->setColumnWidth(i, max);
        max = max - 50;
    }
    ui->treeWidget_sci->setColumnWidth(0, 250);
    ui->treeWidget_comp->setColumnWidth(0, 250);
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
    (void)index;
    disableButtons();

}

void MainWindow::on_lineEdit_searchSci_textChanged(const QString &arg1)
{
    string search = arg1.toStdString();
    searchSciMenu(search);
}
void MainWindow::on_comboBox_searchSci_currentIndexChanged(const QString &arg1)
{
    (void)arg1;
    if(ui->comboBox_searchSci->currentText().toStdString() == "")
    {
        ui->lineEdit_searchSci->setDisabled(true);
    }
    else
    {
         ui->lineEdit_searchSci->setEnabled(true);
    }
    setTreeSci();
}

void MainWindow::on_lineEdit_searchComp_textChanged(const QString &arg1)
{
    string search = arg1.toStdString();
    searchCompMenu(search);
}
void MainWindow::on_Button_addSci_clicked()
{
   DialogAddSci addSciWindow;
   addSciWindow.setModal(true);
   addSciWindow.exec();
   setTreeSci();
   disableButtons();
}

void MainWindow::on_Button_editSci_clicked()
{
    ui->Button_editSci->setEnabled(false);
    if(!ui->treeWidget_sci->currentItem()->parent())
    {
        QString id = ui->treeWidget_sci->currentItem()->text(3);
        QString gender = ui->treeWidget_sci->currentItem()->text(1);
        int trueID = id.toInt(); //leita að gaur með þetta id og fá nöfnin og árin
        QString name, surname, bYear, dYear,desc;
        // Now a search begins for the scientist with this id

        People temp = core.sortSciAlpabetFront();
        for(int i = 0; i < temp.getSize(); i++)
        {
            if(temp.getIndi(i).getId() == trueID)
            {
                name = QString::fromStdString(temp.getIndi(i).getName());
                surname = QString::fromStdString(temp.getIndi(i).getSurname());
                bYear = QString::number(temp.getIndi(i).getBirth());
                dYear = QString::number(temp.getIndi(i).getDeath());
                desc = QString::fromStdString(temp.getIndi(i).getAbout());
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
        editor.setDesc(desc);
        editor.exec();
    }
    setTreeSci();
    disableButtons();
}

void MainWindow::on_Button_removeSci_clicked()
{
    ui->Button_removeSci->setEnabled(false);
    if(!ui->treeWidget_sci->currentItem()->parent())
    {
        QString temp = ui->treeWidget_sci->currentItem()->text(3);
        int id = temp.toInt();
        // The Id from row 3 of the currently selected scientist in table

        QMessageBox msgBox;
        msgBox.setText("Removal of a scientist");
        msgBox.setInformativeText("Are you sure you want to remove the selected scientist?");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        int read = msgBox.exec();
        // Messagebox asks if user wants to remove or not

        switch (read) {
            case QMessageBox::Yes:  core.removeIndividual(id);
                                    setTreeSci();
                                    break;
            default:                // Close without changes made
                                    break;
        }
    }
    else
    {
        QString comIdQ = ui->treeWidget_sci->currentItem()->text(3);
        QString sciIdQ = ui->treeWidget_sci->currentItem()->parent()->text(3);
        QString comNameQ =  ui->treeWidget_sci->currentItem()->text(0);
        QString sciNameQ =  ui->treeWidget_sci->currentItem()->parent()->text(0);

        int sciId = sciIdQ.toUInt();
        int comId = comIdQ.toUInt();

        QMessageBox msgBoxRmCon;
        msgBoxRmCon.setText("Removal of a connection");
        QString text = "Are you sure you want to disconnect: \nScientist: " + sciNameQ + "\nComputer: " + comNameQ;
        msgBoxRmCon.setInformativeText(text);
        msgBoxRmCon.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        int ret = msgBoxRmCon.exec();
        switch(ret)
        {
            case QMessageBox::Yes:  core.removeConnection(sciId, comId);
                                    break;
            default:                // Close without changes made
                                    break;
        }
    }
    setTreeSci();
    disableButtons();
}

void MainWindow::on_treeWidget_sci_itemSelectionChanged()
{
    ui->Button_removeSci->setEnabled(true);
    if(!ui->treeWidget_sci->currentItem()->parent())
    {
        ui->Button_editSci->setEnabled(true);
        ui->Button_addSciConnection->setEnabled(true);
        ui->Button_aboutSci->setEnabled(true);
    }
    else
    {
        ui->Button_editSci->setEnabled(false);
        ui->Button_addSciConnection->setEnabled(false);
        ui->Button_aboutSci->setEnabled(false);
    }
}

void MainWindow::on_Button_removeComp_clicked()
{
    ui->Button_removeComp->setEnabled(false);
    if(!ui->treeWidget_comp->currentItem()->parent())
    {
        QString temp = ui->treeWidget_comp->currentItem()->text(3);
        int id = temp.toInt();
        // The Id from row 3 of the currently selected computer in table

        QMessageBox msgBox;
        msgBox.setText("Removal of a scomputer");
        msgBox.setInformativeText("Are you sure you want to remove the selected computer?");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        int ret = msgBox.exec();
        // Messagebox asks if user wants to remove or not

        switch (ret) {
            case QMessageBox::Yes:  core.removeComputer(id);
                                    setTreeComp();
                                    break;
            default:                // Close without changes made
                                    break;
        }
    }
    else
    {
        QString sciNameQ = ui->treeWidget_comp->currentItem()->text(0);
        QString sciIdQ = ui->treeWidget_comp->currentItem()->text(3);
        QString comNameQ = ui->treeWidget_comp->currentItem()->parent()->text(0);
        QString comIdQ = ui->treeWidget_comp->currentItem()->parent()->text(3);

        int sciId = sciIdQ.toUInt();
        int comId = comIdQ.toUInt();

        QMessageBox msgBoxRmCon;
        msgBoxRmCon.setText("Removal of a connection");
        QString text = "Are you sure you want to disconnect: \nScientist: " + sciNameQ + "\nComputer: " + comNameQ;
        msgBoxRmCon.setInformativeText(text);
        msgBoxRmCon.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        int ret = msgBoxRmCon.exec();

        switch(ret)
        {
            case QMessageBox::Yes:  core.removeConnection(sciId, comId);
                                    break;
            default:                // Close without changes made
                                    break;
        }
    }
    setTreeComp();
    disableButtons();
}

void MainWindow::on_treeWidget_comp_itemSelectionChanged()
{
    ui->Button_removeComp->setEnabled(true);
    if(!ui->treeWidget_comp->currentItem()->parent())
    {
        ui->Button_editComp->setEnabled(true);
        ui->Button_addCompConnection->setEnabled(true);
        ui->Button_aboutcomp->setEnabled(true);
    }
    else
    {
        ui->Button_editComp->setEnabled(false);
        ui->Button_addCompConnection->setEnabled(false);
        ui->Button_aboutcomp->setEnabled(false);
    }
}

void MainWindow::on_Button_editComp_clicked()
{
    ui->Button_editComp->setEnabled(false);
    if(!ui->treeWidget_comp->currentItem()->parent())
    {
        //qDebug() << ui->treeWidget_comp->currentItem()->text(3);
        //qDebug() << ui->treeWidget_comp->currentItem()->text(0);
        QString id = ui->treeWidget_comp->currentItem()->text(3);
        QString name = ui->treeWidget_comp->currentItem()->text(0);
        QString type = ui->treeWidget_comp->currentItem()->text(1);
        QString buildYear = ui->treeWidget_comp->currentItem()->text(2);
        int i = id.toUInt();
        Computer c1 = core.getData().getSingleComp(i);
        string desc = c1.getAbout();
        QString d = QString::fromStdString(desc);
        DialogEditCom editor;
        editor.setModal(true);
        editor.setId(id);
        editor.setName(name);
        editor.setType(type);
        editor.setBuildYear(buildYear);
        editor.setAbout(d);
        editor.exec();
    }
    setTreeComp();
    disableButtons();
}

void MainWindow::on_Button_addSciConnection_clicked()
{
    DialogAddSciConnection addSciConn;
    addSciConn.setModal(true);
    int idcomp = addSciConn.exec();

    QString temp = ui->treeWidget_sci->currentItem()->text(3);
    if(idcomp != -1)
    {
        int idsci = temp.toUInt();
        core.addConnection(idsci, idcomp);
    }
    setTreeSci();
    setTreeComp();
    disableButtons();
}

void MainWindow::on_Button_addCompConnection_clicked()
{
    DialogAddCompConnection addCompConn;
    addCompConn.setModal(true);
    int idsci = addCompConn.exec();
    QString temp = ui->treeWidget_comp->currentItem()->text(3);
    //qDebug() << QString::number(idsci);
    if(idsci != -1)
    {
        int idcomp = temp.toInt();
        core.addConnection(idsci, idcomp);
    }
    setTreeComp();
    setTreeSci();
    disableButtons();
}

void MainWindow::on_Button_addComp_clicked()
{
    DialogAddCom addComWindow;
    addComWindow.setModal(true);
    addComWindow.exec();
    setTreeComp();
    disableButtons();
}

void MainWindow::on_comboBox_searchComp_currentIndexChanged(const QString &arg1)
{
    (void)arg1;
    if(ui->comboBox_searchComp->currentText().toStdString() == "")
    {
        ui->lineEdit_searchComp->setDisabled(true);
    }
    else
    {
         ui->lineEdit_searchComp->setEnabled(true);
    }
}
void MainWindow::setAltRowColor()
{
    ui->treeWidget_sci->setAlternatingRowColors(true);
    ui->treeWidget_sci->setStyleSheet("alternate-background-color: rgb(204, 255, 255);background-color: rgb(255, 204, 204);");
    ui->treeWidget_comp->setAlternatingRowColors(true);
    ui->treeWidget_comp->setStyleSheet("alternate-background-color: rgb(204, 255, 255);background-color: rgb(255, 204, 204);");
}

void MainWindow::on_Button_aboutSci_clicked()
{
    QMessageBox msgBox;
    QString temp = ui->treeWidget_sci->currentItem()->text(3);
    int id = temp.toUInt();
    Individual i1 = core.getData().getSingleIndi(id);
    string name = "Information on scientist: " + i1.getSurname()+ ", " + i1.getName();
    string about = i1.getAbout();
    if(about.empty())
    {
        about = "Nothing on this scientist!";
    }
    msgBox.setText(QString::fromStdString(name));
    msgBox.setInformativeText(QString::fromStdString(about));
    msgBox.setStandardButtons(QMessageBox::Close);
    msgBox.exec();
}

void MainWindow::on_Button_aboutcomp_clicked()
{
    QMessageBox msgBox;
    QString temp = ui->treeWidget_comp->currentItem()->text(3);
    int id = temp.toUInt();
    Computer c1 = core.getData().getSingleComp(id);
    string name = "Information on computer: " +  c1.getName();
    string about = c1.getAbout();
    if(about.empty())
    {
        about = "Nothing on this computer!";
    }
    msgBox.setText(QString::fromStdString(name));
    msgBox.setInformativeText(QString::fromStdString(about));
    msgBox.setStandardButtons(QMessageBox::Close);
    msgBox.exec();
}
