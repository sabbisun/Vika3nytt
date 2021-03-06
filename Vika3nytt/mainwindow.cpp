#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMovie>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tab_sci->setDisabled(true);
    ui->tab_comp->setDisabled(true);
    setFrontPagelook();
    createDropSearchForSci();
    setTreeSci();
    createDropSearchForComp();
    setTreeComp();
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
        char sea;
        if(search == "male" || search == "Male")
        {
            sea = 'm';
        }
        else if(search == "female" || search == "Female")
        {
            sea = 'f';
        }
        else if(search.length() > 1)
        {
            sea = ' ';
        }
        else
        {
            sea = search[0];
        }
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
    if(searching == "Type")
    {
        c1 = core.searchComType(search);
        setTreeComp(c1);
    }
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

void MainWindow::setTreeSci()
{
    ui->treeWidget_sci->clear();
    ui->treeWidget_sci->setColumnCount(5);
    ui->treeWidget_sci->setHeaderLabels(QStringList() << "Name" << "Gender" << "Birth year" << "Id" << "Death year");
    ui->treeWidget_sci->setColumnHidden(3, true);
    People scientists = core.sortSciAlpabetFront();

    for(int i = 0; i < scientists.getSize(); i++)
    {
        addTreeRootSci(scientists.getIndi(i));
    }
    ui->treeWidget_sci->sortByColumn(0, Qt::AscendingOrder);
}

