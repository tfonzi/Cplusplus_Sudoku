#include "cell.h"


// cell constructor

cell::cell()
{
    this->value = 0;
    this->isStarting = false;
    this->row = 0;
    this->col = 0;
    this->box = 0;

    std::vector<bool> zero_notes = {false,false,false,false,false,false,false,false,false};
    this->set_notes(zero_notes);
}

cell::cell(int value, bool isStarting, int row, int col, int box)
{
    this->value = value;
    this->isStarting = isStarting;
    this->row = row;
    this->col = col;
    this->box = box;

    std::vector<bool> zero_notes = {false,false,false,false,false,false,false,false,false};
    this->set_notes(zero_notes);

}

cell::~cell(){

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

bool cell::get_isStarting()
{
    return this->isStarting;
}


std::vector<bool> cell::get_notes(){
    return this->notes;
}

void cell::set_notes(std::vector<bool> notes)
{
    this->notes = notes;
}

void cell::toggle_a_note(int index)
{
    this->notes[index] = !(this->notes[index]);
}

void cell::set_value(int value){
    this->value = value;
}


