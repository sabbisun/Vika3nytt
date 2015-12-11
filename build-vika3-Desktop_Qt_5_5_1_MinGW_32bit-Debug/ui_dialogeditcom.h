/********************************************************************************
** Form generated from reading UI file 'dialogeditcom.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEDITCOM_H
#define UI_DIALOGEDITCOM_H

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

class Ui_DialogEditCom
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Dialogname;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_type;
    QLineEdit *lineEdit_type;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_built;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_buildYear;
    QLineEdit *lineEdit_yearBuilt;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Button_confirm;
    QPushButton *Button_cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogEditCom)
    {
        if (DialogEditCom->objectName().isEmpty())
            DialogEditCom->setObjectName(QStringLiteral("DialogEditCom"));
        DialogEditCom->resize(500, 250);
        verticalLayout_2 = new QVBoxLayout(DialogEditCom);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_Dialogname = new QLabel(DialogEditCom);
        label_Dialogname->setObjectName(QStringLiteral("label_Dialogname"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        label_Dialogname->setFont(font);
        label_Dialogname->setTextFormat(Qt::RichText);
        label_Dialogname->setScaledContents(false);
        label_Dialogname->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_Dialogname);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_name = new QLabel(DialogEditCom);
        label_name->setObjectName(QStringLiteral("label_name"));

        horizontalLayout_4->addWidget(label_name);

        lineEdit_name = new QLineEdit(DialogEditCom);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout_4->addWidget(lineEdit_name);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_type = new QLabel(DialogEditCom);
        label_type->setObjectName(QStringLiteral("label_type"));

        horizontalLayout_3->addWidget(label_type);

        lineEdit_type = new QLineEdit(DialogEditCom);
        lineEdit_type->setObjectName(QStringLiteral("lineEdit_type"));

        horizontalLayout_3->addWidget(lineEdit_type);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox_built = new QCheckBox(DialogEditCom);
        checkBox_built->setObjectName(QStringLiteral("checkBox_built"));

        verticalLayout->addWidget(checkBox_built);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_buildYear = new QLabel(DialogEditCom);
        label_buildYear->setObjectName(QStringLiteral("label_buildYear"));

        horizontalLayout_5->addWidget(label_buildYear);

        lineEdit_yearBuilt = new QLineEdit(DialogEditCom);
        lineEdit_yearBuilt->setObjectName(QStringLiteral("lineEdit_yearBuilt"));
        lineEdit_yearBuilt->setEnabled(false);

        horizontalLayout_5->addWidget(lineEdit_yearBuilt);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        Button_confirm = new QPushButton(DialogEditCom);
        Button_confirm->setObjectName(QStringLiteral("Button_confirm"));

        horizontalLayout_6->addWidget(Button_confirm);

        Button_cancel = new QPushButton(DialogEditCom);
        Button_cancel->setObjectName(QStringLiteral("Button_cancel"));

        horizontalLayout_6->addWidget(Button_cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(DialogEditCom);

        QMetaObject::connectSlotsByName(DialogEditCom);
    } // setupUi

    void retranslateUi(QDialog *DialogEditCom)
    {
        DialogEditCom->setWindowTitle(QApplication::translate("DialogEditCom", "Dialog", 0));
        label_Dialogname->setText(QApplication::translate("DialogEditCom", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Edit Computer</span></p></body></html>", 0));
        label_name->setText(QApplication::translate("DialogEditCom", "Name:                ", 0));
        label_type->setText(QApplication::translate("DialogEditCom", "Type:                 ", 0));
        checkBox_built->setText(QApplication::translate("DialogEditCom", "Built", 0));
        label_buildYear->setText(QApplication::translate("DialogEditCom", "Year of creation: ", 0));
        Button_confirm->setText(QApplication::translate("DialogEditCom", "Confirm", 0));
        Button_cancel->setText(QApplication::translate("DialogEditCom", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogEditCom: public Ui_DialogEditCom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEDITCOM_H
