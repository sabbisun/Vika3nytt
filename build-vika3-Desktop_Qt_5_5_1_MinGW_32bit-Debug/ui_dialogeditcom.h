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
#include <QtWidgets/QPlainTextEdit>
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
    QLabel *label_nameError;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_type;
    QLineEdit *lineEdit_type;
    QLabel *label_typeError;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_built;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_buildYear;
    QLineEdit *lineEdit_yearBuilt;
    QLabel *label_buildYearError;
    QLabel *label_errorCompYear;
    QHBoxLayout *horizontalLayout;
    QLabel *label_editCompDesc;
    QPlainTextEdit *textEdit_descComp;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Button_confirm;
    QPushButton *Button_cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogEditCom)
    {
        if (DialogEditCom->objectName().isEmpty())
            DialogEditCom->setObjectName(QStringLiteral("DialogEditCom"));
        DialogEditCom->resize(460, 319);
        verticalLayout_2 = new QVBoxLayout(DialogEditCom);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_Dialogname = new QLabel(DialogEditCom);
        label_Dialogname->setObjectName(QStringLiteral("label_Dialogname"));
        label_Dialogname->setMaximumSize(QSize(16777215, 100));
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
        label_name->setFont(font);

        horizontalLayout_4->addWidget(label_name);

        lineEdit_name = new QLineEdit(DialogEditCom);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setFont(font);

        horizontalLayout_4->addWidget(lineEdit_name);

        label_nameError = new QLabel(DialogEditCom);
        label_nameError->setObjectName(QStringLiteral("label_nameError"));

        horizontalLayout_4->addWidget(label_nameError);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_type = new QLabel(DialogEditCom);
        label_type->setObjectName(QStringLiteral("label_type"));
        label_type->setFont(font);

        horizontalLayout_3->addWidget(label_type);

        lineEdit_type = new QLineEdit(DialogEditCom);
        lineEdit_type->setObjectName(QStringLiteral("lineEdit_type"));
        lineEdit_type->setFont(font);

        horizontalLayout_3->addWidget(lineEdit_type);

        label_typeError = new QLabel(DialogEditCom);
        label_typeError->setObjectName(QStringLiteral("label_typeError"));

        horizontalLayout_3->addWidget(label_typeError);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox_built = new QCheckBox(DialogEditCom);
        checkBox_built->setObjectName(QStringLiteral("checkBox_built"));
        checkBox_built->setFont(font);

        verticalLayout->addWidget(checkBox_built);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_buildYear = new QLabel(DialogEditCom);
        label_buildYear->setObjectName(QStringLiteral("label_buildYear"));
        label_buildYear->setFont(font);

        horizontalLayout_5->addWidget(label_buildYear);

        lineEdit_yearBuilt = new QLineEdit(DialogEditCom);
        lineEdit_yearBuilt->setObjectName(QStringLiteral("lineEdit_yearBuilt"));
        lineEdit_yearBuilt->setEnabled(false);

        horizontalLayout_5->addWidget(lineEdit_yearBuilt);

        label_buildYearError = new QLabel(DialogEditCom);
        label_buildYearError->setObjectName(QStringLiteral("label_buildYearError"));

        horizontalLayout_5->addWidget(label_buildYearError);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        label_errorCompYear = new QLabel(DialogEditCom);
        label_errorCompYear->setObjectName(QStringLiteral("label_errorCompYear"));

        verticalLayout_2->addWidget(label_errorCompYear);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_editCompDesc = new QLabel(DialogEditCom);
        label_editCompDesc->setObjectName(QStringLiteral("label_editCompDesc"));
        label_editCompDesc->setFont(font);

        horizontalLayout->addWidget(label_editCompDesc);

        textEdit_descComp = new QPlainTextEdit(DialogEditCom);
        textEdit_descComp->setObjectName(QStringLiteral("textEdit_descComp"));
        textEdit_descComp->setMaximumSize(QSize(650, 100));
        textEdit_descComp->setFont(font);
        textEdit_descComp->setContextMenuPolicy(Qt::ActionsContextMenu);

        horizontalLayout->addWidget(textEdit_descComp);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        Button_confirm = new QPushButton(DialogEditCom);
        Button_confirm->setObjectName(QStringLiteral("Button_confirm"));
        Button_confirm->setFont(font);

        horizontalLayout_6->addWidget(Button_confirm);

        Button_cancel = new QPushButton(DialogEditCom);
        Button_cancel->setObjectName(QStringLiteral("Button_cancel"));
        Button_cancel->setFont(font);

        horizontalLayout_6->addWidget(Button_cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        label_Dialogname->raise();
        label_errorCompYear->raise();

        retranslateUi(DialogEditCom);

        QMetaObject::connectSlotsByName(DialogEditCom);
    } // setupUi

    void retranslateUi(QDialog *DialogEditCom)
    {
        DialogEditCom->setWindowTitle(QApplication::translate("DialogEditCom", "Dialog", 0));
        label_Dialogname->setText(QApplication::translate("DialogEditCom", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Edit Computer</span></p></body></html>", 0));
        label_name->setText(QApplication::translate("DialogEditCom", "Name:                ", 0));
        label_nameError->setText(QString());
        label_type->setText(QApplication::translate("DialogEditCom", "Type:                 ", 0));
        label_typeError->setText(QString());
        checkBox_built->setText(QApplication::translate("DialogEditCom", "Not built", 0));
        label_buildYear->setText(QApplication::translate("DialogEditCom", "Year of creation: ", 0));
        label_buildYearError->setText(QString());
        label_errorCompYear->setText(QString());
        label_editCompDesc->setText(QApplication::translate("DialogEditCom", "Description", 0));
        Button_confirm->setText(QApplication::translate("DialogEditCom", "Confirm", 0));
        Button_cancel->setText(QApplication::translate("DialogEditCom", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogEditCom: public Ui_DialogEditCom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEDITCOM_H
