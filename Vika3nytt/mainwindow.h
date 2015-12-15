#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include <QMainWindow>
#include <vector>
#include <QTreeWidget>
#include <QMessageBox>
#include <QDebug>
#include "core.h"
#include "people.h"
#include "machines.h"

#include "dialogaddcom.h"
#include "dialogaddsci.h"
#include "dialogeditcom.h"
#include "dialogeditsci.h"
#include "dialogaddcompconnection.h"
#include "dialogaddsciconnection.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_tabWidget_tabBarClicked(int index);
    // Switch between scientist database and computer database

    void on_comboBox_searchSci_currentIndexChanged(const QString &arg1);
    void on_comboBox_searchComp_currentIndexChanged(const QString &arg1);
    // Choose what shall be searched for

    void on_lineEdit_searchSci_textChanged(const QString &arg1);
    void on_lineEdit_searchComp_textChanged(const QString &arg1);
    // Input a search string

    void on_Button_addSci_clicked();
    void on_Button_editSci_clicked();
    void on_Button_removeSci_clicked();
    // Changes to scientist database

    void on_Button_addComp_clicked();
    void on_Button_editComp_clicked();
    void on_Button_removeComp_clicked();
    // Changes to computer database

    void on_treeWidget_sci_itemSelectionChanged();
    void on_treeWidget_comp_itemSelectionChanged();
    // Controls what actions can be done with entries, depends if the selected in tree table is parent or child

    void on_Button_addSciConnection_clicked();
    void on_Button_addCompConnection_clicked();
    // To add a connection between a scientist and a computer

    void on_Button_aboutSci_clicked();
    void on_Button_aboutcomp_clicked();
    // Display info about entries when selected

    void on_lineEdit_searchComp_cursorPositionChanged(int arg1, int arg2);
    void on_comboBox_searchSci_activated(const QString &arg1);
    void on_comboBox_searchComp_activated(const QString &arg1);
    // Disables error messages from unused variables

private:
    Ui::MainWindow *ui;
    Core core;

    void searchSciMenu(const string search);
    void searchCompMenu(const string search);
    // The search functions

    void createDropSearchForSci();
    void createDropSearchForComp();
    // Sets upp the comboboxes/drop down boxes

    void setTreeSci();
    void setTreeSci(People& scientists);
    void setTreeComp();
    void setTreeComp(Machines& computers);
    // Sets upp the treeWidgets

    void addTreeRootSci(Individual scientist);
    void addTreeChildSci(QTreeWidgetItem *parent, Computer computer);
    void addTreeRootComp(Computer computer);
    void addTreeChildComp(QTreeWidgetItem *parent, Individual scientist);
    // Creates and adds root items and child items to treeWidget

    void disableButtons();
    // Disables certain buttons when no computer or scientist is selected

    void setColumnWidth();
    // Sets the column width of both treeWidgets
};

#endif // MAINWINDOW_H
