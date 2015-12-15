#ifndef DIALOGADDCOM_H
#define DIALOGADDCOM_H

#include <QDialog>
#include "core.h"
#include "machines.h"

namespace Ui {
class DialogAddCom;
}

class DialogAddCom : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddCom(QWidget *parent = 0);
    ~DialogAddCom();

private slots:
    void on_checkBox_created_clicked();
    // Disables input for creation year

    void on_confirmAddButton_clicked();
    void on_pushButton_cancelAdd_pressed();
    // Confirm or cancel added computer

private:
    Ui::DialogAddCom *ui;
    Core core;

    void clearErrorLabels();
    // Clears all error messages in window
};

#endif // DIALOGADDCOM_H
