#ifndef DIALOGEDITCOM_H
#define DIALOGEDITCOM_H

#include <QDialog>
#include <QString>
#include <core.h>

namespace Ui {
class DialogEditCom;
}

class DialogEditCom : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEditCom(QWidget *parent = 0);
    ~DialogEditCom();
    void setName(QString&);
    void setType(QString&);
    void setBuildYear(QString&);

private slots:
    void on_checkBox_built_clicked();

    void on_Button_confirm_clicked();

    void on_Button_cancel_clicked();

private:
    Ui::DialogEditCom *ui;
};

#endif // DIALOGEDITCOM_H
