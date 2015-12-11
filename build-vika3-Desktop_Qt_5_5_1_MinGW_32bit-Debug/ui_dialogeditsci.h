/********************************************************************************
** Form generated from reading UI file 'dialogeditsci.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEDITSCI_H
#define UI_DIALOGEDITSCI_H

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

class Ui_DialogEditSci
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Dialogname;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_surname;
    QLineEdit *lineEdit_surname;
    QHBoxLayout *horizontalLayout;
    QLabel *label_gender;
    QCheckBox *checkBox_male;
    QCheckBox *checkBox_female;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_birth;
    QLineEdit *lineEdit_yearBirth;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_alive;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_death;
    QLineEdit *lineEdit_yearDeth;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Button_confirm;
    QPushButton *Button_cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogEditSci)
    {
        if (DialogEditSci->objectName().isEmpty())
            DialogEditSci->setObjectName(QStringLiteral("DialogEditSci"));
        DialogEditSci->resize(450, 350);
        verticalLayout_2 = new QVBoxLayout(DialogEditSci);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_Dialogname = new QLabel(DialogEditSci);
        label_Dialogname->setObjectName(QStringLiteral("label_Dialogname"));
        label_Dialogname->setTextFormat(Qt::RichText);
        label_Dialogname->setScaledContents(false);
        label_Dialogname->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_Dialogname);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_name = new QLabel(DialogEditSci);
        label_name->setObjectName(QStringLiteral("label_name"));

        horizontalLayout_4->addWidget(label_name);

        lineEdit_name = new QLineEdit(DialogEditSci);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout_4->addWidget(lineEdit_name);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_surname = new QLabel(DialogEditSci);
        label_surname->setObjectName(QStringLiteral("label_surname"));

        horizontalLayout_3->addWidget(label_surname);

        lineEdit_surname = new QLineEdit(DialogEditSci);
        lineEdit_surname->setObjectName(QStringLiteral("lineEdit_surname"));

        horizontalLayout_3->addWidget(lineEdit_surname);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_gender = new QLabel(DialogEditSci);
        label_gender->setObjectName(QStringLiteral("label_gender"));

        horizontalLayout->addWidget(label_gender);

        checkBox_male = new QCheckBox(DialogEditSci);
        checkBox_male->setObjectName(QStringLiteral("checkBox_male"));

        horizontalLayout->addWidget(checkBox_male);

        checkBox_female = new QCheckBox(DialogEditSci);
        checkBox_female->setObjectName(QStringLiteral("checkBox_female"));

        horizontalLayout->addWidget(checkBox_female);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_birth = new QLabel(DialogEditSci);
        label_birth->setObjectName(QStringLiteral("label_birth"));

        horizontalLayout_2->addWidget(label_birth);

        lineEdit_yearBirth = new QLineEdit(DialogEditSci);
        lineEdit_yearBirth->setObjectName(QStringLiteral("lineEdit_yearBirth"));

        horizontalLayout_2->addWidget(lineEdit_yearBirth);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox_alive = new QCheckBox(DialogEditSci);
        checkBox_alive->setObjectName(QStringLiteral("checkBox_alive"));

        verticalLayout->addWidget(checkBox_alive);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_death = new QLabel(DialogEditSci);
        label_death->setObjectName(QStringLiteral("label_death"));

        horizontalLayout_5->addWidget(label_death);

        lineEdit_yearDeth = new QLineEdit(DialogEditSci);
        lineEdit_yearDeth->setObjectName(QStringLiteral("lineEdit_yearDeth"));
        lineEdit_yearDeth->setEnabled(true);

        horizontalLayout_5->addWidget(lineEdit_yearDeth);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        Button_confirm = new QPushButton(DialogEditSci);
        Button_confirm->setObjectName(QStringLiteral("Button_confirm"));

        horizontalLayout_6->addWidget(Button_confirm);

        Button_cancel = new QPushButton(DialogEditSci);
        Button_cancel->setObjectName(QStringLiteral("Button_cancel"));

        horizontalLayout_6->addWidget(Button_cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(DialogEditSci);

        QMetaObject::connectSlotsByName(DialogEditSci);
    } // setupUi

    void retranslateUi(QDialog *DialogEditSci)
    {
        DialogEditSci->setWindowTitle(QApplication::translate("DialogEditSci", "Dialog", 0));
        label_Dialogname->setText(QApplication::translate("DialogEditSci", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Edit Scientist</span></p></body></html>", 0));
        label_name->setText(QApplication::translate("DialogEditSci", "Given Name:", 0));
        label_surname->setText(QApplication::translate("DialogEditSci", "Surname:    ", 0));
        label_gender->setText(QApplication::translate("DialogEditSci", "Gender:", 0));
        checkBox_male->setText(QApplication::translate("DialogEditSci", "Male", 0));
        checkBox_female->setText(QApplication::translate("DialogEditSci", "Female", 0));
        label_birth->setText(QApplication::translate("DialogEditSci", "Year of birth  ", 0));
        checkBox_alive->setText(QApplication::translate("DialogEditSci", "Alive", 0));
        label_death->setText(QApplication::translate("DialogEditSci", "Year of death", 0));
        Button_confirm->setText(QApplication::translate("DialogEditSci", "Confirm", 0));
        Button_cancel->setText(QApplication::translate("DialogEditSci", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogEditSci: public Ui_DialogEditSci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEDITSCI_H
