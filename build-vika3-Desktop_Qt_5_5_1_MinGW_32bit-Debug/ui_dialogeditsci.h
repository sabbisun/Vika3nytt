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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogEditSci
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Dialogname;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QLabel *label_nameError;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_surname;
    QLineEdit *lineEdit_surname;
    QLabel *label_surnameError;
    QHBoxLayout *horizontalLayout;
    QLabel *label_gender;
    QCheckBox *checkBox_male;
    QCheckBox *checkBox_female;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_birth;
    QLineEdit *lineEdit_yearBirth;
    QLabel *label_birthError;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_alive;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_death;
    QLineEdit *lineEdit_yearDeth;
    QLabel *label_deathError;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_editSciDesc;
    QPlainTextEdit *lineEdit_editSciDesc;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Button_confirm;
    QPushButton *Button_cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogEditSci)
    {
        if (DialogEditSci->objectName().isEmpty())
            DialogEditSci->setObjectName(QStringLiteral("DialogEditSci"));
        DialogEditSci->setEnabled(true);
        DialogEditSci->resize(450, 350);
        QIcon icon;
        icon.addFile(QStringLiteral(":/head/ouricon.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogEditSci->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(DialogEditSci);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_Dialogname = new QLabel(DialogEditSci);
        label_Dialogname->setObjectName(QStringLiteral("label_Dialogname"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        label_Dialogname->setFont(font);
        label_Dialogname->setTextFormat(Qt::RichText);
        label_Dialogname->setScaledContents(false);
        label_Dialogname->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_Dialogname);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_name = new QLabel(DialogEditSci);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setFont(font);

        horizontalLayout_7->addWidget(label_name);

        lineEdit_name = new QLineEdit(DialogEditSci);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setFont(font);

        horizontalLayout_7->addWidget(lineEdit_name);

        label_nameError = new QLabel(DialogEditSci);
        label_nameError->setObjectName(QStringLiteral("label_nameError"));

        horizontalLayout_7->addWidget(label_nameError);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_surname = new QLabel(DialogEditSci);
        label_surname->setObjectName(QStringLiteral("label_surname"));
        label_surname->setFont(font);

        horizontalLayout_3->addWidget(label_surname);

        lineEdit_surname = new QLineEdit(DialogEditSci);
        lineEdit_surname->setObjectName(QStringLiteral("lineEdit_surname"));
        lineEdit_surname->setFont(font);

        horizontalLayout_3->addWidget(lineEdit_surname);

        label_surnameError = new QLabel(DialogEditSci);
        label_surnameError->setObjectName(QStringLiteral("label_surnameError"));

        horizontalLayout_3->addWidget(label_surnameError);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_gender = new QLabel(DialogEditSci);
        label_gender->setObjectName(QStringLiteral("label_gender"));
        label_gender->setFont(font);

        horizontalLayout->addWidget(label_gender);

        checkBox_male = new QCheckBox(DialogEditSci);
        checkBox_male->setObjectName(QStringLiteral("checkBox_male"));
        checkBox_male->setFont(font);

        horizontalLayout->addWidget(checkBox_male);

        checkBox_female = new QCheckBox(DialogEditSci);
        checkBox_female->setObjectName(QStringLiteral("checkBox_female"));
        checkBox_female->setFont(font);

        horizontalLayout->addWidget(checkBox_female);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_birth = new QLabel(DialogEditSci);
        label_birth->setObjectName(QStringLiteral("label_birth"));
        label_birth->setFont(font);

        horizontalLayout_2->addWidget(label_birth);

        lineEdit_yearBirth = new QLineEdit(DialogEditSci);
        lineEdit_yearBirth->setObjectName(QStringLiteral("lineEdit_yearBirth"));
        lineEdit_yearBirth->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_yearBirth);

        label_birthError = new QLabel(DialogEditSci);
        label_birthError->setObjectName(QStringLiteral("label_birthError"));

        horizontalLayout_2->addWidget(label_birthError);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox_alive = new QCheckBox(DialogEditSci);
        checkBox_alive->setObjectName(QStringLiteral("checkBox_alive"));
        checkBox_alive->setFont(font);

        verticalLayout->addWidget(checkBox_alive);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_death = new QLabel(DialogEditSci);
        label_death->setObjectName(QStringLiteral("label_death"));
        label_death->setFont(font);

        horizontalLayout_5->addWidget(label_death);

        lineEdit_yearDeth = new QLineEdit(DialogEditSci);
        lineEdit_yearDeth->setObjectName(QStringLiteral("lineEdit_yearDeth"));
        lineEdit_yearDeth->setEnabled(true);
        lineEdit_yearDeth->setFont(font);

        horizontalLayout_5->addWidget(lineEdit_yearDeth);

        label_deathError = new QLabel(DialogEditSci);
        label_deathError->setObjectName(QStringLiteral("label_deathError"));

        horizontalLayout_5->addWidget(label_deathError);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_editSciDesc = new QLabel(DialogEditSci);
        label_editSciDesc->setObjectName(QStringLiteral("label_editSciDesc"));
        label_editSciDesc->setFont(font);

        horizontalLayout_4->addWidget(label_editSciDesc);

        lineEdit_editSciDesc = new QPlainTextEdit(DialogEditSci);
        lineEdit_editSciDesc->setObjectName(QStringLiteral("lineEdit_editSciDesc"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_editSciDesc->sizePolicy().hasHeightForWidth());
        lineEdit_editSciDesc->setSizePolicy(sizePolicy);
        lineEdit_editSciDesc->setMinimumSize(QSize(100, 100));
        lineEdit_editSciDesc->setMaximumSize(QSize(371, 16777215));
        lineEdit_editSciDesc->setFont(font);

        horizontalLayout_4->addWidget(lineEdit_editSciDesc);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        Button_confirm = new QPushButton(DialogEditSci);
        Button_confirm->setObjectName(QStringLiteral("Button_confirm"));
        Button_confirm->setFont(font);

        horizontalLayout_6->addWidget(Button_confirm);

        Button_cancel = new QPushButton(DialogEditSci);
        Button_cancel->setObjectName(QStringLiteral("Button_cancel"));
        Button_cancel->setFont(font);

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
        label_nameError->setText(QString());
        label_surname->setText(QApplication::translate("DialogEditSci", "Surname:    ", 0));
        label_surnameError->setText(QString());
        label_gender->setText(QApplication::translate("DialogEditSci", "Gender:", 0));
        checkBox_male->setText(QApplication::translate("DialogEditSci", "Male", 0));
        checkBox_female->setText(QApplication::translate("DialogEditSci", "Female", 0));
        label_birth->setText(QApplication::translate("DialogEditSci", "Year of birth  ", 0));
        label_birthError->setText(QString());
        checkBox_alive->setText(QApplication::translate("DialogEditSci", "Alive", 0));
        label_death->setText(QApplication::translate("DialogEditSci", "Year of death", 0));
        label_deathError->setText(QString());
        label_editSciDesc->setText(QApplication::translate("DialogEditSci", "Description", 0));
        Button_confirm->setText(QApplication::translate("DialogEditSci", "Confirm", 0));
        Button_cancel->setText(QApplication::translate("DialogEditSci", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogEditSci: public Ui_DialogEditSci {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEDITSCI_H
