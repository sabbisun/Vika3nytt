#ifndef DIALOGEDITSCI_H
#define DIALOGEDITSCI_H

#include <QDialog>

namespace Ui {
class DialogEditSci;
}

class DialogEditSci : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEditSci(QWidget *parent = 0);

    ~DialogEditSci();

private:
    Ui::DialogEditSci *ui;
};

#endif // DIALOGEDITSCI_H
