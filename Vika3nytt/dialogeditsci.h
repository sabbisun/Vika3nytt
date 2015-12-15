#ifndef DIALOGEDITSCI_H
#define DIALOGEDITSCI_H

#include <QDialog>
#include "core.h"

namespace Ui {
class DialogEditSci;
}

class DialogEditSci : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEditSci(QWidget *parent = 0);
    ~DialogEditSci();

    void setId(QString& q);
    void setName(QString& q);
    void setSurname(QString& q);
    void setGender(QString& q);
    void setByear(QString& q);
    void setDyear(QString& q);
    void setDesc(QString& q);
    // Fills current info about scientist into edit lines

private slots:
    void on_checkBox_alive_clicked();
    // Disables input for death year

    void on_checkBox_female_clicked();
    void on_checkBox_male_clicked();
    // Allow only one checkbox to be checked at a time

    void on_Button_cancel_clicked();
    void on_Button_confirm_clicked();
    // Confirm or cancel changes made

private:
    Ui::DialogEditSci *ui;
    Core core;

    void clearErrorLabels();
    // Clears all error messages in window
};

#endif // DIALOGEDITSCI_H
