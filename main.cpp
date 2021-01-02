#include "mainwindow.h"
#include "main.h"
#include "sudoku_selector.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    sudoku_selector s;
    s.show();

    return a.exec();
}
