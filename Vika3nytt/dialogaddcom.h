#ifndef DIALOGADDCOM_H
#define DIALOGADDCOM_H

#include <QDialog>

namespace Ui {
class DialogAddCom;
}

class DialogAddCom : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddCom(QWidget *parent = 0);
    ~DialogAddCom();

private:
    Ui::DialogAddCom *ui;
};

#endif // DIALOGADDCOM_H
