/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab_sci;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_searchSci;
    QComboBox *comboBox_searchSci;
    QLineEdit *lineEdit_searchSci;
    QSpacerItem *horizontalSpacer;
    QTreeWidget *treeWidget_sci;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Button_addSci;
    QPushButton *Button_editSci;
    QPushButton *Button_removeSci;
    QPushButton *Button_addSciConnection;
    QWidget *tab_comp;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_searchComp;
    QComboBox *comboBox_searchComp;
    QLineEdit *lineEdit_searchComp;
    QSpacerItem *horizontalSpacer_2;
    QTreeWidget *treeWidget_comp;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_addComp;
    QPushButton *Button_editComp;
    QPushButton *Button_removeComp;
    QPushButton *Button_addCompConnection;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(658, 568);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(8);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_sci = new QWidget();
        tab_sci->setObjectName(QStringLiteral("tab_sci"));
        verticalLayout_5 = new QVBoxLayout(tab_sci);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_searchSci = new QLabel(tab_sci);
        label_searchSci->setObjectName(QStringLiteral("label_searchSci"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_searchSci->setFont(font1);

        horizontalLayout_3->addWidget(label_searchSci);

        comboBox_searchSci = new QComboBox(tab_sci);
        comboBox_searchSci->setObjectName(QStringLiteral("comboBox_searchSci"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setBold(false);
        font2.setItalic(true);
        font2.setWeight(50);
        comboBox_searchSci->setFont(font2);

        horizontalLayout_3->addWidget(comboBox_searchSci);

        lineEdit_searchSci = new QLineEdit(tab_sci);
        lineEdit_searchSci->setObjectName(QStringLiteral("lineEdit_searchSci"));
        lineEdit_searchSci->setEnabled(false);
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setWeight(50);
        lineEdit_searchSci->setFont(font3);

        horizontalLayout_3->addWidget(lineEdit_searchSci);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_3);

        treeWidget_sci = new QTreeWidget(tab_sci);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget_sci->setHeaderItem(__qtreewidgetitem);
        treeWidget_sci->setObjectName(QStringLiteral("treeWidget_sci"));
        treeWidget_sci->setAlternatingRowColors(true);
        treeWidget_sci->setSortingEnabled(true);
        treeWidget_sci->setAnimated(false);

        verticalLayout_4->addWidget(treeWidget_sci);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Button_addSci = new QPushButton(tab_sci);
        Button_addSci->setObjectName(QStringLiteral("Button_addSci"));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        Button_addSci->setFont(font4);
        Button_addSci->setAutoDefault(false);
        Button_addSci->setFlat(false);

        horizontalLayout_4->addWidget(Button_addSci);

        Button_editSci = new QPushButton(tab_sci);
        Button_editSci->setObjectName(QStringLiteral("Button_editSci"));
        Button_editSci->setEnabled(false);
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        font5.setPointSize(8);
        font5.setBold(true);
        font5.setWeight(75);
        Button_editSci->setFont(font5);

        horizontalLayout_4->addWidget(Button_editSci);

        Button_removeSci = new QPushButton(tab_sci);
        Button_removeSci->setObjectName(QStringLiteral("Button_removeSci"));
        Button_removeSci->setEnabled(false);
        Button_removeSci->setFont(font5);

        horizontalLayout_4->addWidget(Button_removeSci);

        Button_addSciConnection = new QPushButton(tab_sci);
        Button_addSciConnection->setObjectName(QStringLiteral("Button_addSciConnection"));
        Button_addSciConnection->setEnabled(false);
        Button_addSciConnection->setFont(font5);

        horizontalLayout_4->addWidget(Button_addSciConnection);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_4);

        tabWidget->addTab(tab_sci, QString());
        tab_comp = new QWidget();
        tab_comp->setObjectName(QStringLiteral("tab_comp"));
        verticalLayout_2 = new QVBoxLayout(tab_comp);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_searchComp = new QLabel(tab_comp);
        label_searchComp->setObjectName(QStringLiteral("label_searchComp"));
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setBold(true);
        font6.setWeight(75);
        label_searchComp->setFont(font6);

        horizontalLayout_2->addWidget(label_searchComp);

        comboBox_searchComp = new QComboBox(tab_comp);
        comboBox_searchComp->setObjectName(QStringLiteral("comboBox_searchComp"));
        QFont font7;
        font7.setFamily(QStringLiteral("Arial"));
        font7.setItalic(true);
        comboBox_searchComp->setFont(font7);

        horizontalLayout_2->addWidget(comboBox_searchComp);

        lineEdit_searchComp = new QLineEdit(tab_comp);
        lineEdit_searchComp->setObjectName(QStringLiteral("lineEdit_searchComp"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_searchComp->sizePolicy().hasHeightForWidth());
        lineEdit_searchComp->setSizePolicy(sizePolicy);
        QFont font8;
        font8.setBold(false);
        font8.setWeight(50);
        lineEdit_searchComp->setFont(font8);

        horizontalLayout_2->addWidget(lineEdit_searchComp);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        treeWidget_comp = new QTreeWidget(tab_comp);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        treeWidget_comp->setHeaderItem(__qtreewidgetitem1);
        treeWidget_comp->setObjectName(QStringLiteral("treeWidget_comp"));
        treeWidget_comp->setAlternatingRowColors(true);
        treeWidget_comp->setSortingEnabled(true);

        verticalLayout->addWidget(treeWidget_comp);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Button_addComp = new QPushButton(tab_comp);
        Button_addComp->setObjectName(QStringLiteral("Button_addComp"));
        Button_addComp->setFont(font5);

        horizontalLayout->addWidget(Button_addComp);

        Button_editComp = new QPushButton(tab_comp);
        Button_editComp->setObjectName(QStringLiteral("Button_editComp"));
        Button_editComp->setEnabled(false);
        Button_editComp->setFont(font5);

        horizontalLayout->addWidget(Button_editComp);

        Button_removeComp = new QPushButton(tab_comp);
        Button_removeComp->setObjectName(QStringLiteral("Button_removeComp"));
        Button_removeComp->setEnabled(false);
        Button_removeComp->setFont(font5);

        horizontalLayout->addWidget(Button_removeComp);

        Button_addCompConnection = new QPushButton(tab_comp);
        Button_addCompConnection->setObjectName(QStringLiteral("Button_addCompConnection"));
        Button_addCompConnection->setEnabled(false);
        Button_addCompConnection->setFont(font6);

        horizontalLayout->addWidget(Button_addCompConnection);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        tabWidget->addTab(tab_comp, QString());

        horizontalLayout_5->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        Button_addSci->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Database application for Scientists and Computers", 0));
        label_searchSci->setText(QApplication::translate("MainWindow", "Search by:", 0));
        Button_addSci->setText(QApplication::translate("MainWindow", "Add Scientist", 0));
        Button_editSci->setText(QApplication::translate("MainWindow", "Edit Scientist", 0));
        Button_removeSci->setText(QApplication::translate("MainWindow", "Remove", 0));
        Button_addSciConnection->setText(QApplication::translate("MainWindow", "Add Connection", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_sci), QApplication::translate("MainWindow", "Scientists", 0));
        label_searchComp->setText(QApplication::translate("MainWindow", "Search by:", 0));
        Button_addComp->setText(QApplication::translate("MainWindow", "Add Computer", 0));
        Button_editComp->setText(QApplication::translate("MainWindow", "Edit Computer", 0));
        Button_removeComp->setText(QApplication::translate("MainWindow", "Remove", 0));
        Button_addCompConnection->setText(QApplication::translate("MainWindow", "Add Connection", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_comp), QApplication::translate("MainWindow", "Computers", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
