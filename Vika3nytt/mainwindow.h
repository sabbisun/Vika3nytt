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

    void on_lineEdit_searchSci_textChanged(const QString &arg1);

    void on_comboBox_searchSci_currentIndexChanged(const QString &arg1);

    void on_lineEdit_searchComp_textChanged(const QString &arg1);

    void on_comboBox_searchComp_currentIndexChanged(const QString &arg1);

    void on_Button_addSci_clicked();

    void on_Button_editSci_clicked();

    void on_Button_removeSci_clicked();

    void on_treeWidget_sci_itemSelectionChanged();

    void on_Button_removeComp_clicked();

    void on_treeWidget_comp_itemSelectionChanged();

    void on_Button_editComp_clicked();

private:
    Ui::MainWindow *ui;
    Core core;
    void searchSciMenu(const string search);
    void searchCompMenu(const string search);
    void createDropSearchForSci();
    void createDropSearchForComp();

    void setTreeSci();
    void setTreeSci(People& scientists);
    void setTreeComp();
    void setTreeComp(Machines& computers);
    void addTreeRootSci(Individual scientist);
    void addTreeChildSci(QTreeWidgetItem *parent, Computer computer);
    void addTreeRootComp(Computer computer);
    void addTreeChildComp(QTreeWidgetItem *parent, Individual scientist);
};

#endif // MAINWINDOW_H
