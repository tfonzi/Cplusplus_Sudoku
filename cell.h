#ifndef CELL_H
#define CELL_H

class cell
{

private:

    int value;

    bool isStarting;

    bool notes[9];

    int row;
    int col;
    int box;

public:

    cell();

    cell(int value, bool isStarting, int row, int col, int box);

    int get_row();

    int get_col();

    int get_box();

    int get_value();

    bool* get_notes();

    void set_notes(bool* notes);

    void set_value(int value);

    void set_start(int value, bool isStarting, int row, int col, int box);




};


#endif // CELL_H
