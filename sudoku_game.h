#ifndef SUDOKU_GAME_H
#define SUDOKU_GAME_H

#include <QMainWindow>
#include "cell.h"
#include <vector>
#include "sudoku_solver.h"

namespace Ui {
class sudoku_game;
}

class sudoku_game : public QMainWindow
{
    Q_OBJECT

public:
    explicit sudoku_game(QWidget *parent = nullptr);
    ~sudoku_game();

    void set_starting_array(std::vector<cell> sudoku_array);

    void set_backtrack_solution(std::vector<cell> sudoku_array);

    std::vector<cell> get_backtrack_solution();

    std::vector<cell> get_starting_array();

    void update_ui(std::vector<cell> sudoku_array, std::vector<int> highlighted_cell);
    //Updates ui grid to match sudoku array state, highlighted cell, and starting squares

    void update_cell_value(std::vector<cell> sudoku_array);
    //Used in update_ui function to update cell values

    void update_notes_value(std::vector<cell> sudoku_array);
    //Used in update_ui function to update note values

    void update_highlight(std::vector<int> highlighted_cell);
    //Used in update_ui function to update highlight

    void update_starting_squares(std::vector<cell> sudoku_array);
    //Used in update_ui function to update starting squares

    void pass_in_sudoku_array(std::vector<cell> sudoku_array);
    //Passes in value for sudoku_array

    void start();
    //Initializes first game update

    void change_highlight(int row, int col);
    //Changes value of highlighted cell

    bool check_valid_move(int value);
    //Checks if current move is valid given highlighted cell and current state of sudoku array

    int calculate_box(int row, int col);
    //Calculates box value given row and column

    void set_solution_from_file(std::string solution);
    //Get solution from selection from solutions.txt. Is used to verify backtracking solution

signals:
    void mainMenu();


private slots:

    void on_cell_Button_1_clicked();

    void on_cell_Button_2_clicked();

    void on_cell_Button_3_clicked();

    void on_cell_Button_4_clicked();

    void on_cell_Button_5_clicked();

    void on_cell_Button_6_clicked();

    void on_cell_Button_7_clicked();

    void on_cell_Button_8_clicked();

    void on_cell_Button_9_clicked();

    void on_ToggleNoteButton_clicked();

    void on_changeValueButton_clicked();

    void on_eraseButton_clicked();

    void on_eraseNotesButton_clicked();

    void on_cell_Button_10_clicked();

    void on_cell_Button_11_clicked();

    void on_cell_Button_12_clicked();

    void on_cell_Button_13_clicked();

    void on_cell_Button_14_clicked();

    void on_cell_Button_15_clicked();

    void on_cell_Button_16_clicked();

    void on_cell_Button_17_clicked();

    void on_cell_Button_18_clicked();

    void on_cell_Button_19_clicked();

    void on_cell_Button_20_clicked();

    void on_cell_Button_21_clicked();

    void on_cell_Button_22_clicked();

    void on_cell_Button_23_clicked();

    void on_cell_Button_24_clicked();

    void on_cell_Button_25_clicked();

    void on_cell_Button_26_clicked();

    void on_cell_Button_27_clicked();

    void on_cell_Button_28_clicked();

    void on_cell_Button_29_clicked();

    void on_cell_Button_30_clicked();

    void on_cell_Button_31_clicked();

    void on_cell_Button_32_clicked();

    void on_cell_Button_33_clicked();

    void on_cell_Button_34_clicked();

    void on_cell_Button_35_clicked();

    void on_cell_Button_36_clicked();

    void on_cell_Button_37_clicked();

    void on_cell_Button_38_clicked();

    void on_cell_Button_39_clicked();

    void on_cell_Button_40_clicked();

    void on_cell_Button_41_clicked();

    void on_cell_Button_42_clicked();

    void on_cell_Button_43_clicked();

    void on_cell_Button_44_clicked();

    void on_cell_Button_45_clicked();

    void on_cell_Button_46_clicked();

    void on_cell_Button_47_clicked();

    void on_cell_Button_48_clicked();

    void on_cell_Button_49_clicked();

    void on_cell_Button_50_clicked();

    void on_cell_Button_51_clicked();

    void on_cell_Button_52_clicked();

    void on_cell_Button_53_clicked();

    void on_cell_Button_54_clicked();

    void on_cell_Button_55_clicked();

    void on_cell_Button_56_clicked();

    void on_cell_Button_57_clicked();

    void on_cell_Button_58_clicked();

    void on_cell_Button_59_clicked();

    void on_cell_Button_60_clicked();

    void on_cell_Button_61_clicked();

    void on_cell_Button_62_clicked();

    void on_cell_Button_63_clicked();

    void on_cell_Button_64_clicked();

    void on_cell_Button_65_clicked();

    void on_cell_Button_66_clicked();

    void on_cell_Button_67_clicked();

    void on_cell_Button_68_clicked();

    void on_cell_Button_69_clicked();

    void on_cell_Button_70_clicked();

    void on_cell_Button_71_clicked();

    void on_cell_Button_72_clicked();

    void on_cell_Button_73_clicked();

    void on_cell_Button_74_clicked();

    void on_cell_Button_75_clicked();

    void on_cell_Button_76_clicked();

    void on_cell_Button_77_clicked();

    void on_cell_Button_78_clicked();

    void on_cell_Button_79_clicked();

    void on_cell_Button_80_clicked();

    void on_cell_Button_81_clicked();

    void on_mainMenuButton_clicked();

    void on_hint_button_clicked();

    void on_submit_button_clicked();

private:
    Ui::sudoku_game *ui;
    std::vector<cell> starting_array;
    std::vector<cell> passed_in_sudoku_array;
    std::vector<int> highlighted_cell;
    std::string solution_from_file;
    std::vector<cell> backtrack_solution;

};

#endif // SUDOKU_GAME_H
