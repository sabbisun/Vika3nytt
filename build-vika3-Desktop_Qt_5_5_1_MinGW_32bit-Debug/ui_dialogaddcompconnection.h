/********************************************************************************
** Form generated from reading UI file 'dialogaddcompconnection.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDCOMPCONNECTION_H
#define UI_DIALOGADDCOMPCONNECTION_H

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

class Ui_DialogAddCompConnection
{
public:
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_addCompCon;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_confirmCompCon;
    QPushButton *button_cancelConComp;

    void setupUi(QDialog *DialogAddCompConnection)
    {
        if (DialogAddCompConnection->objectName().isEmpty())
            DialogAddCompConnection->setObjectName(QStringLiteral("DialogAddCompConnection"));
        DialogAddCompConnection->resize(432, 164);
        horizontalLayout_4 = new QHBoxLayout(DialogAddCompConnection);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DialogAddCompConnection);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox_addCompCon = new QComboBox(DialogAddCompConnection);
        comboBox_addCompCon->setObjectName(QStringLiteral("comboBox_addCompCon"));

        horizontalLayout->addWidget(comboBox_addCompCon);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        button_confirmCompCon = new QPushButton(DialogAddCompConnection);
        button_confirmCompCon->setObjectName(QStringLiteral("button_confirmCompCon"));

        horizontalLayout_2->addWidget(button_confirmCompCon);

        button_cancelConComp = new QPushButton(DialogAddCompConnection);
        button_cancelConComp->setObjectName(QStringLiteral("button_cancelConComp"));

        horizontalLayout_2->addWidget(button_cancelConComp);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(DialogAddCompConnection);

        QMetaObject::connectSlotsByName(DialogAddCompConnection);
    } // setupUi

    void retranslateUi(QDialog *DialogAddCompConnection)
    {
        DialogAddCompConnection->setWindowTitle(QApplication::translate("DialogAddCompConnection", "Dialog", 0));
        label->setText(QApplication::translate("DialogAddCompConnection", "Select a scientist to conect to", 0));
        button_confirmCompCon->setText(QApplication::translate("DialogAddCompConnection", "Confirm", 0));
        button_cancelConComp->setText(QApplication::translate("DialogAddCompConnection", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAddCompConnection: public Ui_DialogAddCompConnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDCOMPCONNECTION_H
