#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cell.h"
#include <string>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    cell* start(string sudoku_string);
    //Creates cell array "sudoku_array" using input string

    void update(cell* sudoku_array);
    //Updates ui grid to match sudoku array

private slots:
    void on_pushButton_clicked();

    void on_pushButton_1_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