void MainWindow::setTreeSci(People & scientists)
{
     QFont f( "Arial", 8, QFont::Bold);
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

    Machines computers = core.sortCompAlpabetFront();

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

void MainWindow::setColumnWidth()
{
    ui->treeWidget_sci->setColumnWidth(0, 250);
    ui->treeWidget_comp->setColumnWidth(0, 250);
    ui->treeWidget_sci->setColumnWidth(1, 100);
    ui->treeWidget_comp->setColumnWidth(1, 200);
    ui->treeWidget_sci->setColumnWidth(2, 100);
    ui->treeWidget_comp->setColumnWidth(2, 100);
    ui->treeWidget_sci->setColumnWidth(3, 100);
}

void MainWindow::setFrontPagelook()
{
    QMovie *movie = new QMovie(":/head/newfront.gif");
    ui->label_picture->setMovie(movie);
    movie->start();
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

void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    (void)index;
    disableButtons();
}

void MainWindow::on_lineEdit_searchSci_textChanged(const QString &arg1)
{
    string search = arg1.toStdString();
    disableButtons();
    searchSciMenu(search);
}

void MainWindow::on_lineEdit_searchComp_textChanged(const QString &arg1)
{
    string search = arg1.toStdString();
    disableButtons();
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
        int trueID = id.toInt();
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
        QString whole = "Editing scientist: " + surname + ", " +name;
        editor.setModal(true);
        editor.setId(id);
        editor.setName(name);
        editor.setSurname(surname);
        editor.setGender(gender);
        editor.setByear(bYear);
        editor.setDyear(dYear);
        editor.setDesc(desc);
        editor.setWindowTitle(whole);
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
        Individual i1 = core.getData().getSingleIndi(id);
        string q = "Are you sure you want to remove <b>" + i1.getSurname() + ", " + i1.getName() + "</b> from the database?";
        QMessageBox msgBox;
        msgBox.setWindowTitle("Removal of a scientist");
        msgBox.setInformativeText(QString::fromStdString(q));
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        int read = msgBox.exec();
        // Messagebox asks if user wants to remove scientist or not

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
        msgBoxRmCon.setWindowTitle("Removal of a connection");
        QString text = "Are you sure you want to disconnect: <b>Scientist: " + sciNameQ + " </b>Computer: <b>" + comNameQ+"</b>";
        msgBoxRmCon.setInformativeText(text);
        msgBoxRmCon.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        int ret = msgBoxRmCon.exec();
        // Messagebox asks if user wants to remove the connection

        switch(ret)
        {
            case QMessageBox::Yes:  core.removeConnection(sciId, comId);
                                    break;
            default:                // Close without changes made
                                    break;
        } 
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

void MainWindow::on_Button_editComp_clicked()
{
    ui->Button_editComp->setEnabled(false);
    if(!ui->treeWidget_comp->currentItem()->parent())
    {
        QString id = ui->treeWidget_comp->currentItem()->text(3);
        QString name = ui->treeWidget_comp->currentItem()->text(0);
        QString type = ui->treeWidget_comp->currentItem()->text(1);
        QString buildYear = ui->treeWidget_comp->currentItem()->text(2);
        int i = id.toUInt();
        Computer c1 = core.getData().getSingleComp(i);
        string desc = c1.getAbout();
        QString d = QString::fromStdString(desc);
        DialogEditCom editor;
        QString whole = "Editing computer: " + name;
        editor.setModal(true);
        editor.setId(id);
        editor.setName(name);
        editor.setType(type);
        editor.setBuildYear(buildYear);
        editor.setAbout(d);
        editor.setWindowTitle(whole);
        editor.exec();
    }
    setTreeComp();
    disableButtons();
}

void MainWindow::on_Button_removeComp_clicked()
{
    ui->Button_removeComp->setEnabled(false);
    if(!ui->treeWidget_comp->currentItem()->parent())
    {
        QString temp = ui->treeWidget_comp->currentItem()->text(3);
        int id = temp.toInt();
        // The Id from row 3 of the currently selected computer in table
        Computer c1 = core.getData().getSingleComp(id);
        string q = "Are you sure you want to remove <b>" + c1.getName() + "</b> from the database?";

        QMessageBox msgBox;
        msgBox.setWindowTitle("Removal of a computer");
        msgBox.setInformativeText(QString::fromStdString(q));
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        int ret = msgBox.exec();
        // Messagebox asks if user wants to remove the computer or not

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
        msgBoxRmCon.setWindowTitle("Removal of a connection");
        QString text = "Are you sure you want to disconnect: <b>Scientist: " + sciNameQ + " </b>Computer: <b>" + comNameQ + "</b>";
        msgBoxRmCon.setInformativeText(text);
        msgBoxRmCon.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        int ret = msgBoxRmCon.exec();
        // Messagebox asks if user wants to remove the connection

        switch(ret)
        {
            case QMessageBox::Yes:  core.removeConnection(sciId, comId);
                                    break;
            default:                // Close without changes made
                                    break;
        }
    }
    setTreeSci();
    setTreeComp();
    disableButtons();
}

void MainWindow::on_Button_addSciConnection_clicked()
{
    DialogAddSciConnection addSciConn;
    addSciConn.setModal(true);
    QString temp = ui->treeWidget_sci->currentItem()->text(3);
    int idsci = temp.toUInt();
    Individual p1 = core.getData().getSingleIndi(idsci);
    QString title = "Adding connection for scientist: " + QString::fromStdString(p1.getSurname()) + ", " + QString::fromStdString(p1.getName());
    addSciConn.setWindowTitle(title);
    int idcomp = addSciConn.exec();
    if(idcomp != -1)
    {
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
    QString temp = ui->treeWidget_comp->currentItem()->text(3);
    int idcomp = temp.toUInt();
    Computer c1 = core.getData().getSingleComp(idcomp);
    QString title = "Adding connection for computer: " + QString::fromStdString(c1.getName());
    addCompConn.setWindowTitle(title);
    int idsci = addCompConn.exec();
    if(idsci != -1)
    {
        core.addConnection(idsci, idcomp);
    }
    setTreeComp();
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

void MainWindow::on_comboBox_searchSci_currentIndexChanged(const QString &arg1)
{
    (void)arg1;
     disableButtons();
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

void MainWindow::on_comboBox_searchComp_currentIndexChanged(const QString &arg1)
{
    (void)arg1;
    disableButtons();
    if(ui->comboBox_searchComp->currentText().toStdString() == "")
    {
        ui->lineEdit_searchComp->setDisabled(true);
    }
    else
    {
        ui->lineEdit_searchComp->setEnabled(true);
    }
    setTreeComp();
}

void MainWindow::on_Button_aboutSci_clicked()
{
    QMessageBox msgBox;
    QString temp = ui->treeWidget_sci->currentItem()->text(3);
    int id = temp.toUInt();
    Individual i1 = core.getData().getSingleIndi(id);
    string name = "Information on scientist: <b>" + i1.getSurname()+ ", " + i1.getName()+"</b>";
    string about = i1.getAbout();
    if(about.empty())
    {
        about = "No information on this scientist!";
    }
    msgBox.setText(QString::fromStdString(name));
    msgBox.setInformativeText(QString::fromStdString(about));
    msgBox.setWindowTitle(QString::fromStdString("Information"));
    msgBox.setStandardButtons(QMessageBox::Close);
    msgBox.exec();
}

void MainWindow::on_Button_aboutcomp_clicked()
{
    QMessageBox msgBox;
    QString temp = ui->treeWidget_comp->currentItem()->text(3);
    int id = temp.toUInt();
    Computer c1 = core.getData().getSingleComp(id);
    string name = "Information on computer: <b>" +  c1.getName()+"</b>";
    string about = c1.getAbout();
    if(about.empty())
    {
        about = "No information on this computer!";
    }
    msgBox.setText(QString::fromStdString(name));
    msgBox.setWindowTitle(QString::fromStdString("Information"));
    msgBox.setInformativeText(QString::fromStdString(about));
    msgBox.setStandardButtons(QMessageBox::Close);
    msgBox.exec();
}

void MainWindow::on_lineEdit_searchComp_cursorPositionChanged(int arg1, int arg2)
{
    (void)arg1;
    (void)arg2;
    disableButtons();
}

void MainWindow::on_comboBox_searchSci_activated(const QString &arg1)
{
    (void)arg1;
    disableButtons();
}

void MainWindow::on_comboBox_searchComp_activated(const QString &arg1)
{
    (void)arg1;
    disableButtons();
}

void MainWindow::on_Button_startProgram_clicked()
{
    ui->tab_sci->setEnabled(true);
    ui->tab_comp->setEnabled(true);
    ui->tabWidget->removeTab(0);
}
