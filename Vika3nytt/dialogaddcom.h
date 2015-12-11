#ifndef DIALOGADDCOM_H
#define DIALOGADDCOM_H

#include <QDialog>
#include<core.h>
#include<machines.h>

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

    void on_confirmAddButton_clicked();

    void on_lineEdit_addCreationYear_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_addType_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_cancelAdd_clicked();

private:
    Ui::DialogAddCom *ui;
    Core core;
};

#endif // DIALOGADDCOM_H
