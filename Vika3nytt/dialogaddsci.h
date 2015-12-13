#ifndef DIALOGADDSCI_H
#define DIALOGADDSCI_H

#include <QDialog>
#include <core.h>
#include<people.h>

namespace Ui {
class DialogAddSci;
}

class DialogAddSci : public QDialog
{
    Q_OBJECT

public:

    explicit DialogAddSci(QWidget *parent = 0);
    ~DialogAddSci();

private slots:

    bool on_checkBox_male_clicked(bool checked);

    bool on_checkBox_female_clicked(bool checked);

    void on_checkBox_alive_clicked(bool checked);

    void on_confirmAddButton_clicked();

    void on_checkBox_alive_clicked();


    void on_pushButton_cancelAdd_clicked();

private:
    Core core;
    Ui::DialogAddSci *ui;
    void clearErrorLabels();
};

#endif // DIALOGADDSCI_H
