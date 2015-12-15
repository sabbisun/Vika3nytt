#ifndef DIALOGADDSCI_H
#define DIALOGADDSCI_H

#include <QDialog>
#include "core.h"
#include "people.h"

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
    void on_checkBox_male_clicked();
    void on_checkBox_female_clicked();
    // Allow only one checkbox to be checked at a time

    void on_checkBox_alive_clicked(bool checked);
    void on_checkBox_alive_clicked();
    // Disables input for death year

    void on_confirmAddButton_clicked();
    void on_pushButton_cancelAdd_clicked();
    // Confirm or cancel added computer

private:
    Ui::DialogAddSci *ui;
    Core core;

    void clearErrorLabels();
    // Clears all error messages in window
};

#endif // DIALOGADDSCI_H
