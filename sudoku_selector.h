#ifndef SUDOKU_SELECTOR_H
#define SUDOKU_SELECTOR_H

#include <QWidget>
#include <vector>
#include <string.h>
#include <cell.h>
#include "sudoku_game.h"
#include <map>
#include <fstream>
#include <iostream>

namespace Ui {
class sudoku_selector;
}

class sudoku_selector : public QWidget
{
    Q_OBJECT

private:
    Ui::sudoku_selector *ui;
    sudoku_game *game_window;
    std::vector<std::string> sudokus;
    std::vector<std::string> solutions;
    int selection;

public:
    explicit sudoku_selector(QWidget *parent = nullptr);
    ~sudoku_selector();

    //updates sudoku visual
    void update_ui();


    void start(std::string sudoku_string, std::vector<cell> &sudoku_array);
    //Populates cell vector "sudoku_array" using input string

    void read_Files();


private slots:
    void on_rightButton_clicked();

    void on_leftButton_clicked();

    void on_start_button_clicked();

};

#endif // SUDOKU_SELECTOR_H
