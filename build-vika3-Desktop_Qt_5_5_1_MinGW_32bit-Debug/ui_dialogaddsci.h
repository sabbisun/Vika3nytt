/********************************************************************************
** Form generated from reading UI file 'dialogaddsci.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDSCI_H
#define UI_DIALOGADDSCI_H

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

class Ui_DialogAddSci
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_addSci;
    QHBoxLayout *horizontalLayout;
    QLabel *label_addGivenName;
    QLineEdit *lineEdit_addGivenName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_addSurname;
    QLineEdit *lineEdit_addSurname;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_selectGender;
    QCheckBox *checkBox_male;
    QCheckBox *checkBox_female;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_birthYear;
    QLineEdit *lineEdit_addBirthYear;
    QCheckBox *checkBox_alive;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_deathYear;
    QLineEdit *lineEdit_addDeathYear;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *confirmAddButton;
    QPushButton *pushButton_cancelAdd;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *DialogAddSci)
    {
        if (DialogAddSci->objectName().isEmpty())
            DialogAddSci->setObjectName(QStringLiteral("DialogAddSci"));
        DialogAddSci->resize(450, 350);
        verticalLayout = new QVBoxLayout(DialogAddSci);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_addSci = new QLabel(DialogAddSci);
        label_addSci->setObjectName(QStringLiteral("label_addSci"));
        QFont font;
        font.setFamily(QStringLiteral("Alien Encounters"));
        label_addSci->setFont(font);
        label_addSci->setTextFormat(Qt::RichText);
        label_addSci->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_addSci);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_addGivenName = new QLabel(DialogAddSci);
        label_addGivenName->setObjectName(QStringLiteral("label_addGivenName"));

        horizontalLayout->addWidget(label_addGivenName);

        lineEdit_addGivenName = new QLineEdit(DialogAddSci);
        lineEdit_addGivenName->setObjectName(QStringLiteral("lineEdit_addGivenName"));

        horizontalLayout->addWidget(lineEdit_addGivenName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_addSurname = new QLabel(DialogAddSci);
        label_addSurname->setObjectName(QStringLiteral("label_addSurname"));

        horizontalLayout_2->addWidget(label_addSurname);

        lineEdit_addSurname = new QLineEdit(DialogAddSci);
        lineEdit_addSurname->setObjectName(QStringLiteral("lineEdit_addSurname"));

        horizontalLayout_2->addWidget(lineEdit_addSurname);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_selectGender = new QLabel(DialogAddSci);
        label_selectGender->setObjectName(QStringLiteral("label_selectGender"));

        horizontalLayout_3->addWidget(label_selectGender);

        checkBox_male = new QCheckBox(DialogAddSci);
        checkBox_male->setObjectName(QStringLiteral("checkBox_male"));

        horizontalLayout_3->addWidget(checkBox_male);

        checkBox_female = new QCheckBox(DialogAddSci);
        checkBox_female->setObjectName(QStringLiteral("checkBox_female"));

        horizontalLayout_3->addWidget(checkBox_female);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_birthYear = new QLabel(DialogAddSci);
        label_birthYear->setObjectName(QStringLiteral("label_birthYear"));

        horizontalLayout_4->addWidget(label_birthYear);

        lineEdit_addBirthYear = new QLineEdit(DialogAddSci);
        lineEdit_addBirthYear->setObjectName(QStringLiteral("lineEdit_addBirthYear"));

        horizontalLayout_4->addWidget(lineEdit_addBirthYear);


        verticalLayout->addLayout(horizontalLayout_4);

        checkBox_alive = new QCheckBox(DialogAddSci);
        checkBox_alive->setObjectName(QStringLiteral("checkBox_alive"));

        verticalLayout->addWidget(checkBox_alive);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_deathYear = new QLabel(DialogAddSci);
        label_deathYear->setObjectName(QStringLiteral("label_deathYear"));

        horizontalLayout_5->addWidget(label_deathYear);

        lineEdit_addDeathYear = new QLineEdit(DialogAddSci);
        lineEdit_addDeathYear->setObjectName(QStringLiteral("lineEdit_addDeathYear"));
        lineEdit_addDeathYear->setEnabled(true);

        horizontalLayout_5->addWidget(lineEdit_addDeathYear);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        confirmAddButton = new QPushButton(DialogAddSci);
        confirmAddButton->setObjectName(QStringLiteral("confirmAddButton"));

        horizontalLayout_6->addWidget(confirmAddButton);

        pushButton_cancelAdd = new QPushButton(DialogAddSci);
        pushButton_cancelAdd->setObjectName(QStringLiteral("pushButton_cancelAdd"));

        horizontalLayout_6->addWidget(pushButton_cancelAdd);

        horizontalSpacer_3 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_6);

        checkBox_alive->raise();
        label_addSci->raise();

        retranslateUi(DialogAddSci);

        QMetaObject::connectSlotsByName(DialogAddSci);
    } // setupUi

    void retranslateUi(QDialog *DialogAddSci)
    {
        DialogAddSci->setWindowTitle(QApplication::translate("DialogAddSci", "Dialog", 0));
        label_addSci->setText(QApplication::translate("DialogAddSci", "<html><head/><body><p><span style=\" font-size:26pt; font-weight:600;\">Add scientist</span></p></body></html>", 0));
        label_addGivenName->setText(QApplication::translate("DialogAddSci", "Given name:   ", 0));
        label_addSurname->setText(QApplication::translate("DialogAddSci", "Surname:       ", 0));
        label_selectGender->setText(QApplication::translate("DialogAddSci", "Gender:          ", 0));
        checkBox_male->setText(QApplication::translate("DialogAddSci", "Male", 0));
        checkBox_female->setText(QApplication::translate("DialogAddSci", "Female", 0));
        label_birthYear->setText(QApplication::translate("DialogAddSci", "Year of birth:  ", 0));
        checkBox_alive->setText(QApplication::translate("DialogAddSci", "Alive", 0));
        label_deathYear->setText(QApplication::translate("DialogAddSci", "Year of death: ", 0));
        confirmAddButton->setText(QApplication::translate("DialogAddSci", "Confirm", 0));
        pushButton_cancelAdd->setText(QApplication::translate("DialogAddSci", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAddSci: public Ui_DialogAddSci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDSCI_H
