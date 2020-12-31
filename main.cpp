#include "mainwindow.h"
#include "main.h"
#include <QApplication>

void start(string sudoku_string, vector<cell> &sudoku_array)
{

    int row = -1; //Because it will iterate when i == 0
    int col = 0;
    int box = 0;

    //box chart is essentially a dictionary. reads [row,col]
    map<pair<int,int>, int> box_chart;
    box_chart[make_pair(0,0)] = 0;
    box_chart[make_pair(0,1)] = 1;
    box_chart[make_pair(0,2)] = 2;
    box_chart[make_pair(1,0)] = 3;
    box_chart[make_pair(1,1)] = 4;
    box_chart[make_pair(1,2)] = 5;
    box_chart[make_pair(2,0)] = 6;
    box_chart[make_pair(2,1)] = 7;
    box_chart[make_pair(2,2)] = 8;

    for(int i = 0; i < sudoku_string.length(); i++){

        int value = ((int) sudoku_string.at(i)) - 48;
        bool isStarting = false;

        if(value != 0){
            isStarting = true;
        }


        if((i % 9) == 0)
        {
            row++; //i % 9 will only be 0 if it is the beginning of a new row
        }

        col = i % 9; //Indicates column since sudoku is 9x9

        //Box assignment. Look at row and col

        int row_region = row / 3;
        int col_region = col / 3;
        //int gets truncated. so 0-2 will be 0, 3 - 5 will be 1, 6 - 8 will be 2

        box = box_chart[make_pair(row_region,col_region)];

        sudoku_array.push_back(cell(value, isStarting, row, col, box));
    }


}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    vector<cell> sudoku_array;
    sudoku_array.reserve(81);

    string sudoko_string = "004300209005009001070060043006002087190007400050083000600000105003508690042910300";
    //String is 81 long. each character represents value of sudoku. Zeros are blank.

    //Initialize sudoku array data structure using string
    start(sudoko_string,sudoku_array);

    //Passing sudoku_array data to the UI side of the application
    w.pass_in_sudoku_array(sudoku_array);

    return a.exec();
}
