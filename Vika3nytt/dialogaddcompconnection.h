#ifndef DIALOGADDCOMPCONNECTION_H
#define DIALOGADDCOMPCONNECTION_H

#include <QDialog>
#include "People.h"
#include "core.h"
namespace Ui {
class DialogAddCompConnection;
}

class DialogAddCompConnection : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddCompConnection(QWidget *parent = 0);
    ~DialogAddCompConnection();

private slots:
    void on_button_confirmCompCon_clicked();

    void on_button_cancelConComp_clicked();

private:
    Ui::DialogAddCompConnection *ui;
    void createComboBox();
    Core core;
};

#endif // DIALOGADDCOMPCONNECTION_H
