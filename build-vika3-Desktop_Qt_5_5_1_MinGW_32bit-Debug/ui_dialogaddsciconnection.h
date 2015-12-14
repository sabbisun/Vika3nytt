/********************************************************************************
** Form generated from reading UI file 'dialogaddsciconnection.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDSCICONNECTION_H
#define UI_DIALOGADDSCICONNECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogAddSciConnection
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_AddSciCon;
    QPushButton *button_confirmSciCon;
    QPushButton *button_cancelConSci;

    void setupUi(QDialog *DialogAddSciConnection)
    {
        if (DialogAddSciConnection->objectName().isEmpty())
            DialogAddSciConnection->setObjectName(QStringLiteral("DialogAddSciConnection"));
        DialogAddSciConnection->resize(410, 127);
        horizontalLayout_2 = new QHBoxLayout(DialogAddSciConnection);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DialogAddSciConnection);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox_AddSciCon = new QComboBox(DialogAddSciConnection);
        comboBox_AddSciCon->setObjectName(QStringLiteral("comboBox_AddSciCon"));

        horizontalLayout->addWidget(comboBox_AddSciCon);

        button_confirmSciCon = new QPushButton(DialogAddSciConnection);
        button_confirmSciCon->setObjectName(QStringLiteral("button_confirmSciCon"));

        horizontalLayout->addWidget(button_confirmSciCon);

        button_cancelConSci = new QPushButton(DialogAddSciConnection);
        button_cancelConSci->setObjectName(QStringLiteral("button_cancelConSci"));

        horizontalLayout->addWidget(button_cancelConSci);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(DialogAddSciConnection);

        QMetaObject::connectSlotsByName(DialogAddSciConnection);
    } // setupUi

    void retranslateUi(QDialog *DialogAddSciConnection)
    {
        DialogAddSciConnection->setWindowTitle(QString());
        label->setText(QApplication::translate("DialogAddSciConnection", "Select a computer to connect to", 0));
        button_confirmSciCon->setText(QApplication::translate("DialogAddSciConnection", "Confirm", 0));
        button_cancelConSci->setText(QApplication::translate("DialogAddSciConnection", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAddSciConnection: public Ui_DialogAddSciConnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDSCICONNECTION_H
