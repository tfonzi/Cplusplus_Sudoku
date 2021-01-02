#include "sudoku_selector.h"
#include "ui_sudoku_selector.h"
#include <iostream>


std::vector<std::string> sudoku_selector::sudokus;

int sudoku_selector::selection;

sudoku_selector::sudoku_selector(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sudoku_selector)
{
    //Starting out with 5 to start. Could expand. Future implementation includes reading in a data file of strings.
    //Strings are 81 long. each character represents value of sudoku. Zeros are blank.

    sudoku_selector::sudokus = {"004300209005009001070060043006002087190007400050083000600000105003508690042910300","040100050107003960520008000000000017000906800803050620090060543600080700250097100","600120384008459072000006005000264030070080006940003000310000050089700000502000190","497200000100400005000016098620300040300900000001072600002005870000600004530097061","005910308009403060027500100030000201000820007006007004000080000640150700890000420"};
    sudoku_selector::selection = 0;
    ui->setupUi(this);
    update();

    //Creating sudoku game instance window
    w = new MainWindow();

}

void sudoku_selector::start(std::string sudoku_string, std::vector<cell> &sudoku_array)
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



void sudoku_selector::update(){

    std::string sudoku_selected = sudoku_selector::sudokus[sudoku_selector::selection];

    if((((int) sudoku_selected[0])-48) > 0){ui->Cell_1->setText(QString(QChar(sudoku_selected[0])));}else{ui->Cell_1->setText(" ");}
    if((((int) sudoku_selected[1])-48) > 0){ui->Cell_2->setText(QString(QChar(sudoku_selected[1])));}else{ui->Cell_2->setText(" ");}
    if((((int) sudoku_selected[2])-48) > 0){ui->Cell_3->setText(QString(QChar(sudoku_selected[2])));}else{ui->Cell_3->setText(" ");}
    if((((int) sudoku_selected[3])-48) > 0){ui->Cell_4->setText(QString(QChar(sudoku_selected[3])));}else{ui->Cell_4->setText(" ");}
    if((((int) sudoku_selected[4])-48) > 0){ui->Cell_5->setText(QString(QChar(sudoku_selected[4])));}else{ui->Cell_5->setText(" ");}
    if((((int) sudoku_selected[5])-48) > 0){ui->Cell_6->setText(QString(QChar(sudoku_selected[5])));}else{ui->Cell_6->setText(" ");}
    if((((int) sudoku_selected[6])-48) > 0){ui->Cell_7->setText(QString(QChar(sudoku_selected[6])));}else{ui->Cell_7->setText(" ");}
    if((((int) sudoku_selected[7])-48) > 0){ui->Cell_8->setText(QString(QChar(sudoku_selected[7])));}else{ui->Cell_8->setText(" ");}
    if((((int) sudoku_selected[8])-48) > 0){ui->Cell_9->setText(QString(QChar(sudoku_selected[8])));}else{ui->Cell_9->setText(" ");}
    if((((int) sudoku_selected[9])-48) > 0){ui->Cell_10->setText(QString(QChar(sudoku_selected[9])));}else{ui->Cell_10->setText(" ");}
    if((((int) sudoku_selected[10])-48) > 0){ui->Cell_11->setText(QString(QChar(sudoku_selected[10])));}else{ui->Cell_11->setText(" ");}
    if((((int) sudoku_selected[11])-48) > 0){ui->Cell_12->setText(QString(QChar(sudoku_selected[11])));}else{ui->Cell_12->setText(" ");}
    if((((int) sudoku_selected[12])-48) > 0){ui->Cell_13->setText(QString(QChar(sudoku_selected[12])));}else{ui->Cell_13->setText(" ");}
    if((((int) sudoku_selected[13])-48) > 0){ui->Cell_14->setText(QString(QChar(sudoku_selected[13])));}else{ui->Cell_14->setText(" ");}
    if((((int) sudoku_selected[14])-48) > 0){ui->Cell_15->setText(QString(QChar(sudoku_selected[14])));}else{ui->Cell_15->setText(" ");}
    if((((int) sudoku_selected[15])-48) > 0){ui->Cell_16->setText(QString(QChar(sudoku_selected[15])));}else{ui->Cell_16->setText(" ");}
    if((((int) sudoku_selected[16])-48) > 0){ui->Cell_17->setText(QString(QChar(sudoku_selected[16])));}else{ui->Cell_17->setText(" ");}
    if((((int) sudoku_selected[17])-48) > 0){ui->Cell_18->setText(QString(QChar(sudoku_selected[17])));}else{ui->Cell_18->setText(" ");}
    if((((int) sudoku_selected[18])-48) > 0){ui->Cell_19->setText(QString(QChar(sudoku_selected[18])));}else{ui->Cell_19->setText(" ");}
    if((((int) sudoku_selected[19])-48) > 0){ui->Cell_20->setText(QString(QChar(sudoku_selected[19])));}else{ui->Cell_20->setText(" ");}
    if((((int) sudoku_selected[20])-48) > 0){ui->Cell_21->setText(QString(QChar(sudoku_selected[20])));}else{ui->Cell_21->setText(" ");}
    if((((int) sudoku_selected[21])-48) > 0){ui->Cell_22->setText(QString(QChar(sudoku_selected[21])));}else{ui->Cell_22->setText(" ");}
    if((((int) sudoku_selected[22])-48) > 0){ui->Cell_23->setText(QString(QChar(sudoku_selected[22])));}else{ui->Cell_23->setText(" ");}
    if((((int) sudoku_selected[23])-48) > 0){ui->Cell_24->setText(QString(QChar(sudoku_selected[23])));}else{ui->Cell_24->setText(" ");}
    if((((int) sudoku_selected[24])-48) > 0){ui->Cell_25->setText(QString(QChar(sudoku_selected[24])));}else{ui->Cell_25->setText(" ");}
    if((((int) sudoku_selected[25])-48) > 0){ui->Cell_26->setText(QString(QChar(sudoku_selected[25])));}else{ui->Cell_26->setText(" ");}
    if((((int) sudoku_selected[26])-48) > 0){ui->Cell_27->setText(QString(QChar(sudoku_selected[26])));}else{ui->Cell_27->setText(" ");}
    if((((int) sudoku_selected[27])-48) > 0){ui->Cell_28->setText(QString(QChar(sudoku_selected[27])));}else{ui->Cell_28->setText(" ");}
    if((((int) sudoku_selected[28])-48) > 0){ui->Cell_29->setText(QString(QChar(sudoku_selected[28])));}else{ui->Cell_29->setText(" ");}
    if((((int) sudoku_selected[29])-48) > 0){ui->Cell_30->setText(QString(QChar(sudoku_selected[29])));}else{ui->Cell_30->setText(" ");}
    if((((int) sudoku_selected[30])-48) > 0){ui->Cell_31->setText(QString(QChar(sudoku_selected[30])));}else{ui->Cell_31->setText(" ");}if((((int) sudoku_selected[31])-48) > 0){ui->Cell_32->setText(QString(QChar(sudoku_selected[31])));}else{ui->Cell_32->setText(" ");}
    if((((int) sudoku_selected[32])-48) > 0){ui->Cell_33->setText(QString(QChar(sudoku_selected[32])));}else{ui->Cell_33->setText(" ");}
    if((((int) sudoku_selected[33])-48) > 0){ui->Cell_34->setText(QString(QChar(sudoku_selected[33])));}else{ui->Cell_34->setText(" ");}
    if((((int) sudoku_selected[34])-48) > 0){ui->Cell_35->setText(QString(QChar(sudoku_selected[34])));}else{ui->Cell_35->setText(" ");}
    if((((int) sudoku_selected[35])-48) > 0){ui->Cell_36->setText(QString(QChar(sudoku_selected[35])));}else{ui->Cell_36->setText(" ");}
    if((((int) sudoku_selected[36])-48) > 0){ui->Cell_37->setText(QString(QChar(sudoku_selected[36])));}else{ui->Cell_37->setText(" ");}
    if((((int) sudoku_selected[37])-48) > 0){ui->Cell_38->setText(QString(QChar(sudoku_selected[37])));}else{ui->Cell_38->setText(" ");}
    if((((int) sudoku_selected[38])-48) > 0){ui->Cell_39->setText(QString(QChar(sudoku_selected[38])));}else{ui->Cell_39->setText(" ");}
    if((((int) sudoku_selected[39])-48) > 0){ui->Cell_40->setText(QString(QChar(sudoku_selected[39])));}else{ui->Cell_40->setText(" ");}
    if((((int) sudoku_selected[40])-48) > 0){ui->Cell_41->setText(QString(QChar(sudoku_selected[40])));}else{ui->Cell_41->setText(" ");}
    if((((int) sudoku_selected[41])-48) > 0){ui->Cell_42->setText(QString(QChar(sudoku_selected[41])));}else{ui->Cell_42->setText(" ");}
    if((((int) sudoku_selected[42])-48) > 0){ui->Cell_43->setText(QString(QChar(sudoku_selected[42])));}else{ui->Cell_43->setText(" ");}
    if((((int) sudoku_selected[43])-48) > 0){ui->Cell_44->setText(QString(QChar(sudoku_selected[43])));}else{ui->Cell_44->setText(" ");}
    if((((int) sudoku_selected[44])-48) > 0){ui->Cell_45->setText(QString(QChar(sudoku_selected[44])));}else{ui->Cell_45->setText(" ");}
    if((((int) sudoku_selected[45])-48) > 0){ui->Cell_46->setText(QString(QChar(sudoku_selected[45])));}else{ui->Cell_46->setText(" ");}
    if((((int) sudoku_selected[46])-48) > 0){ui->Cell_47->setText(QString(QChar(sudoku_selected[46])));}else{ui->Cell_47->setText(" ");}
    if((((int) sudoku_selected[47])-48) > 0){ui->Cell_48->setText(QString(QChar(sudoku_selected[47])));}else{ui->Cell_48->setText(" ");}
    if((((int) sudoku_selected[48])-48) > 0){ui->Cell_49->setText(QString(QChar(sudoku_selected[48])));}else{ui->Cell_49->setText(" ");}
    if((((int) sudoku_selected[49])-48) > 0){ui->Cell_50->setText(QString(QChar(sudoku_selected[49])));}else{ui->Cell_50->setText(" ");}
    if((((int) sudoku_selected[50])-48) > 0){ui->Cell_51->setText(QString(QChar(sudoku_selected[50])));}else{ui->Cell_51->setText(" ");}
    if((((int) sudoku_selected[51])-48) > 0){ui->Cell_52->setText(QString(QChar(sudoku_selected[51])));}else{ui->Cell_52->setText(" ");}
    if((((int) sudoku_selected[52])-48) > 0){ui->Cell_53->setText(QString(QChar(sudoku_selected[52])));}else{ui->Cell_53->setText(" ");}
    if((((int) sudoku_selected[53])-48) > 0){ui->Cell_54->setText(QString(QChar(sudoku_selected[53])));}else{ui->Cell_54->setText(" ");}
    if((((int) sudoku_selected[54])-48) > 0){ui->Cell_55->setText(QString(QChar(sudoku_selected[54])));}else{ui->Cell_55->setText(" ");}
    if((((int) sudoku_selected[55])-48) > 0){ui->Cell_56->setText(QString(QChar(sudoku_selected[55])));}else{ui->Cell_56->setText(" ");}
    if((((int) sudoku_selected[56])-48) > 0){ui->Cell_57->setText(QString(QChar(sudoku_selected[56])));}else{ui->Cell_57->setText(" ");}
    if((((int) sudoku_selected[57])-48) > 0){ui->Cell_58->setText(QString(QChar(sudoku_selected[57])));}else{ui->Cell_58->setText(" ");}
    if((((int) sudoku_selected[58])-48) > 0){ui->Cell_59->setText(QString(QChar(sudoku_selected[58])));}else{ui->Cell_59->setText(" ");}
    if((((int) sudoku_selected[59])-48) > 0){ui->Cell_60->setText(QString(QChar(sudoku_selected[59])));}else{ui->Cell_60->setText(" ");}
    if((((int) sudoku_selected[60])-48) > 0){ui->Cell_61->setText(QString(QChar(sudoku_selected[60])));}else{ui->Cell_61->setText(" ");}
    if((((int) sudoku_selected[61])-48) > 0){ui->Cell_62->setText(QString(QChar(sudoku_selected[61])));}else{ui->Cell_62->setText(" ");}
    if((((int) sudoku_selected[62])-48) > 0){ui->Cell_63->setText(QString(QChar(sudoku_selected[62])));}else{ui->Cell_63->setText(" ");}
    if((((int) sudoku_selected[63])-48) > 0){ui->Cell_64->setText(QString(QChar(sudoku_selected[63])));}else{ui->Cell_64->setText(" ");}
    if((((int) sudoku_selected[64])-48) > 0){ui->Cell_65->setText(QString(QChar(sudoku_selected[64])));}else{ui->Cell_65->setText(" ");}
    if((((int) sudoku_selected[65])-48) > 0){ui->Cell_66->setText(QString(QChar(sudoku_selected[65])));}else{ui->Cell_66->setText(" ");}
    if((((int) sudoku_selected[66])-48) > 0){ui->Cell_67->setText(QString(QChar(sudoku_selected[66])));}else{ui->Cell_67->setText(" ");}
    if((((int) sudoku_selected[67])-48) > 0){ui->Cell_68->setText(QString(QChar(sudoku_selected[67])));}else{ui->Cell_68->setText(" ");}
    if((((int) sudoku_selected[68])-48) > 0){ui->Cell_69->setText(QString(QChar(sudoku_selected[68])));}else{ui->Cell_69->setText(" ");}
    if((((int) sudoku_selected[69])-48) > 0){ui->Cell_70->setText(QString(QChar(sudoku_selected[69])));}else{ui->Cell_70->setText(" ");}
    if((((int) sudoku_selected[70])-48) > 0){ui->Cell_71->setText(QString(QChar(sudoku_selected[70])));}else{ui->Cell_71->setText(" ");}
    if((((int) sudoku_selected[71])-48) > 0){ui->Cell_72->setText(QString(QChar(sudoku_selected[71])));}else{ui->Cell_72->setText(" ");}
    if((((int) sudoku_selected[72])-48) > 0){ui->Cell_73->setText(QString(QChar(sudoku_selected[72])));}else{ui->Cell_73->setText(" ");}
    if((((int) sudoku_selected[73])-48) > 0){ui->Cell_74->setText(QString(QChar(sudoku_selected[73])));}else{ui->Cell_74->setText(" ");}
    if((((int) sudoku_selected[74])-48) > 0){ui->Cell_75->setText(QString(QChar(sudoku_selected[74])));}else{ui->Cell_75->setText(" ");}
    if((((int) sudoku_selected[75])-48) > 0){ui->Cell_76->setText(QString(QChar(sudoku_selected[75])));}else{ui->Cell_76->setText(" ");}
    if((((int) sudoku_selected[76])-48) > 0){ui->Cell_77->setText(QString(QChar(sudoku_selected[76])));}else{ui->Cell_77->setText(" ");}
    if((((int) sudoku_selected[77])-48) > 0){ui->Cell_78->setText(QString(QChar(sudoku_selected[77])));}else{ui->Cell_78->setText(" ");}
    if((((int) sudoku_selected[78])-48) > 0){ui->Cell_79->setText(QString(QChar(sudoku_selected[78])));}else{ui->Cell_79->setText(" ");}
    if((((int) sudoku_selected[79])-48) > 0){ui->Cell_80->setText(QString(QChar(sudoku_selected[79])));}else{ui->Cell_80->setText(" ");}
    if((((int) sudoku_selected[80])-48) > 0){ui->Cell_81->setText(QString(QChar(sudoku_selected[80])));}else{ui->Cell_81->setText(" ");}



    for (int i = 0; i < 81; i++){

        std::printf("if((((int) sudoku_selected[%d])-48) > 0){ui->Cell_%d->setText(QString(QChar(sudoku_selected[%d])));}else{ui->Cell_%d->setText(cats);}\n",i,i+1,i,i+1);
    }

    return;

}

sudoku_selector::~sudoku_selector()
{
    delete ui;
}

void sudoku_selector::on_rightButton_clicked()
{
    sudoku_selector::selection++;

    if(sudoku_selector::selection == sudoku_selector::sudokus.size()){
        sudoku_selector::selection = 0;
    }

    ui->selectionLabel->setText(QString::number(sudoku_selector::selection + 1));
    sudoku_selector::update();
}

void sudoku_selector::on_leftButton_clicked()
{
    sudoku_selector::selection--;

    if(sudoku_selector::selection == -1){
        sudoku_selector::selection = sudoku_selector::sudokus.size() - 1;
    }

    ui->selectionLabel->setText(QString::number(sudoku_selector::selection + 1));
    sudoku_selector::update();
}

void sudoku_selector::on_start_button_clicked()
{

    vector<cell> sudoku_array;
    sudoku_array.reserve(81);

    //Initialize sudoku array data structure using string
    sudoku_selector::start(sudoku_selector::sudokus[sudoku_selector::selection], sudoku_array);

    //Passing sudoku_array data to other window
    w->pass_in_sudoku_array(sudoku_array);
    w->start();
    this->hide();
    w->show();
    this->close();



}
