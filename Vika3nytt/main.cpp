
#include <QApplication>
#include <QCoreApplication>
#include <QtSql>
#include <iostream>
#include "ui.h"
#include <QApplication>

#include <QCoreApplication>
#include <QtSql>
#include <iostream>
#include "ui.h"

#include "mainwindow.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

/*

#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
/*
int main(int argc, char *argv[])
{
    UI ui;
    ui.run();

    return 0;
}
*/
