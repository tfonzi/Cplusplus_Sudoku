#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

#include <string>
#include <vector>
#include <map>
#include "cell.h"


class sudoku_solver{

private:

    std::vector<cell> starting_array;

    std::vector<cell> solution_array;



public:

    sudoku_solver();

    std::vector<cell> get_solution_array();

    void set_solution_array(std::vector<cell> sudoku_array);

    std::vector<cell> get_starting_array();

    void set_starting_array(std::vector<cell> sudoku_array);

    bool backtrack(std::vector<cell> sudoku_array);

    bool is_valid(std::vector<cell> sudoku_array, std::vector<int> location, int value);

    int find_next_empty_square(std::vector<cell> sudoku_array);


};

#endif // SUDOKU_SOLVER_H
