#include "main.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    sudoku_selector mainMenu;
    mainMenu.show();

    return a.exec();
}
