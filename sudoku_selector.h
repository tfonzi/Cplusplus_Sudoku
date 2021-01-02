#ifndef SUDOKU_SELECTOR_H
#define SUDOKU_SELECTOR_H

#include <QWidget>
#include <vector>
#include <string.h>
#include <cell.h>
#include "mainwindow.h"

namespace Ui {
class sudoku_selector;
}

class sudoku_selector : public QWidget
{
    Q_OBJECT

public:
    explicit sudoku_selector(QWidget *parent = nullptr);
    ~sudoku_selector();

    static std::vector<std::string> sudokus;
    static int selection;

    //updates sudoku visual
    void update();


    void start(std::string sudoku_string, std::vector<cell> &sudoku_array);
    //Populates cell vector "sudoku_array" using input string



private slots:
    void on_rightButton_clicked();

    void on_leftButton_clicked();

    void on_start_button_clicked();

private:
    Ui::sudoku_selector *ui;
    MainWindow *w;
};

#endif // SUDOKU_SELECTOR_H
