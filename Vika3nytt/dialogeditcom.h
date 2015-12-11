#ifndef DIALOGEDITCOM_H
#define DIALOGEDITCOM_H

#include <QDialog>

namespace Ui {
class DialogEditCom;
}

class DialogEditCom : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEditCom(QWidget *parent = 0);
    ~DialogEditCom();

private:
    Ui::DialogEditCom *ui;
};

#endif // DIALOGEDITCOM_H
