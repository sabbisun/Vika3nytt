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

private slots:
    void on_checkBox_alive_clicked();
    void on_checkBox_female_clicked();
    void on_checkBox_male_clicked();

    void on_Button_cancel_clicked();

    void on_Button_confirm_clicked();

private:
    Ui::DialogEditSci *ui;
    Core core;
};

#endif // DIALOGEDITSCI_H
