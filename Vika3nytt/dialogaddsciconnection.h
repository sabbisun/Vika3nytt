#ifndef DIALOGADDSCICONNECTION_H
#define DIALOGADDSCICONNECTION_H
#include <QDialog>
#include "core.h"

namespace Ui {
class DialogAddSciConnection;
}

class DialogAddSciConnection : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddSciConnection(QWidget *parent = 0);
    ~DialogAddSciConnection();

private slots:
    void on_button_confirmSciCon_clicked();

    void on_button_cancelConSci_clicked();

private:
    Ui::DialogAddSciConnection *ui;
    void createComboBox();
    Core core;
};

#endif // DIALOGADDSCICONNECTION_H
