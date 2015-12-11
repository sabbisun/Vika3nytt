#ifndef DIALOGEDITCOM_H
#define DIALOGEDITCOM_H

#include <QDialog>
#include <QString>

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

private:
    Ui::DialogEditCom *ui;
};

#endif // DIALOGEDITCOM_H
