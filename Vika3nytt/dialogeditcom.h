#ifndef DIALOGEDITCOM_H
#define DIALOGEDITCOM_H

#include <QDialog>
#include <QString>
#include "core.h"

namespace Ui {
class DialogEditCom;
}

class DialogEditCom : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEditCom(QWidget *parent = 0);
    ~DialogEditCom();

    void setId(QString& q);
    void setName(QString& q);
    void setType(QString& q);
    void setBuildYear(QString& q);
    void setAbout(QString& q);
    // Fills current info about computer into edit lines

private slots:
    void on_checkBox_built_clicked();
    // Disables input for creation year

    void on_Button_confirm_clicked();
    void on_Button_cancel_clicked();
    // Confirm or cancel changes made

private:
    Ui::DialogEditCom *ui;
    Core core;

    void clearErrorLabels();
    // Clears all error messages in window
};

#endif // DIALOGEDITCOM_H
