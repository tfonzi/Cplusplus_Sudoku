#include "cell.h"


// cell constructor

cell::cell()
{
    //default
}

cell::cell(int value, bool isStarting, int row, int col, int box)
{
    this->value = value;
    this->isStarting = isStarting;
    this->row = row;
    this->col = col;
    this->box = box;

    bool zero_notes[9] = {false,false,false,false,false,false,false,false,false};
    this->set_notes(zero_notes);

}

int cell::get_row()
{
   return this->row;
}

int cell::get_col()
{
    return this->col;
}

int cell::get_box()
{
    return this->box;
}

int cell::get_value()
{
    return this->value;
}

bool* cell::get_notes(){
    return this->notes;
}

void cell::set_notes(bool* notes)
{
    for(int i = 0; i < 9; i++)
    {
        this->notes[i] = notes[i];
    }
}

void cell::set_value(int value){
    this->value = value;
}

void cell::set_start(int value, bool isStarting, int row, int col, int box){
    this->value = value;
    this->isStarting = isStarting;
    this->row = row;
    this->col = col;
    this->box = box;


    bool zero_notes[9] = {false,false,false,false,false,false,false,false,false};
    this->set_notes(zero_notes);
}

