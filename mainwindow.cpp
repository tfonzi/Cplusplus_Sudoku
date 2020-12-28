#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


cell* start(string sudoku_string)
{
//Creates cell array "sudoku_array" using input string

    cell* sudoku_array = new cell[81];

    for(int i = 0; i < sudoku_string.length(); i++){





        cell a_cell = new cell(value, row, col, box);


    }


}

void update(cell* sudoku_array)
{
//Updates ui grid to match sudoku array
}


MainWindow::~MainWindow()
{
    delete ui;
}


