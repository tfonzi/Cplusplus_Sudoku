#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cell.h"
#include <vector>

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

    void update(vector<cell> sudoku_array);
    //Updates ui grid to match sudoku array

    void pass_in_sudoku_array(vector<cell> sudoku_array);
    //passes in value for sudoku_array

    static vector<cell> passed_in_sudoku_array;



private slots:



    void on_updateButton_clicked();

private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
