#include "sudoku_solver.h"

sudoku_solver::sudoku_solver(){
    //default constructor

    std::vector<cell> zero_array;

    for (int i = 0; i < 81; i++){
        zero_array.push_back(cell());
    }

    this->starting_array = zero_array;
    this->solution_array = zero_array;
}

std::vector<cell> sudoku_solver::get_solution_array(){
    return this->solution_array;
}

void sudoku_solver::set_solution_array(std::vector<cell> sudoku_array){
    this->solution_array = sudoku_array;
}

std::vector<cell> sudoku_solver::get_starting_array(){
    return this->starting_array;
}

void sudoku_solver::set_starting_array(std::vector<cell> sudoku_array){
    this->solution_array = sudoku_array;
}

bool sudoku_solver::backtrack(std::vector<cell> sudoku_array){

    int next_empty_square = find_next_empty_square(sudoku_array);

    if(next_empty_square == -1){
        //You've reached the end
        sudoku_solver::set_solution_array(sudoku_array);
        return true;
    }

    //else

    for(int value = 1; value < 10; value++){

        int row = next_empty_square / 9;
        int col = next_empty_square % 9;

        std::vector<int> location = {row, col};

        if(is_valid(sudoku_array,location,value)){
            //If it is valid, set value of empty square
            sudoku_array[next_empty_square].set_value(value);

            if(backtrack(sudoku_array)){
                //if future instance of backtrack returns true, return all true
                return true;
            }
        }
        //if future instance of back track returns false, the next numbers are tried.
    }

    //If this point is reached, then at a particular empty cell, all values 1 - 9 were tried and none of them were valid.
    //The algorithm tried to backtrack but found no valid solution
    return false;
}

bool sudoku_solver::is_valid(std::vector<cell> sudoku_array, std::vector<int> location, int value){

    //Checks cell designated by location with others in same row, col, and box
    //if the values == eachother, then the move is invalid


    int row = location[0];
    int col = location[1];
    int box = calculate_box(row, col);


    //Check if cells with same row, col, or box match in value
    for(int i = 0; i < 81; i++){

        if(row == sudoku_array[i].get_row()){
            if(value == sudoku_array[i].get_value()){
                return false;
            }
        }
        else if(col == sudoku_array[i].get_col()){
            if(value == sudoku_array[i].get_value()){
                return false;
            }
        }
        else if(box == sudoku_array[i].get_box()){
            if(value == sudoku_array[i].get_value()){
                return false;
            }
        }
        else{
            continue;
        }
    }
    return true;

}

int sudoku_solver::find_next_empty_square(std::vector<cell> sudoku_array){

    for(int i = 0; i < 81; i++){
        if(sudoku_array[i].get_value() == 0){
            return i;
        }
    }
    return -1; //There are no more empty squares
}

int sudoku_solver::calculate_box(int row, int col){

    //box chart is essentially a dictionary. reads [row,col]
    std::map<std::pair<int,int>, int> box_chart;
    box_chart[std::make_pair(0,0)] = 0;
    box_chart[std::make_pair(0,1)] = 1;
    box_chart[std::make_pair(0,2)] = 2;
    box_chart[std::make_pair(1,0)] = 3;
    box_chart[std::make_pair(1,1)] = 4;
    box_chart[std::make_pair(1,2)] = 5;
    box_chart[std::make_pair(2,0)] = 6;
    box_chart[std::make_pair(2,1)] = 7;
    box_chart[std::make_pair(2,2)] = 8;

    int row_region = row / 3;
    int col_region = col / 3;

    return box_chart[std::make_pair(row_region,col_region)];
}
