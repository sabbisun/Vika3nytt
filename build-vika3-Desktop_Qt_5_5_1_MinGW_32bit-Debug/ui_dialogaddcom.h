/********************************************************************************
** Form generated from reading UI file 'dialogaddcom.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDCOM_H
#define UI_DIALOGADDCOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogAddCom
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_addCom;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_addName_2;
    QLineEdit *lineEdit_addGName;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_addName;
    QLineEdit *lineEdit_addName;
    QCheckBox *checkBox_created;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_creationYear;
    QLineEdit *lineEdit_addCreationYear;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *confirmAddButton;
    QPushButton *pushButton_cancelAdd;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *DialogAddCom)
    {
        if (DialogAddCom->objectName().isEmpty())
            DialogAddCom->setObjectName(QStringLiteral("DialogAddCom"));
        DialogAddCom->resize(500, 250);
        verticalLayout_2 = new QVBoxLayout(DialogAddCom);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_addCom = new QLabel(DialogAddCom);
        label_addCom->setObjectName(QStringLiteral("label_addCom"));
        label_addCom->setTextFormat(Qt::RichText);
        label_addCom->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_addCom);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_addName_2 = new QLabel(DialogAddCom);
        label_addName_2->setObjectName(QStringLiteral("label_addName_2"));

        horizontalLayout_11->addWidget(label_addName_2);

        lineEdit_addGName = new QLineEdit(DialogAddCom);
        lineEdit_addGName->setObjectName(QStringLiteral("lineEdit_addGName"));

        horizontalLayout_11->addWidget(lineEdit_addGName);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_addName = new QLabel(DialogAddCom);
        label_addName->setObjectName(QStringLiteral("label_addName"));

        horizontalLayout_7->addWidget(label_addName);

        lineEdit_addName = new QLineEdit(DialogAddCom);
        lineEdit_addName->setObjectName(QStringLiteral("lineEdit_addName"));

        horizontalLayout_7->addWidget(lineEdit_addName);


        verticalLayout_2->addLayout(horizontalLayout_7);

        checkBox_created = new QCheckBox(DialogAddCom);
        checkBox_created->setObjectName(QStringLiteral("checkBox_created"));

        verticalLayout_2->addWidget(checkBox_created);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_creationYear = new QLabel(DialogAddCom);
        label_creationYear->setObjectName(QStringLiteral("label_creationYear"));

        horizontalLayout_8->addWidget(label_creationYear);

        lineEdit_addCreationYear = new QLineEdit(DialogAddCom);
        lineEdit_addCreationYear->setObjectName(QStringLiteral("lineEdit_addCreationYear"));
        lineEdit_addCreationYear->setEnabled(false);

        horizontalLayout_8->addWidget(lineEdit_addCreationYear);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_5 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_5);

        confirmAddButton = new QPushButton(DialogAddCom);
        confirmAddButton->setObjectName(QStringLiteral("confirmAddButton"));

        horizontalLayout_12->addWidget(confirmAddButton);

        pushButton_cancelAdd = new QPushButton(DialogAddCom);
        pushButton_cancelAdd->setObjectName(QStringLiteral("pushButton_cancelAdd"));

        horizontalLayout_12->addWidget(pushButton_cancelAdd);

        horizontalSpacer_6 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_12);

        checkBox_created->raise();
        label_addCom->raise();

        retranslateUi(DialogAddCom);

        QMetaObject::connectSlotsByName(DialogAddCom);
    } // setupUi

    void retranslateUi(QDialog *DialogAddCom)
    {
        DialogAddCom->setWindowTitle(QApplication::translate("DialogAddCom", "Dialog", 0));
        label_addCom->setText(QApplication::translate("DialogAddCom", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Add computer</span></p></body></html>", 0));
        label_addName_2->setText(QApplication::translate("DialogAddCom", "Name:                 ", 0));
        label_addName->setText(QApplication::translate("DialogAddCom", "Type:                  ", 0));
        checkBox_created->setText(QApplication::translate("DialogAddCom", "Created?", 0));
        label_creationYear->setText(QApplication::translate("DialogAddCom", "Year of creation:  ", 0));
        confirmAddButton->setText(QApplication::translate("DialogAddCom", "Confirm", 0));
        pushButton_cancelAdd->setText(QApplication::translate("DialogAddCom", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAddCom: public Ui_DialogAddCom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDCOM_H
