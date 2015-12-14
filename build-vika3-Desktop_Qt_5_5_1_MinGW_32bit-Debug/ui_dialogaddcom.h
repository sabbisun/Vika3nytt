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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogAddCom
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_addCom;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_addName_2;
    QLineEdit *lineEdit_addComName;
    QLabel *label_errorNameComp;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_addName;
    QLineEdit *lineEdit_addType;
    QLabel *label_errorTypeComp;
    QCheckBox *checkBox_created;
    QHBoxLayout *horizontalLayout;
    QLabel *label_creationYear;
    QLineEdit *lineEdit_creationYear;
    QLabel *label_errorCompYear;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QPlainTextEdit *textEdit_addComp;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *confirmAddButton;
    QPushButton *pushButton_cancelAdd;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *DialogAddCom)
    {
        if (DialogAddCom->objectName().isEmpty())
            DialogAddCom->setObjectName(QStringLiteral("DialogAddCom"));
        DialogAddCom->resize(500, 291);
        verticalLayout = new QVBoxLayout(DialogAddCom);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_addCom = new QLabel(DialogAddCom);
        label_addCom->setObjectName(QStringLiteral("label_addCom"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        font.setKerning(false);
        label_addCom->setFont(font);
        label_addCom->setTextFormat(Qt::RichText);
        label_addCom->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_addCom);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_addName_2 = new QLabel(DialogAddCom);
        label_addName_2->setObjectName(QStringLiteral("label_addName_2"));

        horizontalLayout_11->addWidget(label_addName_2);

        lineEdit_addComName = new QLineEdit(DialogAddCom);
        lineEdit_addComName->setObjectName(QStringLiteral("lineEdit_addComName"));

        horizontalLayout_11->addWidget(lineEdit_addComName);

        label_errorNameComp = new QLabel(DialogAddCom);
        label_errorNameComp->setObjectName(QStringLiteral("label_errorNameComp"));

        horizontalLayout_11->addWidget(label_errorNameComp);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_addName = new QLabel(DialogAddCom);
        label_addName->setObjectName(QStringLiteral("label_addName"));

        horizontalLayout_7->addWidget(label_addName);

        lineEdit_addType = new QLineEdit(DialogAddCom);
        lineEdit_addType->setObjectName(QStringLiteral("lineEdit_addType"));

        horizontalLayout_7->addWidget(lineEdit_addType);

        label_errorTypeComp = new QLabel(DialogAddCom);
        label_errorTypeComp->setObjectName(QStringLiteral("label_errorTypeComp"));

        horizontalLayout_7->addWidget(label_errorTypeComp);


        verticalLayout->addLayout(horizontalLayout_7);

        checkBox_created = new QCheckBox(DialogAddCom);
        checkBox_created->setObjectName(QStringLiteral("checkBox_created"));

        verticalLayout->addWidget(checkBox_created);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_creationYear = new QLabel(DialogAddCom);
        label_creationYear->setObjectName(QStringLiteral("label_creationYear"));

        horizontalLayout->addWidget(label_creationYear);

        lineEdit_creationYear = new QLineEdit(DialogAddCom);
        lineEdit_creationYear->setObjectName(QStringLiteral("lineEdit_creationYear"));
        lineEdit_creationYear->setEnabled(true);

        horizontalLayout->addWidget(lineEdit_creationYear);

        label_errorCompYear = new QLabel(DialogAddCom);
        label_errorCompYear->setObjectName(QStringLiteral("label_errorCompYear"));

        horizontalLayout->addWidget(label_errorCompYear);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label = new QLabel(DialogAddCom);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_8->addWidget(label);

        textEdit_addComp = new QPlainTextEdit(DialogAddCom);
        textEdit_addComp->setObjectName(QStringLiteral("textEdit_addComp"));

        horizontalLayout_8->addWidget(textEdit_addComp);


        verticalLayout->addLayout(horizontalLayout_8);

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


        verticalLayout->addLayout(horizontalLayout_12);

        checkBox_created->raise();
        label_addCom->raise();

        retranslateUi(DialogAddCom);

        QMetaObject::connectSlotsByName(DialogAddCom);
    } // setupUi

    void retranslateUi(QDialog *DialogAddCom)
    {
        DialogAddCom->setWindowTitle(QApplication::translate("DialogAddCom", "Add Computer", 0));
        label_addCom->setText(QApplication::translate("DialogAddCom", "<html><head/><body><p><span style=\" font-size:12pt;\">Add computer</span></p></body></html>", 0));
        label_addName_2->setText(QApplication::translate("DialogAddCom", "Name:                 ", 0));
        label_errorNameComp->setText(QString());
        label_addName->setText(QApplication::translate("DialogAddCom", "Type:                  ", 0));
        label_errorTypeComp->setText(QString());
        checkBox_created->setText(QApplication::translate("DialogAddCom", "Not Built", 0));
        label_creationYear->setText(QApplication::translate("DialogAddCom", "Year of creation:  ", 0));
        label_errorCompYear->setText(QString());
        label->setText(QApplication::translate("DialogAddCom", "Description", 0));
        confirmAddButton->setText(QApplication::translate("DialogAddCom", "Confirm", 0));
        pushButton_cancelAdd->setText(QApplication::translate("DialogAddCom", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAddCom: public Ui_DialogAddCom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDCOM_H
