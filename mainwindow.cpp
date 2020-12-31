#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

//Use of UI-scope variable is not prefered. Better implementation of this is a good goal for future
vector<cell> MainWindow::passed_in_sudoku_array;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //Reserve data for passed in sudoku array
    passed_in_sudoku_array.reserve(81);
    ui->setupUi(this);
}




void MainWindow::update(vector<cell> sudoku_array)
{
//Updates ui grid to match sudoku array

    //Long list of if statements for updating UI
    //Each cell is made up of a button label, and 9 note labels.
    //This means 800 different labels have be changed manually.
    //Future implementation includes looking into making custom widgets on QT to make this less lines of code.

    //Changing button text to match sudoku values

    if(sudoku_array[0].get_value() == 0){ui->cell_Button_1->setText(" ");} else{ui->cell_Button_1->setText(QString::number(sudoku_array[0].get_value()));}
    if(sudoku_array[1].get_value() == 0){ui->cell_Button_2->setText(" ");} else{ui->cell_Button_2->setText(QString::number(sudoku_array[1].get_value()));}
    if(sudoku_array[2].get_value() == 0){ui->cell_Button_3->setText(" ");} else{ui->cell_Button_3->setText(QString::number(sudoku_array[2].get_value()));}
    if(sudoku_array[3].get_value() == 0){ui->cell_Button_4->setText(" ");} else{ui->cell_Button_4->setText(QString::number(sudoku_array[3].get_value()));}
    if(sudoku_array[4].get_value() == 0){ui->cell_Button_5->setText(" ");} else{ui->cell_Button_5->setText(QString::number(sudoku_array[4].get_value()));}
    if(sudoku_array[5].get_value() == 0){ui->cell_Button_6->setText(" ");} else{ui->cell_Button_6->setText(QString::number(sudoku_array[5].get_value()));}
    if(sudoku_array[6].get_value() == 0){ui->cell_Button_7->setText(" ");} else{ui->cell_Button_7->setText(QString::number(sudoku_array[6].get_value()));}
    if(sudoku_array[7].get_value() == 0){ui->cell_Button_8->setText(" ");} else{ui->cell_Button_8->setText(QString::number(sudoku_array[7].get_value()));}
    if(sudoku_array[8].get_value() == 0){ui->cell_Button_9->setText(" ");} else{ui->cell_Button_9->setText(QString::number(sudoku_array[8].get_value()));}
    if(sudoku_array[9].get_value() == 0){ui->cell_Button_10->setText(" ");} else{ui->cell_Button_10->setText(QString::number(sudoku_array[9].get_value()));}
    if(sudoku_array[10].get_value() == 0){ui->cell_Button_11->setText(" ");} else{ui->cell_Button_11->setText(QString::number(sudoku_array[10].get_value()));}
    if(sudoku_array[11].get_value() == 0){ui->cell_Button_12->setText(" ");} else{ui->cell_Button_12->setText(QString::number(sudoku_array[11].get_value()));}
    if(sudoku_array[12].get_value() == 0){ui->cell_Button_13->setText(" ");} else{ui->cell_Button_13->setText(QString::number(sudoku_array[12].get_value()));}
    if(sudoku_array[13].get_value() == 0){ui->cell_Button_14->setText(" ");} else{ui->cell_Button_14->setText(QString::number(sudoku_array[13].get_value()));}
    if(sudoku_array[14].get_value() == 0){ui->cell_Button_15->setText(" ");} else{ui->cell_Button_15->setText(QString::number(sudoku_array[14].get_value()));}
    if(sudoku_array[15].get_value() == 0){ui->cell_Button_16->setText(" ");} else{ui->cell_Button_16->setText(QString::number(sudoku_array[15].get_value()));}
    if(sudoku_array[16].get_value() == 0){ui->cell_Button_17->setText(" ");} else{ui->cell_Button_17->setText(QString::number(sudoku_array[16].get_value()));}
    if(sudoku_array[17].get_value() == 0){ui->cell_Button_18->setText(" ");} else{ui->cell_Button_18->setText(QString::number(sudoku_array[17].get_value()));}
    if(sudoku_array[18].get_value() == 0){ui->cell_Button_19->setText(" ");} else{ui->cell_Button_19->setText(QString::number(sudoku_array[18].get_value()));}
    if(sudoku_array[19].get_value() == 0){ui->cell_Button_20->setText(" ");} else{ui->cell_Button_20->setText(QString::number(sudoku_array[19].get_value()));}
    if(sudoku_array[20].get_value() == 0){ui->cell_Button_21->setText(" ");} else{ui->cell_Button_21->setText(QString::number(sudoku_array[20].get_value()));}
    if(sudoku_array[21].get_value() == 0){ui->cell_Button_22->setText(" ");} else{ui->cell_Button_22->setText(QString::number(sudoku_array[21].get_value()));}
    if(sudoku_array[22].get_value() == 0){ui->cell_Button_23->setText(" ");} else{ui->cell_Button_23->setText(QString::number(sudoku_array[22].get_value()));}
    if(sudoku_array[23].get_value() == 0){ui->cell_Button_24->setText(" ");} else{ui->cell_Button_24->setText(QString::number(sudoku_array[23].get_value()));}
    if(sudoku_array[24].get_value() == 0){ui->cell_Button_25->setText(" ");} else{ui->cell_Button_25->setText(QString::number(sudoku_array[24].get_value()));}
    if(sudoku_array[25].get_value() == 0){ui->cell_Button_26->setText(" ");} else{ui->cell_Button_26->setText(QString::number(sudoku_array[25].get_value()));}
    if(sudoku_array[26].get_value() == 0){ui->cell_Button_27->setText(" ");} else{ui->cell_Button_27->setText(QString::number(sudoku_array[26].get_value()));}
    if(sudoku_array[27].get_value() == 0){ui->cell_Button_28->setText(" ");} else{ui->cell_Button_28->setText(QString::number(sudoku_array[27].get_value()));}
    if(sudoku_array[28].get_value() == 0){ui->cell_Button_29->setText(" ");} else{ui->cell_Button_29->setText(QString::number(sudoku_array[28].get_value()));}
    if(sudoku_array[29].get_value() == 0){ui->cell_Button_30->setText(" ");} else{ui->cell_Button_30->setText(QString::number(sudoku_array[29].get_value()));}
    if(sudoku_array[30].get_value() == 0){ui->cell_Button_31->setText(" ");} else{ui->cell_Button_31->setText(QString::number(sudoku_array[30].get_value()));}
    if(sudoku_array[31].get_value() == 0){ui->cell_Button_32->setText(" ");} else{ui->cell_Button_32->setText(QString::number(sudoku_array[31].get_value()));}
    if(sudoku_array[32].get_value() == 0){ui->cell_Button_33->setText(" ");} else{ui->cell_Button_33->setText(QString::number(sudoku_array[32].get_value()));}
    if(sudoku_array[33].get_value() == 0){ui->cell_Button_34->setText(" ");} else{ui->cell_Button_34->setText(QString::number(sudoku_array[33].get_value()));}
    if(sudoku_array[34].get_value() == 0){ui->cell_Button_35->setText(" ");} else{ui->cell_Button_35->setText(QString::number(sudoku_array[34].get_value()));}
    if(sudoku_array[35].get_value() == 0){ui->cell_Button_36->setText(" ");} else{ui->cell_Button_36->setText(QString::number(sudoku_array[35].get_value()));}
    if(sudoku_array[36].get_value() == 0){ui->cell_Button_37->setText(" ");} else{ui->cell_Button_37->setText(QString::number(sudoku_array[36].get_value()));}
    if(sudoku_array[37].get_value() == 0){ui->cell_Button_38->setText(" ");} else{ui->cell_Button_38->setText(QString::number(sudoku_array[37].get_value()));}
    if(sudoku_array[38].get_value() == 0){ui->cell_Button_39->setText(" ");} else{ui->cell_Button_39->setText(QString::number(sudoku_array[38].get_value()));}
    if(sudoku_array[39].get_value() == 0){ui->cell_Button_40->setText(" ");} else{ui->cell_Button_40->setText(QString::number(sudoku_array[39].get_value()));}
    if(sudoku_array[40].get_value() == 0){ui->cell_Button_41->setText(" ");} else{ui->cell_Button_41->setText(QString::number(sudoku_array[40].get_value()));}
    if(sudoku_array[41].get_value() == 0){ui->cell_Button_42->setText(" ");} else{ui->cell_Button_42->setText(QString::number(sudoku_array[41].get_value()));}
    if(sudoku_array[42].get_value() == 0){ui->cell_Button_43->setText(" ");} else{ui->cell_Button_43->setText(QString::number(sudoku_array[42].get_value()));}
    if(sudoku_array[43].get_value() == 0){ui->cell_Button_44->setText(" ");} else{ui->cell_Button_44->setText(QString::number(sudoku_array[43].get_value()));}
    if(sudoku_array[44].get_value() == 0){ui->cell_Button_45->setText(" ");} else{ui->cell_Button_45->setText(QString::number(sudoku_array[44].get_value()));}
    if(sudoku_array[45].get_value() == 0){ui->cell_Button_46->setText(" ");} else{ui->cell_Button_46->setText(QString::number(sudoku_array[45].get_value()));}
    if(sudoku_array[46].get_value() == 0){ui->cell_Button_47->setText(" ");} else{ui->cell_Button_47->setText(QString::number(sudoku_array[46].get_value()));}
    if(sudoku_array[47].get_value() == 0){ui->cell_Button_48->setText(" ");} else{ui->cell_Button_48->setText(QString::number(sudoku_array[47].get_value()));}
    if(sudoku_array[48].get_value() == 0){ui->cell_Button_49->setText(" ");} else{ui->cell_Button_49->setText(QString::number(sudoku_array[48].get_value()));}
    if(sudoku_array[49].get_value() == 0){ui->cell_Button_50->setText(" ");} else{ui->cell_Button_50->setText(QString::number(sudoku_array[49].get_value()));}
    if(sudoku_array[50].get_value() == 0){ui->cell_Button_51->setText(" ");} else{ui->cell_Button_51->setText(QString::number(sudoku_array[50].get_value()));}
    if(sudoku_array[51].get_value() == 0){ui->cell_Button_52->setText(" ");} else{ui->cell_Button_52->setText(QString::number(sudoku_array[51].get_value()));}
    if(sudoku_array[52].get_value() == 0){ui->cell_Button_53->setText(" ");} else{ui->cell_Button_53->setText(QString::number(sudoku_array[52].get_value()));}
    if(sudoku_array[53].get_value() == 0){ui->cell_Button_54->setText(" ");} else{ui->cell_Button_54->setText(QString::number(sudoku_array[53].get_value()));}
    if(sudoku_array[54].get_value() == 0){ui->cell_Button_55->setText(" ");} else{ui->cell_Button_55->setText(QString::number(sudoku_array[54].get_value()));}
    if(sudoku_array[55].get_value() == 0){ui->cell_Button_56->setText(" ");} else{ui->cell_Button_56->setText(QString::number(sudoku_array[55].get_value()));}
    if(sudoku_array[56].get_value() == 0){ui->cell_Button_57->setText(" ");} else{ui->cell_Button_57->setText(QString::number(sudoku_array[56].get_value()));}
    if(sudoku_array[57].get_value() == 0){ui->cell_Button_58->setText(" ");} else{ui->cell_Button_58->setText(QString::number(sudoku_array[57].get_value()));}
    if(sudoku_array[58].get_value() == 0){ui->cell_Button_59->setText(" ");} else{ui->cell_Button_59->setText(QString::number(sudoku_array[58].get_value()));}
    if(sudoku_array[59].get_value() == 0){ui->cell_Button_60->setText(" ");} else{ui->cell_Button_60->setText(QString::number(sudoku_array[59].get_value()));}
    if(sudoku_array[60].get_value() == 0){ui->cell_Button_61->setText(" ");} else{ui->cell_Button_61->setText(QString::number(sudoku_array[60].get_value()));}
    if(sudoku_array[61].get_value() == 0){ui->cell_Button_62->setText(" ");} else{ui->cell_Button_62->setText(QString::number(sudoku_array[61].get_value()));}
    if(sudoku_array[62].get_value() == 0){ui->cell_Button_63->setText(" ");} else{ui->cell_Button_63->setText(QString::number(sudoku_array[62].get_value()));}
    if(sudoku_array[63].get_value() == 0){ui->cell_Button_64->setText(" ");} else{ui->cell_Button_64->setText(QString::number(sudoku_array[63].get_value()));}
    if(sudoku_array[64].get_value() == 0){ui->cell_Button_65->setText(" ");} else{ui->cell_Button_65->setText(QString::number(sudoku_array[64].get_value()));}
    if(sudoku_array[65].get_value() == 0){ui->cell_Button_66->setText(" ");} else{ui->cell_Button_66->setText(QString::number(sudoku_array[65].get_value()));}
    if(sudoku_array[66].get_value() == 0){ui->cell_Button_67->setText(" ");} else{ui->cell_Button_67->setText(QString::number(sudoku_array[66].get_value()));}
    if(sudoku_array[67].get_value() == 0){ui->cell_Button_68->setText(" ");} else{ui->cell_Button_68->setText(QString::number(sudoku_array[67].get_value()));}
    if(sudoku_array[68].get_value() == 0){ui->cell_Button_69->setText(" ");} else{ui->cell_Button_69->setText(QString::number(sudoku_array[68].get_value()));}
    if(sudoku_array[69].get_value() == 0){ui->cell_Button_70->setText(" ");} else{ui->cell_Button_70->setText(QString::number(sudoku_array[69].get_value()));}
    if(sudoku_array[70].get_value() == 0){ui->cell_Button_71->setText(" ");} else{ui->cell_Button_71->setText(QString::number(sudoku_array[70].get_value()));}
    if(sudoku_array[71].get_value() == 0){ui->cell_Button_72->setText(" ");} else{ui->cell_Button_72->setText(QString::number(sudoku_array[71].get_value()));}
    if(sudoku_array[72].get_value() == 0){ui->cell_Button_73->setText(" ");} else{ui->cell_Button_73->setText(QString::number(sudoku_array[72].get_value()));}
    if(sudoku_array[73].get_value() == 0){ui->cell_Button_74->setText(" ");} else{ui->cell_Button_74->setText(QString::number(sudoku_array[73].get_value()));}
    if(sudoku_array[74].get_value() == 0){ui->cell_Button_75->setText(" ");} else{ui->cell_Button_75->setText(QString::number(sudoku_array[74].get_value()));}
    if(sudoku_array[75].get_value() == 0){ui->cell_Button_76->setText(" ");} else{ui->cell_Button_76->setText(QString::number(sudoku_array[75].get_value()));}
    if(sudoku_array[76].get_value() == 0){ui->cell_Button_77->setText(" ");} else{ui->cell_Button_77->setText(QString::number(sudoku_array[76].get_value()));}
    if(sudoku_array[77].get_value() == 0){ui->cell_Button_78->setText(" ");} else{ui->cell_Button_78->setText(QString::number(sudoku_array[77].get_value()));}
    if(sudoku_array[78].get_value() == 0){ui->cell_Button_79->setText(" ");} else{ui->cell_Button_79->setText(QString::number(sudoku_array[78].get_value()));}
    if(sudoku_array[79].get_value() == 0){ui->cell_Button_80->setText(" ");} else{ui->cell_Button_80->setText(QString::number(sudoku_array[79].get_value()));}
    if(sudoku_array[80].get_value() == 0){ui->cell_Button_81->setText(" ");} else{ui->cell_Button_81->setText(QString::number(sudoku_array[80].get_value()));}

    //Setting Notes values
    vector<bool> notes_list;
    //Reserving 81 x 9 for notes
    notes_list.reserve(729);

    //Adding notes to long note vector for ease
    for(int i = 0; i < 81; i++){
        vector<bool> notes = sudoku_array[i].get_notes();
        notes_list.insert(end(notes_list), begin(notes), end(notes));
        notes.clear();
        notes.shrink_to_fit();
     }

    if(notes_list[0] == true){ui->note_1_cell_1->setVisible(true);}else{ui->note_1_cell_1->setVisible(false);}
    if(notes_list[1] == true){ui->note_2_cell_1->setVisible(true);}else{ui->note_2_cell_1->setVisible(false);}
    if(notes_list[2] == true){ui->note_3_cell_1->setVisible(true);}else{ui->note_3_cell_1->setVisible(false);}
    if(notes_list[3] == true){ui->note_4_cell_1->setVisible(true);}else{ui->note_4_cell_1->setVisible(false);}
    if(notes_list[4] == true){ui->note_5_cell_1->setVisible(true);}else{ui->note_5_cell_1->setVisible(false);}
    if(notes_list[5] == true){ui->note_6_cell_1->setVisible(true);}else{ui->note_6_cell_1->setVisible(false);}
    if(notes_list[6] == true){ui->note_7_cell_1->setVisible(true);}else{ui->note_7_cell_1->setVisible(false);}
    if(notes_list[7] == true){ui->note_8_cell_1->setVisible(true);}else{ui->note_8_cell_1->setVisible(false);}
    if(notes_list[8] == true){ui->note_9_cell_1->setVisible(true);}else{ui->note_9_cell_1->setVisible(false);}
    if(notes_list[9] == true){ui->note_1_cell_2->setVisible(true);}else{ui->note_1_cell_2->setVisible(false);}
    if(notes_list[10] == true){ui->note_2_cell_2->setVisible(true);}else{ui->note_2_cell_2->setVisible(false);}
    if(notes_list[11] == true){ui->note_3_cell_2->setVisible(true);}else{ui->note_3_cell_2->setVisible(false);}
    if(notes_list[12] == true){ui->note_4_cell_2->setVisible(true);}else{ui->note_4_cell_2->setVisible(false);}
    if(notes_list[13] == true){ui->note_5_cell_2->setVisible(true);}else{ui->note_5_cell_2->setVisible(false);}
    if(notes_list[14] == true){ui->note_6_cell_2->setVisible(true);}else{ui->note_6_cell_2->setVisible(false);}
    if(notes_list[15] == true){ui->note_7_cell_2->setVisible(true);}else{ui->note_7_cell_2->setVisible(false);}
    if(notes_list[16] == true){ui->note_8_cell_2->setVisible(true);}else{ui->note_8_cell_2->setVisible(false);}
    if(notes_list[17] == true){ui->note_9_cell_2->setVisible(true);}else{ui->note_9_cell_2->setVisible(false);}
    if(notes_list[18] == true){ui->note_1_cell_3->setVisible(true);}else{ui->note_1_cell_3->setVisible(false);}
    if(notes_list[19] == true){ui->note_2_cell_3->setVisible(true);}else{ui->note_2_cell_3->setVisible(false);}
    if(notes_list[20] == true){ui->note_3_cell_3->setVisible(true);}else{ui->note_3_cell_3->setVisible(false);}
    if(notes_list[21] == true){ui->note_4_cell_3->setVisible(true);}else{ui->note_4_cell_3->setVisible(false);}
    if(notes_list[22] == true){ui->note_5_cell_3->setVisible(true);}else{ui->note_5_cell_3->setVisible(false);}
    if(notes_list[23] == true){ui->note_6_cell_3->setVisible(true);}else{ui->note_6_cell_3->setVisible(false);}
    if(notes_list[24] == true){ui->note_7_cell_3->setVisible(true);}else{ui->note_7_cell_3->setVisible(false);}
    if(notes_list[25] == true){ui->note_8_cell_3->setVisible(true);}else{ui->note_8_cell_3->setVisible(false);}
    if(notes_list[26] == true){ui->note_9_cell_3->setVisible(true);}else{ui->note_9_cell_3->setVisible(false);}
    if(notes_list[27] == true){ui->note_1_cell_4->setVisible(true);}else{ui->note_1_cell_4->setVisible(false);}
    if(notes_list[28] == true){ui->note_2_cell_4->setVisible(true);}else{ui->note_2_cell_4->setVisible(false);}
    if(notes_list[29] == true){ui->note_3_cell_4->setVisible(true);}else{ui->note_3_cell_4->setVisible(false);}
    if(notes_list[30] == true){ui->note_4_cell_4->setVisible(true);}else{ui->note_4_cell_4->setVisible(false);}
    if(notes_list[31] == true){ui->note_5_cell_4->setVisible(true);}else{ui->note_5_cell_4->setVisible(false);}
    if(notes_list[32] == true){ui->note_6_cell_4->setVisible(true);}else{ui->note_6_cell_4->setVisible(false);}
    if(notes_list[33] == true){ui->note_7_cell_4->setVisible(true);}else{ui->note_7_cell_4->setVisible(false);}
    if(notes_list[34] == true){ui->note_8_cell_4->setVisible(true);}else{ui->note_8_cell_4->setVisible(false);}
    if(notes_list[35] == true){ui->note_9_cell_4->setVisible(true);}else{ui->note_9_cell_4->setVisible(false);}
    if(notes_list[36] == true){ui->note_1_cell_5->setVisible(true);}else{ui->note_1_cell_5->setVisible(false);}
    if(notes_list[37] == true){ui->note_2_cell_5->setVisible(true);}else{ui->note_2_cell_5->setVisible(false);}
    if(notes_list[38] == true){ui->note_3_cell_5->setVisible(true);}else{ui->note_3_cell_5->setVisible(false);}
    if(notes_list[39] == true){ui->note_4_cell_5->setVisible(true);}else{ui->note_4_cell_5->setVisible(false);}
    if(notes_list[40] == true){ui->note_5_cell_5->setVisible(true);}else{ui->note_5_cell_5->setVisible(false);}
    if(notes_list[41] == true){ui->note_6_cell_5->setVisible(true);}else{ui->note_6_cell_5->setVisible(false);}
    if(notes_list[42] == true){ui->note_7_cell_5->setVisible(true);}else{ui->note_7_cell_5->setVisible(false);}
    if(notes_list[43] == true){ui->note_8_cell_5->setVisible(true);}else{ui->note_8_cell_5->setVisible(false);}
    if(notes_list[44] == true){ui->note_9_cell_5->setVisible(true);}else{ui->note_9_cell_5->setVisible(false);}
    if(notes_list[45] == true){ui->note_1_cell_6->setVisible(true);}else{ui->note_1_cell_6->setVisible(false);}
    if(notes_list[46] == true){ui->note_2_cell_6->setVisible(true);}else{ui->note_2_cell_6->setVisible(false);}
    if(notes_list[47] == true){ui->note_3_cell_6->setVisible(true);}else{ui->note_3_cell_6->setVisible(false);}
    if(notes_list[48] == true){ui->note_4_cell_6->setVisible(true);}else{ui->note_4_cell_6->setVisible(false);}
    if(notes_list[49] == true){ui->note_5_cell_6->setVisible(true);}else{ui->note_5_cell_6->setVisible(false);}
    if(notes_list[50] == true){ui->note_6_cell_6->setVisible(true);}else{ui->note_6_cell_6->setVisible(false);}
    if(notes_list[51] == true){ui->note_7_cell_6->setVisible(true);}else{ui->note_7_cell_6->setVisible(false);}
    if(notes_list[52] == true){ui->note_8_cell_6->setVisible(true);}else{ui->note_8_cell_6->setVisible(false);}
    if(notes_list[53] == true){ui->note_9_cell_6->setVisible(true);}else{ui->note_9_cell_6->setVisible(false);}
    if(notes_list[54] == true){ui->note_1_cell_7->setVisible(true);}else{ui->note_1_cell_7->setVisible(false);}
    if(notes_list[55] == true){ui->note_2_cell_7->setVisible(true);}else{ui->note_2_cell_7->setVisible(false);}
    if(notes_list[56] == true){ui->note_3_cell_7->setVisible(true);}else{ui->note_3_cell_7->setVisible(false);}
    if(notes_list[57] == true){ui->note_4_cell_7->setVisible(true);}else{ui->note_4_cell_7->setVisible(false);}
    if(notes_list[58] == true){ui->note_5_cell_7->setVisible(true);}else{ui->note_5_cell_7->setVisible(false);}
    if(notes_list[59] == true){ui->note_6_cell_7->setVisible(true);}else{ui->note_6_cell_7->setVisible(false);}
    if(notes_list[60] == true){ui->note_7_cell_7->setVisible(true);}else{ui->note_7_cell_7->setVisible(false);}
    if(notes_list[61] == true){ui->note_8_cell_7->setVisible(true);}else{ui->note_8_cell_7->setVisible(false);}
    if(notes_list[62] == true){ui->note_9_cell_7->setVisible(true);}else{ui->note_9_cell_7->setVisible(false);}
    if(notes_list[63] == true){ui->note_1_cell_8->setVisible(true);}else{ui->note_1_cell_8->setVisible(false);}
    if(notes_list[64] == true){ui->note_2_cell_8->setVisible(true);}else{ui->note_2_cell_8->setVisible(false);}
    if(notes_list[65] == true){ui->note_3_cell_8->setVisible(true);}else{ui->note_3_cell_8->setVisible(false);}
    if(notes_list[66] == true){ui->note_4_cell_8->setVisible(true);}else{ui->note_4_cell_8->setVisible(false);}
    if(notes_list[67] == true){ui->note_5_cell_8->setVisible(true);}else{ui->note_5_cell_8->setVisible(false);}
    if(notes_list[68] == true){ui->note_6_cell_8->setVisible(true);}else{ui->note_6_cell_8->setVisible(false);}
    if(notes_list[69] == true){ui->note_7_cell_8->setVisible(true);}else{ui->note_7_cell_8->setVisible(false);}
    if(notes_list[70] == true){ui->note_8_cell_8->setVisible(true);}else{ui->note_8_cell_8->setVisible(false);}
    if(notes_list[71] == true){ui->note_9_cell_8->setVisible(true);}else{ui->note_9_cell_8->setVisible(false);}
    if(notes_list[72] == true){ui->note_1_cell_9->setVisible(true);}else{ui->note_1_cell_9->setVisible(false);}
    if(notes_list[73] == true){ui->note_2_cell_9->setVisible(true);}else{ui->note_2_cell_9->setVisible(false);}
    if(notes_list[74] == true){ui->note_3_cell_9->setVisible(true);}else{ui->note_3_cell_9->setVisible(false);}
    if(notes_list[75] == true){ui->note_4_cell_9->setVisible(true);}else{ui->note_4_cell_9->setVisible(false);}
    if(notes_list[76] == true){ui->note_5_cell_9->setVisible(true);}else{ui->note_5_cell_9->setVisible(false);}
    if(notes_list[77] == true){ui->note_6_cell_9->setVisible(true);}else{ui->note_6_cell_9->setVisible(false);}
    if(notes_list[78] == true){ui->note_7_cell_9->setVisible(true);}else{ui->note_7_cell_9->setVisible(false);}
    if(notes_list[79] == true){ui->note_8_cell_9->setVisible(true);}else{ui->note_8_cell_9->setVisible(false);}
    if(notes_list[80] == true){ui->note_9_cell_9->setVisible(true);}else{ui->note_9_cell_9->setVisible(false);}
    if(notes_list[81] == true){ui->note_1_cell_10->setVisible(true);}else{ui->note_1_cell_10->setVisible(false);}
    if(notes_list[82] == true){ui->note_2_cell_10->setVisible(true);}else{ui->note_2_cell_10->setVisible(false);}
    if(notes_list[83] == true){ui->note_3_cell_10->setVisible(true);}else{ui->note_3_cell_10->setVisible(false);}
    if(notes_list[84] == true){ui->note_4_cell_10->setVisible(true);}else{ui->note_4_cell_10->setVisible(false);}
    if(notes_list[85] == true){ui->note_5_cell_10->setVisible(true);}else{ui->note_5_cell_10->setVisible(false);}
    if(notes_list[86] == true){ui->note_6_cell_10->setVisible(true);}else{ui->note_6_cell_10->setVisible(false);}
    if(notes_list[87] == true){ui->note_7_cell_10->setVisible(true);}else{ui->note_7_cell_10->setVisible(false);}
    if(notes_list[88] == true){ui->note_8_cell_10->setVisible(true);}else{ui->note_8_cell_10->setVisible(false);}
    if(notes_list[89] == true){ui->note_9_cell_10->setVisible(true);}else{ui->note_9_cell_10->setVisible(false);}
    if(notes_list[90] == true){ui->note_1_cell_11->setVisible(true);}else{ui->note_1_cell_11->setVisible(false);}
    if(notes_list[91] == true){ui->note_2_cell_11->setVisible(true);}else{ui->note_2_cell_11->setVisible(false);}
    if(notes_list[92] == true){ui->note_3_cell_11->setVisible(true);}else{ui->note_3_cell_11->setVisible(false);}
    if(notes_list[93] == true){ui->note_4_cell_11->setVisible(true);}else{ui->note_4_cell_11->setVisible(false);}
    if(notes_list[94] == true){ui->note_5_cell_11->setVisible(true);}else{ui->note_5_cell_11->setVisible(false);}
    if(notes_list[95] == true){ui->note_6_cell_11->setVisible(true);}else{ui->note_6_cell_11->setVisible(false);}
    if(notes_list[96] == true){ui->note_7_cell_11->setVisible(true);}else{ui->note_7_cell_11->setVisible(false);}
    if(notes_list[97] == true){ui->note_8_cell_11->setVisible(true);}else{ui->note_8_cell_11->setVisible(false);}
    if(notes_list[98] == true){ui->note_9_cell_11->setVisible(true);}else{ui->note_9_cell_11->setVisible(false);}
    if(notes_list[99] == true){ui->note_1_cell_12->setVisible(true);}else{ui->note_1_cell_12->setVisible(false);}
    if(notes_list[100] == true){ui->note_2_cell_12->setVisible(true);}else{ui->note_2_cell_12->setVisible(false);}
    if(notes_list[101] == true){ui->note_3_cell_12->setVisible(true);}else{ui->note_3_cell_12->setVisible(false);}
    if(notes_list[102] == true){ui->note_4_cell_12->setVisible(true);}else{ui->note_4_cell_12->setVisible(false);}
    if(notes_list[103] == true){ui->note_5_cell_12->setVisible(true);}else{ui->note_5_cell_12->setVisible(false);}
    if(notes_list[104] == true){ui->note_6_cell_12->setVisible(true);}else{ui->note_6_cell_12->setVisible(false);}
    if(notes_list[105] == true){ui->note_7_cell_12->setVisible(true);}else{ui->note_7_cell_12->setVisible(false);}
    if(notes_list[106] == true){ui->note_8_cell_12->setVisible(true);}else{ui->note_8_cell_12->setVisible(false);}
    if(notes_list[107] == true){ui->note_9_cell_12->setVisible(true);}else{ui->note_9_cell_12->setVisible(false);}
    if(notes_list[108] == true){ui->note_1_cell_13->setVisible(true);}else{ui->note_1_cell_13->setVisible(false);}
    if(notes_list[109] == true){ui->note_2_cell_13->setVisible(true);}else{ui->note_2_cell_13->setVisible(false);}
    if(notes_list[110] == true){ui->note_3_cell_13->setVisible(true);}else{ui->note_3_cell_13->setVisible(false);}
    if(notes_list[111] == true){ui->note_4_cell_13->setVisible(true);}else{ui->note_4_cell_13->setVisible(false);}
    if(notes_list[112] == true){ui->note_5_cell_13->setVisible(true);}else{ui->note_5_cell_13->setVisible(false);}
    if(notes_list[113] == true){ui->note_6_cell_13->setVisible(true);}else{ui->note_6_cell_13->setVisible(false);}
    if(notes_list[114] == true){ui->note_7_cell_13->setVisible(true);}else{ui->note_7_cell_13->setVisible(false);}
    if(notes_list[115] == true){ui->note_8_cell_13->setVisible(true);}else{ui->note_8_cell_13->setVisible(false);}
    if(notes_list[116] == true){ui->note_9_cell_13->setVisible(true);}else{ui->note_9_cell_13->setVisible(false);}
    if(notes_list[117] == true){ui->note_1_cell_14->setVisible(true);}else{ui->note_1_cell_14->setVisible(false);}
    if(notes_list[118] == true){ui->note_2_cell_14->setVisible(true);}else{ui->note_2_cell_14->setVisible(false);}
    if(notes_list[119] == true){ui->note_3_cell_14->setVisible(true);}else{ui->note_3_cell_14->setVisible(false);}
    if(notes_list[120] == true){ui->note_4_cell_14->setVisible(true);}else{ui->note_4_cell_14->setVisible(false);}
    if(notes_list[121] == true){ui->note_5_cell_14->setVisible(true);}else{ui->note_5_cell_14->setVisible(false);}
    if(notes_list[122] == true){ui->note_6_cell_14->setVisible(true);}else{ui->note_6_cell_14->setVisible(false);}
    if(notes_list[123] == true){ui->note_7_cell_14->setVisible(true);}else{ui->note_7_cell_14->setVisible(false);}
    if(notes_list[124] == true){ui->note_8_cell_14->setVisible(true);}else{ui->note_8_cell_14->setVisible(false);}
    if(notes_list[125] == true){ui->note_9_cell_14->setVisible(true);}else{ui->note_9_cell_14->setVisible(false);}
    if(notes_list[126] == true){ui->note_1_cell_15->setVisible(true);}else{ui->note_1_cell_15->setVisible(false);}
    if(notes_list[127] == true){ui->note_2_cell_15->setVisible(true);}else{ui->note_2_cell_15->setVisible(false);}
    if(notes_list[128] == true){ui->note_3_cell_15->setVisible(true);}else{ui->note_3_cell_15->setVisible(false);}
    if(notes_list[129] == true){ui->note_4_cell_15->setVisible(true);}else{ui->note_4_cell_15->setVisible(false);}
    if(notes_list[130] == true){ui->note_5_cell_15->setVisible(true);}else{ui->note_5_cell_15->setVisible(false);}
    if(notes_list[131] == true){ui->note_6_cell_15->setVisible(true);}else{ui->note_6_cell_15->setVisible(false);}
    if(notes_list[132] == true){ui->note_7_cell_15->setVisible(true);}else{ui->note_7_cell_15->setVisible(false);}
    if(notes_list[133] == true){ui->note_8_cell_15->setVisible(true);}else{ui->note_8_cell_15->setVisible(false);}
    if(notes_list[134] == true){ui->note_9_cell_15->setVisible(true);}else{ui->note_9_cell_15->setVisible(false);}
    if(notes_list[135] == true){ui->note_1_cell_16->setVisible(true);}else{ui->note_1_cell_16->setVisible(false);}
    if(notes_list[136] == true){ui->note_2_cell_16->setVisible(true);}else{ui->note_2_cell_16->setVisible(false);}
    if(notes_list[137] == true){ui->note_3_cell_16->setVisible(true);}else{ui->note_3_cell_16->setVisible(false);}
    if(notes_list[138] == true){ui->note_4_cell_16->setVisible(true);}else{ui->note_4_cell_16->setVisible(false);}
    if(notes_list[139] == true){ui->note_5_cell_16->setVisible(true);}else{ui->note_5_cell_16->setVisible(false);}
    if(notes_list[140] == true){ui->note_6_cell_16->setVisible(true);}else{ui->note_6_cell_16->setVisible(false);}
    if(notes_list[141] == true){ui->note_7_cell_16->setVisible(true);}else{ui->note_7_cell_16->setVisible(false);}
    if(notes_list[142] == true){ui->note_8_cell_16->setVisible(true);}else{ui->note_8_cell_16->setVisible(false);}
    if(notes_list[143] == true){ui->note_9_cell_16->setVisible(true);}else{ui->note_9_cell_16->setVisible(false);}
    if(notes_list[144] == true){ui->note_1_cell_17->setVisible(true);}else{ui->note_1_cell_17->setVisible(false);}
    if(notes_list[145] == true){ui->note_2_cell_17->setVisible(true);}else{ui->note_2_cell_17->setVisible(false);}
    if(notes_list[146] == true){ui->note_3_cell_17->setVisible(true);}else{ui->note_3_cell_17->setVisible(false);}
    if(notes_list[147] == true){ui->note_4_cell_17->setVisible(true);}else{ui->note_4_cell_17->setVisible(false);}
    if(notes_list[148] == true){ui->note_5_cell_17->setVisible(true);}else{ui->note_5_cell_17->setVisible(false);}
    if(notes_list[149] == true){ui->note_6_cell_17->setVisible(true);}else{ui->note_6_cell_17->setVisible(false);}
    if(notes_list[150] == true){ui->note_7_cell_17->setVisible(true);}else{ui->note_7_cell_17->setVisible(false);}
    if(notes_list[151] == true){ui->note_8_cell_17->setVisible(true);}else{ui->note_8_cell_17->setVisible(false);}
    if(notes_list[152] == true){ui->note_9_cell_17->setVisible(true);}else{ui->note_9_cell_17->setVisible(false);}
    if(notes_list[153] == true){ui->note_1_cell_18->setVisible(true);}else{ui->note_1_cell_18->setVisible(false);}
    if(notes_list[154] == true){ui->note_2_cell_18->setVisible(true);}else{ui->note_2_cell_18->setVisible(false);}
    if(notes_list[155] == true){ui->note_3_cell_18->setVisible(true);}else{ui->note_3_cell_18->setVisible(false);}
    if(notes_list[156] == true){ui->note_4_cell_18->setVisible(true);}else{ui->note_4_cell_18->setVisible(false);}
    if(notes_list[157] == true){ui->note_5_cell_18->setVisible(true);}else{ui->note_5_cell_18->setVisible(false);}
    if(notes_list[158] == true){ui->note_6_cell_18->setVisible(true);}else{ui->note_6_cell_18->setVisible(false);}
    if(notes_list[159] == true){ui->note_7_cell_18->setVisible(true);}else{ui->note_7_cell_18->setVisible(false);}
    if(notes_list[160] == true){ui->note_8_cell_18->setVisible(true);}else{ui->note_8_cell_18->setVisible(false);}
    if(notes_list[161] == true){ui->note_9_cell_18->setVisible(true);}else{ui->note_9_cell_18->setVisible(false);}
    if(notes_list[162] == true){ui->note_1_cell_19->setVisible(true);}else{ui->note_1_cell_19->setVisible(false);}
    if(notes_list[163] == true){ui->note_2_cell_19->setVisible(true);}else{ui->note_2_cell_19->setVisible(false);}
    if(notes_list[164] == true){ui->note_3_cell_19->setVisible(true);}else{ui->note_3_cell_19->setVisible(false);}
    if(notes_list[165] == true){ui->note_4_cell_19->setVisible(true);}else{ui->note_4_cell_19->setVisible(false);}
    if(notes_list[166] == true){ui->note_5_cell_19->setVisible(true);}else{ui->note_5_cell_19->setVisible(false);}
    if(notes_list[167] == true){ui->note_6_cell_19->setVisible(true);}else{ui->note_6_cell_19->setVisible(false);}
    if(notes_list[168] == true){ui->note_7_cell_19->setVisible(true);}else{ui->note_7_cell_19->setVisible(false);}
    if(notes_list[169] == true){ui->note_8_cell_19->setVisible(true);}else{ui->note_8_cell_19->setVisible(false);}
    if(notes_list[170] == true){ui->note_9_cell_19->setVisible(true);}else{ui->note_9_cell_19->setVisible(false);}
    if(notes_list[171] == true){ui->note_1_cell_20->setVisible(true);}else{ui->note_1_cell_20->setVisible(false);}
    if(notes_list[172] == true){ui->note_2_cell_20->setVisible(true);}else{ui->note_2_cell_20->setVisible(false);}
    if(notes_list[173] == true){ui->note_3_cell_20->setVisible(true);}else{ui->note_3_cell_20->setVisible(false);}
    if(notes_list[174] == true){ui->note_4_cell_20->setVisible(true);}else{ui->note_4_cell_20->setVisible(false);}
    if(notes_list[175] == true){ui->note_5_cell_20->setVisible(true);}else{ui->note_5_cell_20->setVisible(false);}
    if(notes_list[176] == true){ui->note_6_cell_20->setVisible(true);}else{ui->note_6_cell_20->setVisible(false);}
    if(notes_list[177] == true){ui->note_7_cell_20->setVisible(true);}else{ui->note_7_cell_20->setVisible(false);}
    if(notes_list[178] == true){ui->note_8_cell_20->setVisible(true);}else{ui->note_8_cell_20->setVisible(false);}
    if(notes_list[179] == true){ui->note_9_cell_20->setVisible(true);}else{ui->note_9_cell_20->setVisible(false);}
    if(notes_list[180] == true){ui->note_1_cell_21->setVisible(true);}else{ui->note_1_cell_21->setVisible(false);}
    if(notes_list[181] == true){ui->note_2_cell_21->setVisible(true);}else{ui->note_2_cell_21->setVisible(false);}
    if(notes_list[182] == true){ui->note_3_cell_21->setVisible(true);}else{ui->note_3_cell_21->setVisible(false);}
    if(notes_list[183] == true){ui->note_4_cell_21->setVisible(true);}else{ui->note_4_cell_21->setVisible(false);}
    if(notes_list[184] == true){ui->note_5_cell_21->setVisible(true);}else{ui->note_5_cell_21->setVisible(false);}
    if(notes_list[185] == true){ui->note_6_cell_21->setVisible(true);}else{ui->note_6_cell_21->setVisible(false);}
    if(notes_list[186] == true){ui->note_7_cell_21->setVisible(true);}else{ui->note_7_cell_21->setVisible(false);}
    if(notes_list[187] == true){ui->note_8_cell_21->setVisible(true);}else{ui->note_8_cell_21->setVisible(false);}
    if(notes_list[188] == true){ui->note_9_cell_21->setVisible(true);}else{ui->note_9_cell_21->setVisible(false);}
    if(notes_list[189] == true){ui->note_1_cell_22->setVisible(true);}else{ui->note_1_cell_22->setVisible(false);}
    if(notes_list[190] == true){ui->note_2_cell_22->setVisible(true);}else{ui->note_2_cell_22->setVisible(false);}
    if(notes_list[191] == true){ui->note_3_cell_22->setVisible(true);}else{ui->note_3_cell_22->setVisible(false);}
    if(notes_list[192] == true){ui->note_4_cell_22->setVisible(true);}else{ui->note_4_cell_22->setVisible(false);}
    if(notes_list[193] == true){ui->note_5_cell_22->setVisible(true);}else{ui->note_5_cell_22->setVisible(false);}
    if(notes_list[194] == true){ui->note_6_cell_22->setVisible(true);}else{ui->note_6_cell_22->setVisible(false);}
    if(notes_list[195] == true){ui->note_7_cell_22->setVisible(true);}else{ui->note_7_cell_22->setVisible(false);}
    if(notes_list[196] == true){ui->note_8_cell_22->setVisible(true);}else{ui->note_8_cell_22->setVisible(false);}
    if(notes_list[197] == true){ui->note_9_cell_22->setVisible(true);}else{ui->note_9_cell_22->setVisible(false);}
    if(notes_list[198] == true){ui->note_1_cell_23->setVisible(true);}else{ui->note_1_cell_23->setVisible(false);}
    if(notes_list[199] == true){ui->note_2_cell_23->setVisible(true);}else{ui->note_2_cell_23->setVisible(false);}
    if(notes_list[200] == true){ui->note_3_cell_23->setVisible(true);}else{ui->note_3_cell_23->setVisible(false);}
    if(notes_list[201] == true){ui->note_4_cell_23->setVisible(true);}else{ui->note_4_cell_23->setVisible(false);}
    if(notes_list[202] == true){ui->note_5_cell_23->setVisible(true);}else{ui->note_5_cell_23->setVisible(false);}
    if(notes_list[203] == true){ui->note_6_cell_23->setVisible(true);}else{ui->note_6_cell_23->setVisible(false);}
    if(notes_list[204] == true){ui->note_7_cell_23->setVisible(true);}else{ui->note_7_cell_23->setVisible(false);}
    if(notes_list[205] == true){ui->note_8_cell_23->setVisible(true);}else{ui->note_8_cell_23->setVisible(false);}
    if(notes_list[206] == true){ui->note_9_cell_23->setVisible(true);}else{ui->note_9_cell_23->setVisible(false);}
    if(notes_list[207] == true){ui->note_1_cell_24->setVisible(true);}else{ui->note_1_cell_24->setVisible(false);}
    if(notes_list[208] == true){ui->note_2_cell_24->setVisible(true);}else{ui->note_2_cell_24->setVisible(false);}
    if(notes_list[209] == true){ui->note_3_cell_24->setVisible(true);}else{ui->note_3_cell_24->setVisible(false);}
    if(notes_list[210] == true){ui->note_4_cell_24->setVisible(true);}else{ui->note_4_cell_24->setVisible(false);}
    if(notes_list[211] == true){ui->note_5_cell_24->setVisible(true);}else{ui->note_5_cell_24->setVisible(false);}
    if(notes_list[212] == true){ui->note_6_cell_24->setVisible(true);}else{ui->note_6_cell_24->setVisible(false);}
    if(notes_list[213] == true){ui->note_7_cell_24->setVisible(true);}else{ui->note_7_cell_24->setVisible(false);}
    if(notes_list[214] == true){ui->note_8_cell_24->setVisible(true);}else{ui->note_8_cell_24->setVisible(false);}
    if(notes_list[215] == true){ui->note_9_cell_24->setVisible(true);}else{ui->note_9_cell_24->setVisible(false);}
    if(notes_list[216] == true){ui->note_1_cell_25->setVisible(true);}else{ui->note_1_cell_25->setVisible(false);}
    if(notes_list[217] == true){ui->note_2_cell_25->setVisible(true);}else{ui->note_2_cell_25->setVisible(false);}
    if(notes_list[218] == true){ui->note_3_cell_25->setVisible(true);}else{ui->note_3_cell_25->setVisible(false);}
    if(notes_list[219] == true){ui->note_4_cell_25->setVisible(true);}else{ui->note_4_cell_25->setVisible(false);}
    if(notes_list[220] == true){ui->note_5_cell_25->setVisible(true);}else{ui->note_5_cell_25->setVisible(false);}
    if(notes_list[221] == true){ui->note_6_cell_25->setVisible(true);}else{ui->note_6_cell_25->setVisible(false);}
    if(notes_list[222] == true){ui->note_7_cell_25->setVisible(true);}else{ui->note_7_cell_25->setVisible(false);}
    if(notes_list[223] == true){ui->note_8_cell_25->setVisible(true);}else{ui->note_8_cell_25->setVisible(false);}
    if(notes_list[224] == true){ui->note_9_cell_25->setVisible(true);}else{ui->note_9_cell_25->setVisible(false);}
    if(notes_list[225] == true){ui->note_1_cell_26->setVisible(true);}else{ui->note_1_cell_26->setVisible(false);}
    if(notes_list[226] == true){ui->note_2_cell_26->setVisible(true);}else{ui->note_2_cell_26->setVisible(false);}
    if(notes_list[227] == true){ui->note_3_cell_26->setVisible(true);}else{ui->note_3_cell_26->setVisible(false);}
    if(notes_list[228] == true){ui->note_4_cell_26->setVisible(true);}else{ui->note_4_cell_26->setVisible(false);}
    if(notes_list[229] == true){ui->note_5_cell_26->setVisible(true);}else{ui->note_5_cell_26->setVisible(false);}
    if(notes_list[230] == true){ui->note_6_cell_26->setVisible(true);}else{ui->note_6_cell_26->setVisible(false);}
    if(notes_list[231] == true){ui->note_7_cell_26->setVisible(true);}else{ui->note_7_cell_26->setVisible(false);}
    if(notes_list[232] == true){ui->note_8_cell_26->setVisible(true);}else{ui->note_8_cell_26->setVisible(false);}
    if(notes_list[233] == true){ui->note_9_cell_26->setVisible(true);}else{ui->note_9_cell_26->setVisible(false);}
    if(notes_list[234] == true){ui->note_1_cell_27->setVisible(true);}else{ui->note_1_cell_27->setVisible(false);}
    if(notes_list[235] == true){ui->note_2_cell_27->setVisible(true);}else{ui->note_2_cell_27->setVisible(false);}
    if(notes_list[236] == true){ui->note_3_cell_27->setVisible(true);}else{ui->note_3_cell_27->setVisible(false);}
    if(notes_list[237] == true){ui->note_4_cell_27->setVisible(true);}else{ui->note_4_cell_27->setVisible(false);}
    if(notes_list[238] == true){ui->note_5_cell_27->setVisible(true);}else{ui->note_5_cell_27->setVisible(false);}
    if(notes_list[239] == true){ui->note_6_cell_27->setVisible(true);}else{ui->note_6_cell_27->setVisible(false);}
    if(notes_list[240] == true){ui->note_7_cell_27->setVisible(true);}else{ui->note_7_cell_27->setVisible(false);}
    if(notes_list[241] == true){ui->note_8_cell_27->setVisible(true);}else{ui->note_8_cell_27->setVisible(false);}
    if(notes_list[242] == true){ui->note_9_cell_27->setVisible(true);}else{ui->note_9_cell_27->setVisible(false);}
    if(notes_list[243] == true){ui->note_1_cell_28->setVisible(true);}else{ui->note_1_cell_28->setVisible(false);}
    if(notes_list[244] == true){ui->note_2_cell_28->setVisible(true);}else{ui->note_2_cell_28->setVisible(false);}
    if(notes_list[245] == true){ui->note_3_cell_28->setVisible(true);}else{ui->note_3_cell_28->setVisible(false);}
    if(notes_list[246] == true){ui->note_4_cell_28->setVisible(true);}else{ui->note_4_cell_28->setVisible(false);}
    if(notes_list[247] == true){ui->note_5_cell_28->setVisible(true);}else{ui->note_5_cell_28->setVisible(false);}
    if(notes_list[248] == true){ui->note_6_cell_28->setVisible(true);}else{ui->note_6_cell_28->setVisible(false);}
    if(notes_list[249] == true){ui->note_7_cell_28->setVisible(true);}else{ui->note_7_cell_28->setVisible(false);}
    if(notes_list[250] == true){ui->note_8_cell_28->setVisible(true);}else{ui->note_8_cell_28->setVisible(false);}
    if(notes_list[251] == true){ui->note_9_cell_28->setVisible(true);}else{ui->note_9_cell_28->setVisible(false);}
    if(notes_list[252] == true){ui->note_1_cell_29->setVisible(true);}else{ui->note_1_cell_29->setVisible(false);}
    if(notes_list[253] == true){ui->note_2_cell_29->setVisible(true);}else{ui->note_2_cell_29->setVisible(false);}
    if(notes_list[254] == true){ui->note_3_cell_29->setVisible(true);}else{ui->note_3_cell_29->setVisible(false);}
    if(notes_list[255] == true){ui->note_4_cell_29->setVisible(true);}else{ui->note_4_cell_29->setVisible(false);}
    if(notes_list[256] == true){ui->note_5_cell_29->setVisible(true);}else{ui->note_5_cell_29->setVisible(false);}
    if(notes_list[257] == true){ui->note_6_cell_29->setVisible(true);}else{ui->note_6_cell_29->setVisible(false);}
    if(notes_list[258] == true){ui->note_7_cell_29->setVisible(true);}else{ui->note_7_cell_29->setVisible(false);}
    if(notes_list[259] == true){ui->note_8_cell_29->setVisible(true);}else{ui->note_8_cell_29->setVisible(false);}
    if(notes_list[260] == true){ui->note_9_cell_29->setVisible(true);}else{ui->note_9_cell_29->setVisible(false);}
    if(notes_list[261] == true){ui->note_1_cell_30->setVisible(true);}else{ui->note_1_cell_30->setVisible(false);}
    if(notes_list[262] == true){ui->note_2_cell_30->setVisible(true);}else{ui->note_2_cell_30->setVisible(false);}
    if(notes_list[263] == true){ui->note_3_cell_30->setVisible(true);}else{ui->note_3_cell_30->setVisible(false);}
    if(notes_list[264] == true){ui->note_4_cell_30->setVisible(true);}else{ui->note_4_cell_30->setVisible(false);}
    if(notes_list[265] == true){ui->note_5_cell_30->setVisible(true);}else{ui->note_5_cell_30->setVisible(false);}
    if(notes_list[266] == true){ui->note_6_cell_30->setVisible(true);}else{ui->note_6_cell_30->setVisible(false);}
    if(notes_list[267] == true){ui->note_7_cell_30->setVisible(true);}else{ui->note_7_cell_30->setVisible(false);}
    if(notes_list[268] == true){ui->note_8_cell_30->setVisible(true);}else{ui->note_8_cell_30->setVisible(false);}
    if(notes_list[269] == true){ui->note_9_cell_30->setVisible(true);}else{ui->note_9_cell_30->setVisible(false);}
    if(notes_list[270] == true){ui->note_1_cell_31->setVisible(true);}else{ui->note_1_cell_31->setVisible(false);}
    if(notes_list[271] == true){ui->note_2_cell_31->setVisible(true);}else{ui->note_2_cell_31->setVisible(false);}
    if(notes_list[272] == true){ui->note_3_cell_31->setVisible(true);}else{ui->note_3_cell_31->setVisible(false);}
    if(notes_list[273] == true){ui->note_4_cell_31->setVisible(true);}else{ui->note_4_cell_31->setVisible(false);}
    if(notes_list[274] == true){ui->note_5_cell_31->setVisible(true);}else{ui->note_5_cell_31->setVisible(false);}
    if(notes_list[275] == true){ui->note_6_cell_31->setVisible(true);}else{ui->note_6_cell_31->setVisible(false);}
    if(notes_list[276] == true){ui->note_7_cell_31->setVisible(true);}else{ui->note_7_cell_31->setVisible(false);}
    if(notes_list[277] == true){ui->note_8_cell_31->setVisible(true);}else{ui->note_8_cell_31->setVisible(false);}
    if(notes_list[278] == true){ui->note_9_cell_31->setVisible(true);}else{ui->note_9_cell_31->setVisible(false);}
    if(notes_list[279] == true){ui->note_1_cell_32->setVisible(true);}else{ui->note_1_cell_32->setVisible(false);}
    if(notes_list[280] == true){ui->note_2_cell_32->setVisible(true);}else{ui->note_2_cell_32->setVisible(false);}
    if(notes_list[281] == true){ui->note_3_cell_32->setVisible(true);}else{ui->note_3_cell_32->setVisible(false);}
    if(notes_list[282] == true){ui->note_4_cell_32->setVisible(true);}else{ui->note_4_cell_32->setVisible(false);}
    if(notes_list[283] == true){ui->note_5_cell_32->setVisible(true);}else{ui->note_5_cell_32->setVisible(false);}
    if(notes_list[284] == true){ui->note_6_cell_32->setVisible(true);}else{ui->note_6_cell_32->setVisible(false);}
    if(notes_list[285] == true){ui->note_7_cell_32->setVisible(true);}else{ui->note_7_cell_32->setVisible(false);}
    if(notes_list[286] == true){ui->note_8_cell_32->setVisible(true);}else{ui->note_8_cell_32->setVisible(false);}
    if(notes_list[287] == true){ui->note_9_cell_32->setVisible(true);}else{ui->note_9_cell_32->setVisible(false);}
    if(notes_list[288] == true){ui->note_1_cell_33->setVisible(true);}else{ui->note_1_cell_33->setVisible(false);}
    if(notes_list[289] == true){ui->note_2_cell_33->setVisible(true);}else{ui->note_2_cell_33->setVisible(false);}
    if(notes_list[290] == true){ui->note_3_cell_33->setVisible(true);}else{ui->note_3_cell_33->setVisible(false);}
    if(notes_list[291] == true){ui->note_4_cell_33->setVisible(true);}else{ui->note_4_cell_33->setVisible(false);}
    if(notes_list[292] == true){ui->note_5_cell_33->setVisible(true);}else{ui->note_5_cell_33->setVisible(false);}
    if(notes_list[293] == true){ui->note_6_cell_33->setVisible(true);}else{ui->note_6_cell_33->setVisible(false);}
    if(notes_list[294] == true){ui->note_7_cell_33->setVisible(true);}else{ui->note_7_cell_33->setVisible(false);}
    if(notes_list[295] == true){ui->note_8_cell_33->setVisible(true);}else{ui->note_8_cell_33->setVisible(false);}
    if(notes_list[296] == true){ui->note_9_cell_33->setVisible(true);}else{ui->note_9_cell_33->setVisible(false);}
    if(notes_list[297] == true){ui->note_1_cell_34->setVisible(true);}else{ui->note_1_cell_34->setVisible(false);}
    if(notes_list[298] == true){ui->note_2_cell_34->setVisible(true);}else{ui->note_2_cell_34->setVisible(false);}
    if(notes_list[299] == true){ui->note_3_cell_34->setVisible(true);}else{ui->note_3_cell_34->setVisible(false);}
    if(notes_list[300] == true){ui->note_4_cell_34->setVisible(true);}else{ui->note_4_cell_34->setVisible(false);}
    if(notes_list[301] == true){ui->note_5_cell_34->setVisible(true);}else{ui->note_5_cell_34->setVisible(false);}
    if(notes_list[302] == true){ui->note_6_cell_34->setVisible(true);}else{ui->note_6_cell_34->setVisible(false);}
    if(notes_list[303] == true){ui->note_7_cell_34->setVisible(true);}else{ui->note_7_cell_34->setVisible(false);}
    if(notes_list[304] == true){ui->note_8_cell_34->setVisible(true);}else{ui->note_8_cell_34->setVisible(false);}
    if(notes_list[305] == true){ui->note_9_cell_34->setVisible(true);}else{ui->note_9_cell_34->setVisible(false);}
    if(notes_list[306] == true){ui->note_1_cell_35->setVisible(true);}else{ui->note_1_cell_35->setVisible(false);}
    if(notes_list[307] == true){ui->note_2_cell_35->setVisible(true);}else{ui->note_2_cell_35->setVisible(false);}
    if(notes_list[308] == true){ui->note_3_cell_35->setVisible(true);}else{ui->note_3_cell_35->setVisible(false);}
    if(notes_list[309] == true){ui->note_4_cell_35->setVisible(true);}else{ui->note_4_cell_35->setVisible(false);}
    if(notes_list[310] == true){ui->note_5_cell_35->setVisible(true);}else{ui->note_5_cell_35->setVisible(false);}
    if(notes_list[311] == true){ui->note_6_cell_35->setVisible(true);}else{ui->note_6_cell_35->setVisible(false);}
    if(notes_list[312] == true){ui->note_7_cell_35->setVisible(true);}else{ui->note_7_cell_35->setVisible(false);}
    if(notes_list[313] == true){ui->note_8_cell_35->setVisible(true);}else{ui->note_8_cell_35->setVisible(false);}
    if(notes_list[314] == true){ui->note_9_cell_35->setVisible(true);}else{ui->note_9_cell_35->setVisible(false);}
    if(notes_list[315] == true){ui->note_1_cell_36->setVisible(true);}else{ui->note_1_cell_36->setVisible(false);}
    if(notes_list[316] == true){ui->note_2_cell_36->setVisible(true);}else{ui->note_2_cell_36->setVisible(false);}
    if(notes_list[317] == true){ui->note_3_cell_36->setVisible(true);}else{ui->note_3_cell_36->setVisible(false);}
    if(notes_list[318] == true){ui->note_4_cell_36->setVisible(true);}else{ui->note_4_cell_36->setVisible(false);}
    if(notes_list[319] == true){ui->note_5_cell_36->setVisible(true);}else{ui->note_5_cell_36->setVisible(false);}
    if(notes_list[320] == true){ui->note_6_cell_36->setVisible(true);}else{ui->note_6_cell_36->setVisible(false);}
    if(notes_list[321] == true){ui->note_7_cell_36->setVisible(true);}else{ui->note_7_cell_36->setVisible(false);}
    if(notes_list[322] == true){ui->note_8_cell_36->setVisible(true);}else{ui->note_8_cell_36->setVisible(false);}
    if(notes_list[323] == true){ui->note_9_cell_36->setVisible(true);}else{ui->note_9_cell_36->setVisible(false);}
    if(notes_list[324] == true){ui->note_1_cell_37->setVisible(true);}else{ui->note_1_cell_37->setVisible(false);}
    if(notes_list[325] == true){ui->note_2_cell_37->setVisible(true);}else{ui->note_2_cell_37->setVisible(false);}
    if(notes_list[326] == true){ui->note_3_cell_37->setVisible(true);}else{ui->note_3_cell_37->setVisible(false);}
    if(notes_list[327] == true){ui->note_4_cell_37->setVisible(true);}else{ui->note_4_cell_37->setVisible(false);}
    if(notes_list[328] == true){ui->note_5_cell_37->setVisible(true);}else{ui->note_5_cell_37->setVisible(false);}
    if(notes_list[329] == true){ui->note_6_cell_37->setVisible(true);}else{ui->note_6_cell_37->setVisible(false);}
    if(notes_list[330] == true){ui->note_7_cell_37->setVisible(true);}else{ui->note_7_cell_37->setVisible(false);}
    if(notes_list[331] == true){ui->note_8_cell_37->setVisible(true);}else{ui->note_8_cell_37->setVisible(false);}
    if(notes_list[332] == true){ui->note_9_cell_37->setVisible(true);}else{ui->note_9_cell_37->setVisible(false);}
    if(notes_list[333] == true){ui->note_1_cell_38->setVisible(true);}else{ui->note_1_cell_38->setVisible(false);}
    if(notes_list[334] == true){ui->note_2_cell_38->setVisible(true);}else{ui->note_2_cell_38->setVisible(false);}
    if(notes_list[335] == true){ui->note_3_cell_38->setVisible(true);}else{ui->note_3_cell_38->setVisible(false);}
    if(notes_list[336] == true){ui->note_4_cell_38->setVisible(true);}else{ui->note_4_cell_38->setVisible(false);}
    if(notes_list[337] == true){ui->note_5_cell_38->setVisible(true);}else{ui->note_5_cell_38->setVisible(false);}
    if(notes_list[338] == true){ui->note_6_cell_38->setVisible(true);}else{ui->note_6_cell_38->setVisible(false);}
    if(notes_list[339] == true){ui->note_7_cell_38->setVisible(true);}else{ui->note_7_cell_38->setVisible(false);}
    if(notes_list[340] == true){ui->note_8_cell_38->setVisible(true);}else{ui->note_8_cell_38->setVisible(false);}
    if(notes_list[341] == true){ui->note_9_cell_38->setVisible(true);}else{ui->note_9_cell_38->setVisible(false);}
    if(notes_list[342] == true){ui->note_1_cell_39->setVisible(true);}else{ui->note_1_cell_39->setVisible(false);}
    if(notes_list[343] == true){ui->note_2_cell_39->setVisible(true);}else{ui->note_2_cell_39->setVisible(false);}
    if(notes_list[344] == true){ui->note_3_cell_39->setVisible(true);}else{ui->note_3_cell_39->setVisible(false);}
    if(notes_list[345] == true){ui->note_4_cell_39->setVisible(true);}else{ui->note_4_cell_39->setVisible(false);}
    if(notes_list[346] == true){ui->note_5_cell_39->setVisible(true);}else{ui->note_5_cell_39->setVisible(false);}
    if(notes_list[347] == true){ui->note_6_cell_39->setVisible(true);}else{ui->note_6_cell_39->setVisible(false);}
    if(notes_list[348] == true){ui->note_7_cell_39->setVisible(true);}else{ui->note_7_cell_39->setVisible(false);}
    if(notes_list[349] == true){ui->note_8_cell_39->setVisible(true);}else{ui->note_8_cell_39->setVisible(false);}
    if(notes_list[350] == true){ui->note_9_cell_39->setVisible(true);}else{ui->note_9_cell_39->setVisible(false);}
    if(notes_list[351] == true){ui->note_1_cell_40->setVisible(true);}else{ui->note_1_cell_40->setVisible(false);}
    if(notes_list[352] == true){ui->note_2_cell_40->setVisible(true);}else{ui->note_2_cell_40->setVisible(false);}
    if(notes_list[353] == true){ui->note_3_cell_40->setVisible(true);}else{ui->note_3_cell_40->setVisible(false);}
    if(notes_list[354] == true){ui->note_4_cell_40->setVisible(true);}else{ui->note_4_cell_40->setVisible(false);}
    if(notes_list[355] == true){ui->note_5_cell_40->setVisible(true);}else{ui->note_5_cell_40->setVisible(false);}
    if(notes_list[356] == true){ui->note_6_cell_40->setVisible(true);}else{ui->note_6_cell_40->setVisible(false);}
    if(notes_list[357] == true){ui->note_7_cell_40->setVisible(true);}else{ui->note_7_cell_40->setVisible(false);}
    if(notes_list[358] == true){ui->note_8_cell_40->setVisible(true);}else{ui->note_8_cell_40->setVisible(false);}
    if(notes_list[359] == true){ui->note_9_cell_40->setVisible(true);}else{ui->note_9_cell_40->setVisible(false);}
    if(notes_list[360] == true){ui->note_1_cell_41->setVisible(true);}else{ui->note_1_cell_41->setVisible(false);}
    if(notes_list[361] == true){ui->note_2_cell_41->setVisible(true);}else{ui->note_2_cell_41->setVisible(false);}
    if(notes_list[362] == true){ui->note_3_cell_41->setVisible(true);}else{ui->note_3_cell_41->setVisible(false);}
    if(notes_list[363] == true){ui->note_4_cell_41->setVisible(true);}else{ui->note_4_cell_41->setVisible(false);}
    if(notes_list[364] == true){ui->note_5_cell_41->setVisible(true);}else{ui->note_5_cell_41->setVisible(false);}
    if(notes_list[365] == true){ui->note_6_cell_41->setVisible(true);}else{ui->note_6_cell_41->setVisible(false);}
    if(notes_list[366] == true){ui->note_7_cell_41->setVisible(true);}else{ui->note_7_cell_41->setVisible(false);}
    if(notes_list[367] == true){ui->note_8_cell_41->setVisible(true);}else{ui->note_8_cell_41->setVisible(false);}
    if(notes_list[368] == true){ui->note_9_cell_41->setVisible(true);}else{ui->note_9_cell_41->setVisible(false);}
    if(notes_list[369] == true){ui->note_1_cell_42->setVisible(true);}else{ui->note_1_cell_42->setVisible(false);}
    if(notes_list[370] == true){ui->note_2_cell_42->setVisible(true);}else{ui->note_2_cell_42->setVisible(false);}
    if(notes_list[371] == true){ui->note_3_cell_42->setVisible(true);}else{ui->note_3_cell_42->setVisible(false);}
    if(notes_list[372] == true){ui->note_4_cell_42->setVisible(true);}else{ui->note_4_cell_42->setVisible(false);}
    if(notes_list[373] == true){ui->note_5_cell_42->setVisible(true);}else{ui->note_5_cell_42->setVisible(false);}
    if(notes_list[374] == true){ui->note_6_cell_42->setVisible(true);}else{ui->note_6_cell_42->setVisible(false);}
    if(notes_list[375] == true){ui->note_7_cell_42->setVisible(true);}else{ui->note_7_cell_42->setVisible(false);}
    if(notes_list[376] == true){ui->note_8_cell_42->setVisible(true);}else{ui->note_8_cell_42->setVisible(false);}
    if(notes_list[377] == true){ui->note_9_cell_42->setVisible(true);}else{ui->note_9_cell_42->setVisible(false);}
    if(notes_list[378] == true){ui->note_1_cell_43->setVisible(true);}else{ui->note_1_cell_43->setVisible(false);}
    if(notes_list[379] == true){ui->note_2_cell_43->setVisible(true);}else{ui->note_2_cell_43->setVisible(false);}
    if(notes_list[380] == true){ui->note_3_cell_43->setVisible(true);}else{ui->note_3_cell_43->setVisible(false);}
    if(notes_list[381] == true){ui->note_4_cell_43->setVisible(true);}else{ui->note_4_cell_43->setVisible(false);}
    if(notes_list[382] == true){ui->note_5_cell_43->setVisible(true);}else{ui->note_5_cell_43->setVisible(false);}
    if(notes_list[383] == true){ui->note_6_cell_43->setVisible(true);}else{ui->note_6_cell_43->setVisible(false);}
    if(notes_list[384] == true){ui->note_7_cell_43->setVisible(true);}else{ui->note_7_cell_43->setVisible(false);}
    if(notes_list[385] == true){ui->note_8_cell_43->setVisible(true);}else{ui->note_8_cell_43->setVisible(false);}
    if(notes_list[386] == true){ui->note_9_cell_43->setVisible(true);}else{ui->note_9_cell_43->setVisible(false);}
    if(notes_list[387] == true){ui->note_1_cell_44->setVisible(true);}else{ui->note_1_cell_44->setVisible(false);}
    if(notes_list[388] == true){ui->note_2_cell_44->setVisible(true);}else{ui->note_2_cell_44->setVisible(false);}
    if(notes_list[389] == true){ui->note_3_cell_44->setVisible(true);}else{ui->note_3_cell_44->setVisible(false);}
    if(notes_list[390] == true){ui->note_4_cell_44->setVisible(true);}else{ui->note_4_cell_44->setVisible(false);}
    if(notes_list[391] == true){ui->note_5_cell_44->setVisible(true);}else{ui->note_5_cell_44->setVisible(false);}
    if(notes_list[392] == true){ui->note_6_cell_44->setVisible(true);}else{ui->note_6_cell_44->setVisible(false);}
    if(notes_list[393] == true){ui->note_7_cell_44->setVisible(true);}else{ui->note_7_cell_44->setVisible(false);}
    if(notes_list[394] == true){ui->note_8_cell_44->setVisible(true);}else{ui->note_8_cell_44->setVisible(false);}
    if(notes_list[395] == true){ui->note_9_cell_44->setVisible(true);}else{ui->note_9_cell_44->setVisible(false);}
    if(notes_list[396] == true){ui->note_1_cell_45->setVisible(true);}else{ui->note_1_cell_45->setVisible(false);}
    if(notes_list[397] == true){ui->note_2_cell_45->setVisible(true);}else{ui->note_2_cell_45->setVisible(false);}
    if(notes_list[398] == true){ui->note_3_cell_45->setVisible(true);}else{ui->note_3_cell_45->setVisible(false);}
    if(notes_list[399] == true){ui->note_4_cell_45->setVisible(true);}else{ui->note_4_cell_45->setVisible(false);}
    if(notes_list[400] == true){ui->note_5_cell_45->setVisible(true);}else{ui->note_5_cell_45->setVisible(false);}
    if(notes_list[401] == true){ui->note_6_cell_45->setVisible(true);}else{ui->note_6_cell_45->setVisible(false);}
    if(notes_list[402] == true){ui->note_7_cell_45->setVisible(true);}else{ui->note_7_cell_45->setVisible(false);}
    if(notes_list[403] == true){ui->note_8_cell_45->setVisible(true);}else{ui->note_8_cell_45->setVisible(false);}
    if(notes_list[404] == true){ui->note_9_cell_45->setVisible(true);}else{ui->note_9_cell_45->setVisible(false);}
    if(notes_list[405] == true){ui->note_1_cell_46->setVisible(true);}else{ui->note_1_cell_46->setVisible(false);}
    if(notes_list[406] == true){ui->note_2_cell_46->setVisible(true);}else{ui->note_2_cell_46->setVisible(false);}
    if(notes_list[407] == true){ui->note_3_cell_46->setVisible(true);}else{ui->note_3_cell_46->setVisible(false);}
    if(notes_list[408] == true){ui->note_4_cell_46->setVisible(true);}else{ui->note_4_cell_46->setVisible(false);}
    if(notes_list[409] == true){ui->note_5_cell_46->setVisible(true);}else{ui->note_5_cell_46->setVisible(false);}
    if(notes_list[410] == true){ui->note_6_cell_46->setVisible(true);}else{ui->note_6_cell_46->setVisible(false);}
    if(notes_list[411] == true){ui->note_7_cell_46->setVisible(true);}else{ui->note_7_cell_46->setVisible(false);}
    if(notes_list[412] == true){ui->note_8_cell_46->setVisible(true);}else{ui->note_8_cell_46->setVisible(false);}
    if(notes_list[413] == true){ui->note_9_cell_46->setVisible(true);}else{ui->note_9_cell_46->setVisible(false);}
    if(notes_list[414] == true){ui->note_1_cell_47->setVisible(true);}else{ui->note_1_cell_47->setVisible(false);}
    if(notes_list[415] == true){ui->note_2_cell_47->setVisible(true);}else{ui->note_2_cell_47->setVisible(false);}
    if(notes_list[416] == true){ui->note_3_cell_47->setVisible(true);}else{ui->note_3_cell_47->setVisible(false);}
    if(notes_list[417] == true){ui->note_4_cell_47->setVisible(true);}else{ui->note_4_cell_47->setVisible(false);}
    if(notes_list[418] == true){ui->note_5_cell_47->setVisible(true);}else{ui->note_5_cell_47->setVisible(false);}
    if(notes_list[419] == true){ui->note_6_cell_47->setVisible(true);}else{ui->note_6_cell_47->setVisible(false);}
    if(notes_list[420] == true){ui->note_7_cell_47->setVisible(true);}else{ui->note_7_cell_47->setVisible(false);}
    if(notes_list[421] == true){ui->note_8_cell_47->setVisible(true);}else{ui->note_8_cell_47->setVisible(false);}
    if(notes_list[422] == true){ui->note_9_cell_47->setVisible(true);}else{ui->note_9_cell_47->setVisible(false);}
    if(notes_list[423] == true){ui->note_1_cell_48->setVisible(true);}else{ui->note_1_cell_48->setVisible(false);}
    if(notes_list[424] == true){ui->note_2_cell_48->setVisible(true);}else{ui->note_2_cell_48->setVisible(false);}
    if(notes_list[425] == true){ui->note_3_cell_48->setVisible(true);}else{ui->note_3_cell_48->setVisible(false);}
    if(notes_list[426] == true){ui->note_4_cell_48->setVisible(true);}else{ui->note_4_cell_48->setVisible(false);}
    if(notes_list[427] == true){ui->note_5_cell_48->setVisible(true);}else{ui->note_5_cell_48->setVisible(false);}
    if(notes_list[428] == true){ui->note_6_cell_48->setVisible(true);}else{ui->note_6_cell_48->setVisible(false);}
    if(notes_list[429] == true){ui->note_7_cell_48->setVisible(true);}else{ui->note_7_cell_48->setVisible(false);}
    if(notes_list[430] == true){ui->note_8_cell_48->setVisible(true);}else{ui->note_8_cell_48->setVisible(false);}
    if(notes_list[431] == true){ui->note_9_cell_48->setVisible(true);}else{ui->note_9_cell_48->setVisible(false);}
    if(notes_list[432] == true){ui->note_1_cell_49->setVisible(true);}else{ui->note_1_cell_49->setVisible(false);}
    if(notes_list[433] == true){ui->note_2_cell_49->setVisible(true);}else{ui->note_2_cell_49->setVisible(false);}
    if(notes_list[434] == true){ui->note_3_cell_49->setVisible(true);}else{ui->note_3_cell_49->setVisible(false);}
    if(notes_list[435] == true){ui->note_4_cell_49->setVisible(true);}else{ui->note_4_cell_49->setVisible(false);}
    if(notes_list[436] == true){ui->note_5_cell_49->setVisible(true);}else{ui->note_5_cell_49->setVisible(false);}
    if(notes_list[437] == true){ui->note_6_cell_49->setVisible(true);}else{ui->note_6_cell_49->setVisible(false);}
    if(notes_list[438] == true){ui->note_7_cell_49->setVisible(true);}else{ui->note_7_cell_49->setVisible(false);}
    if(notes_list[439] == true){ui->note_8_cell_49->setVisible(true);}else{ui->note_8_cell_49->setVisible(false);}
    if(notes_list[440] == true){ui->note_9_cell_49->setVisible(true);}else{ui->note_9_cell_49->setVisible(false);}
    if(notes_list[441] == true){ui->note_1_cell_50->setVisible(true);}else{ui->note_1_cell_50->setVisible(false);}
    if(notes_list[442] == true){ui->note_2_cell_50->setVisible(true);}else{ui->note_2_cell_50->setVisible(false);}
    if(notes_list[443] == true){ui->note_3_cell_50->setVisible(true);}else{ui->note_3_cell_50->setVisible(false);}
    if(notes_list[444] == true){ui->note_4_cell_50->setVisible(true);}else{ui->note_4_cell_50->setVisible(false);}
    if(notes_list[445] == true){ui->note_5_cell_50->setVisible(true);}else{ui->note_5_cell_50->setVisible(false);}
    if(notes_list[446] == true){ui->note_6_cell_50->setVisible(true);}else{ui->note_6_cell_50->setVisible(false);}
    if(notes_list[447] == true){ui->note_7_cell_50->setVisible(true);}else{ui->note_7_cell_50->setVisible(false);}
    if(notes_list[448] == true){ui->note_8_cell_50->setVisible(true);}else{ui->note_8_cell_50->setVisible(false);}
    if(notes_list[449] == true){ui->note_9_cell_50->setVisible(true);}else{ui->note_9_cell_50->setVisible(false);}
    if(notes_list[450] == true){ui->note_1_cell_51->setVisible(true);}else{ui->note_1_cell_51->setVisible(false);}
    if(notes_list[451] == true){ui->note_2_cell_51->setVisible(true);}else{ui->note_2_cell_51->setVisible(false);}
    if(notes_list[452] == true){ui->note_3_cell_51->setVisible(true);}else{ui->note_3_cell_51->setVisible(false);}
    if(notes_list[453] == true){ui->note_4_cell_51->setVisible(true);}else{ui->note_4_cell_51->setVisible(false);}
    if(notes_list[454] == true){ui->note_5_cell_51->setVisible(true);}else{ui->note_5_cell_51->setVisible(false);}
    if(notes_list[455] == true){ui->note_6_cell_51->setVisible(true);}else{ui->note_6_cell_51->setVisible(false);}
    if(notes_list[456] == true){ui->note_7_cell_51->setVisible(true);}else{ui->note_7_cell_51->setVisible(false);}
    if(notes_list[457] == true){ui->note_8_cell_51->setVisible(true);}else{ui->note_8_cell_51->setVisible(false);}
    if(notes_list[458] == true){ui->note_9_cell_51->setVisible(true);}else{ui->note_9_cell_51->setVisible(false);}
    if(notes_list[459] == true){ui->note_1_cell_52->setVisible(true);}else{ui->note_1_cell_52->setVisible(false);}
    if(notes_list[460] == true){ui->note_2_cell_52->setVisible(true);}else{ui->note_2_cell_52->setVisible(false);}
    if(notes_list[461] == true){ui->note_3_cell_52->setVisible(true);}else{ui->note_3_cell_52->setVisible(false);}
    if(notes_list[462] == true){ui->note_4_cell_52->setVisible(true);}else{ui->note_4_cell_52->setVisible(false);}
    if(notes_list[463] == true){ui->note_5_cell_52->setVisible(true);}else{ui->note_5_cell_52->setVisible(false);}
    if(notes_list[464] == true){ui->note_6_cell_52->setVisible(true);}else{ui->note_6_cell_52->setVisible(false);}
    if(notes_list[465] == true){ui->note_7_cell_52->setVisible(true);}else{ui->note_7_cell_52->setVisible(false);}
    if(notes_list[466] == true){ui->note_8_cell_52->setVisible(true);}else{ui->note_8_cell_52->setVisible(false);}
    if(notes_list[467] == true){ui->note_9_cell_52->setVisible(true);}else{ui->note_9_cell_52->setVisible(false);}
    if(notes_list[468] == true){ui->note_1_cell_53->setVisible(true);}else{ui->note_1_cell_53->setVisible(false);}
    if(notes_list[469] == true){ui->note_2_cell_53->setVisible(true);}else{ui->note_2_cell_53->setVisible(false);}
    if(notes_list[470] == true){ui->note_3_cell_53->setVisible(true);}else{ui->note_3_cell_53->setVisible(false);}
    if(notes_list[471] == true){ui->note_4_cell_53->setVisible(true);}else{ui->note_4_cell_53->setVisible(false);}
    if(notes_list[472] == true){ui->note_5_cell_53->setVisible(true);}else{ui->note_5_cell_53->setVisible(false);}
    if(notes_list[473] == true){ui->note_6_cell_53->setVisible(true);}else{ui->note_6_cell_53->setVisible(false);}
    if(notes_list[474] == true){ui->note_7_cell_53->setVisible(true);}else{ui->note_7_cell_53->setVisible(false);}
    if(notes_list[475] == true){ui->note_8_cell_53->setVisible(true);}else{ui->note_8_cell_53->setVisible(false);}
    if(notes_list[476] == true){ui->note_9_cell_53->setVisible(true);}else{ui->note_9_cell_53->setVisible(false);}
    if(notes_list[477] == true){ui->note_1_cell_54->setVisible(true);}else{ui->note_1_cell_54->setVisible(false);}
    if(notes_list[478] == true){ui->note_2_cell_54->setVisible(true);}else{ui->note_2_cell_54->setVisible(false);}
    if(notes_list[479] == true){ui->note_3_cell_54->setVisible(true);}else{ui->note_3_cell_54->setVisible(false);}
    if(notes_list[480] == true){ui->note_4_cell_54->setVisible(true);}else{ui->note_4_cell_54->setVisible(false);}
    if(notes_list[481] == true){ui->note_5_cell_54->setVisible(true);}else{ui->note_5_cell_54->setVisible(false);}
    if(notes_list[482] == true){ui->note_6_cell_54->setVisible(true);}else{ui->note_6_cell_54->setVisible(false);}
    if(notes_list[483] == true){ui->note_7_cell_54->setVisible(true);}else{ui->note_7_cell_54->setVisible(false);}
    if(notes_list[484] == true){ui->note_8_cell_54->setVisible(true);}else{ui->note_8_cell_54->setVisible(false);}
    if(notes_list[485] == true){ui->note_9_cell_54->setVisible(true);}else{ui->note_9_cell_54->setVisible(false);}
    if(notes_list[486] == true){ui->note_1_cell_55->setVisible(true);}else{ui->note_1_cell_55->setVisible(false);}
    if(notes_list[487] == true){ui->note_2_cell_55->setVisible(true);}else{ui->note_2_cell_55->setVisible(false);}
    if(notes_list[488] == true){ui->note_3_cell_55->setVisible(true);}else{ui->note_3_cell_55->setVisible(false);}
    if(notes_list[489] == true){ui->note_4_cell_55->setVisible(true);}else{ui->note_4_cell_55->setVisible(false);}
    if(notes_list[490] == true){ui->note_5_cell_55->setVisible(true);}else{ui->note_5_cell_55->setVisible(false);}
    if(notes_list[491] == true){ui->note_6_cell_55->setVisible(true);}else{ui->note_6_cell_55->setVisible(false);}
    if(notes_list[492] == true){ui->note_7_cell_55->setVisible(true);}else{ui->note_7_cell_55->setVisible(false);}
    if(notes_list[493] == true){ui->note_8_cell_55->setVisible(true);}else{ui->note_8_cell_55->setVisible(false);}
    if(notes_list[494] == true){ui->note_9_cell_55->setVisible(true);}else{ui->note_9_cell_55->setVisible(false);}
    if(notes_list[495] == true){ui->note_1_cell_56->setVisible(true);}else{ui->note_1_cell_56->setVisible(false);}
    if(notes_list[496] == true){ui->note_2_cell_56->setVisible(true);}else{ui->note_2_cell_56->setVisible(false);}
    if(notes_list[497] == true){ui->note_3_cell_56->setVisible(true);}else{ui->note_3_cell_56->setVisible(false);}
    if(notes_list[498] == true){ui->note_4_cell_56->setVisible(true);}else{ui->note_4_cell_56->setVisible(false);}
    if(notes_list[499] == true){ui->note_5_cell_56->setVisible(true);}else{ui->note_5_cell_56->setVisible(false);}
    if(notes_list[500] == true){ui->note_6_cell_56->setVisible(true);}else{ui->note_6_cell_56->setVisible(false);}
    if(notes_list[501] == true){ui->note_7_cell_56->setVisible(true);}else{ui->note_7_cell_56->setVisible(false);}
    if(notes_list[502] == true){ui->note_8_cell_56->setVisible(true);}else{ui->note_8_cell_56->setVisible(false);}
    if(notes_list[503] == true){ui->note_9_cell_56->setVisible(true);}else{ui->note_9_cell_56->setVisible(false);}
    if(notes_list[504] == true){ui->note_1_cell_57->setVisible(true);}else{ui->note_1_cell_57->setVisible(false);}
    if(notes_list[505] == true){ui->note_2_cell_57->setVisible(true);}else{ui->note_2_cell_57->setVisible(false);}
    if(notes_list[506] == true){ui->note_3_cell_57->setVisible(true);}else{ui->note_3_cell_57->setVisible(false);}
    if(notes_list[507] == true){ui->note_4_cell_57->setVisible(true);}else{ui->note_4_cell_57->setVisible(false);}
    if(notes_list[508] == true){ui->note_5_cell_57->setVisible(true);}else{ui->note_5_cell_57->setVisible(false);}
    if(notes_list[509] == true){ui->note_6_cell_57->setVisible(true);}else{ui->note_6_cell_57->setVisible(false);}
    if(notes_list[510] == true){ui->note_7_cell_57->setVisible(true);}else{ui->note_7_cell_57->setVisible(false);}
    if(notes_list[511] == true){ui->note_8_cell_57->setVisible(true);}else{ui->note_8_cell_57->setVisible(false);}
    if(notes_list[512] == true){ui->note_9_cell_57->setVisible(true);}else{ui->note_9_cell_57->setVisible(false);}
    if(notes_list[513] == true){ui->note_1_cell_58->setVisible(true);}else{ui->note_1_cell_58->setVisible(false);}
    if(notes_list[514] == true){ui->note_2_cell_58->setVisible(true);}else{ui->note_2_cell_58->setVisible(false);}
    if(notes_list[515] == true){ui->note_3_cell_58->setVisible(true);}else{ui->note_3_cell_58->setVisible(false);}
    if(notes_list[516] == true){ui->note_4_cell_58->setVisible(true);}else{ui->note_4_cell_58->setVisible(false);}
    if(notes_list[517] == true){ui->note_5_cell_58->setVisible(true);}else{ui->note_5_cell_58->setVisible(false);}
    if(notes_list[518] == true){ui->note_6_cell_58->setVisible(true);}else{ui->note_6_cell_58->setVisible(false);}
    if(notes_list[519] == true){ui->note_7_cell_58->setVisible(true);}else{ui->note_7_cell_58->setVisible(false);}
    if(notes_list[520] == true){ui->note_8_cell_58->setVisible(true);}else{ui->note_8_cell_58->setVisible(false);}
    if(notes_list[521] == true){ui->note_9_cell_58->setVisible(true);}else{ui->note_9_cell_58->setVisible(false);}
    if(notes_list[522] == true){ui->note_1_cell_59->setVisible(true);}else{ui->note_1_cell_59->setVisible(false);}
    if(notes_list[523] == true){ui->note_2_cell_59->setVisible(true);}else{ui->note_2_cell_59->setVisible(false);}
    if(notes_list[524] == true){ui->note_3_cell_59->setVisible(true);}else{ui->note_3_cell_59->setVisible(false);}
    if(notes_list[525] == true){ui->note_4_cell_59->setVisible(true);}else{ui->note_4_cell_59->setVisible(false);}
    if(notes_list[526] == true){ui->note_5_cell_59->setVisible(true);}else{ui->note_5_cell_59->setVisible(false);}
    if(notes_list[527] == true){ui->note_6_cell_59->setVisible(true);}else{ui->note_6_cell_59->setVisible(false);}
    if(notes_list[528] == true){ui->note_7_cell_59->setVisible(true);}else{ui->note_7_cell_59->setVisible(false);}
    if(notes_list[529] == true){ui->note_8_cell_59->setVisible(true);}else{ui->note_8_cell_59->setVisible(false);}
    if(notes_list[530] == true){ui->note_9_cell_59->setVisible(true);}else{ui->note_9_cell_59->setVisible(false);}
    if(notes_list[531] == true){ui->note_1_cell_60->setVisible(true);}else{ui->note_1_cell_60->setVisible(false);}
    if(notes_list[532] == true){ui->note_2_cell_60->setVisible(true);}else{ui->note_2_cell_60->setVisible(false);}
    if(notes_list[533] == true){ui->note_3_cell_60->setVisible(true);}else{ui->note_3_cell_60->setVisible(false);}
    if(notes_list[534] == true){ui->note_4_cell_60->setVisible(true);}else{ui->note_4_cell_60->setVisible(false);}
    if(notes_list[535] == true){ui->note_5_cell_60->setVisible(true);}else{ui->note_5_cell_60->setVisible(false);}
    if(notes_list[536] == true){ui->note_6_cell_60->setVisible(true);}else{ui->note_6_cell_60->setVisible(false);}
    if(notes_list[537] == true){ui->note_7_cell_60->setVisible(true);}else{ui->note_7_cell_60->setVisible(false);}
    if(notes_list[538] == true){ui->note_8_cell_60->setVisible(true);}else{ui->note_8_cell_60->setVisible(false);}
    if(notes_list[539] == true){ui->note_9_cell_60->setVisible(true);}else{ui->note_9_cell_60->setVisible(false);}
    if(notes_list[540] == true){ui->note_1_cell_61->setVisible(true);}else{ui->note_1_cell_61->setVisible(false);}
    if(notes_list[541] == true){ui->note_2_cell_61->setVisible(true);}else{ui->note_2_cell_61->setVisible(false);}
    if(notes_list[542] == true){ui->note_3_cell_61->setVisible(true);}else{ui->note_3_cell_61->setVisible(false);}
    if(notes_list[543] == true){ui->note_4_cell_61->setVisible(true);}else{ui->note_4_cell_61->setVisible(false);}
    if(notes_list[544] == true){ui->note_5_cell_61->setVisible(true);}else{ui->note_5_cell_61->setVisible(false);}
    if(notes_list[545] == true){ui->note_6_cell_61->setVisible(true);}else{ui->note_6_cell_61->setVisible(false);}
    if(notes_list[546] == true){ui->note_7_cell_61->setVisible(true);}else{ui->note_7_cell_61->setVisible(false);}
    if(notes_list[547] == true){ui->note_8_cell_61->setVisible(true);}else{ui->note_8_cell_61->setVisible(false);}
    if(notes_list[548] == true){ui->note_9_cell_61->setVisible(true);}else{ui->note_9_cell_61->setVisible(false);}
    if(notes_list[549] == true){ui->note_1_cell_62->setVisible(true);}else{ui->note_1_cell_62->setVisible(false);}
    if(notes_list[550] == true){ui->note_2_cell_62->setVisible(true);}else{ui->note_2_cell_62->setVisible(false);}
    if(notes_list[551] == true){ui->note_3_cell_62->setVisible(true);}else{ui->note_3_cell_62->setVisible(false);}
    if(notes_list[552] == true){ui->note_4_cell_62->setVisible(true);}else{ui->note_4_cell_62->setVisible(false);}
    if(notes_list[553] == true){ui->note_5_cell_62->setVisible(true);}else{ui->note_5_cell_62->setVisible(false);}
    if(notes_list[554] == true){ui->note_6_cell_62->setVisible(true);}else{ui->note_6_cell_62->setVisible(false);}
    if(notes_list[555] == true){ui->note_7_cell_62->setVisible(true);}else{ui->note_7_cell_62->setVisible(false);}
    if(notes_list[556] == true){ui->note_8_cell_62->setVisible(true);}else{ui->note_8_cell_62->setVisible(false);}
    if(notes_list[557] == true){ui->note_9_cell_62->setVisible(true);}else{ui->note_9_cell_62->setVisible(false);}
    if(notes_list[558] == true){ui->note_1_cell_63->setVisible(true);}else{ui->note_1_cell_63->setVisible(false);}
    if(notes_list[559] == true){ui->note_2_cell_63->setVisible(true);}else{ui->note_2_cell_63->setVisible(false);}
    if(notes_list[560] == true){ui->note_3_cell_63->setVisible(true);}else{ui->note_3_cell_63->setVisible(false);}
    if(notes_list[561] == true){ui->note_4_cell_63->setVisible(true);}else{ui->note_4_cell_63->setVisible(false);}
    if(notes_list[562] == true){ui->note_5_cell_63->setVisible(true);}else{ui->note_5_cell_63->setVisible(false);}
    if(notes_list[563] == true){ui->note_6_cell_63->setVisible(true);}else{ui->note_6_cell_63->setVisible(false);}
    if(notes_list[564] == true){ui->note_7_cell_63->setVisible(true);}else{ui->note_7_cell_63->setVisible(false);}
    if(notes_list[565] == true){ui->note_8_cell_63->setVisible(true);}else{ui->note_8_cell_63->setVisible(false);}
    if(notes_list[566] == true){ui->note_9_cell_63->setVisible(true);}else{ui->note_9_cell_63->setVisible(false);}
    if(notes_list[567] == true){ui->note_1_cell_64->setVisible(true);}else{ui->note_1_cell_64->setVisible(false);}
    if(notes_list[568] == true){ui->note_2_cell_64->setVisible(true);}else{ui->note_2_cell_64->setVisible(false);}
    if(notes_list[569] == true){ui->note_3_cell_64->setVisible(true);}else{ui->note_3_cell_64->setVisible(false);}
    if(notes_list[570] == true){ui->note_4_cell_64->setVisible(true);}else{ui->note_4_cell_64->setVisible(false);}
    if(notes_list[571] == true){ui->note_5_cell_64->setVisible(true);}else{ui->note_5_cell_64->setVisible(false);}
    if(notes_list[572] == true){ui->note_6_cell_64->setVisible(true);}else{ui->note_6_cell_64->setVisible(false);}
    if(notes_list[573] == true){ui->note_7_cell_64->setVisible(true);}else{ui->note_7_cell_64->setVisible(false);}
    if(notes_list[574] == true){ui->note_8_cell_64->setVisible(true);}else{ui->note_8_cell_64->setVisible(false);}
    if(notes_list[575] == true){ui->note_9_cell_64->setVisible(true);}else{ui->note_9_cell_64->setVisible(false);}
    if(notes_list[576] == true){ui->note_1_cell_65->setVisible(true);}else{ui->note_1_cell_65->setVisible(false);}
    if(notes_list[577] == true){ui->note_2_cell_65->setVisible(true);}else{ui->note_2_cell_65->setVisible(false);}
    if(notes_list[578] == true){ui->note_3_cell_65->setVisible(true);}else{ui->note_3_cell_65->setVisible(false);}
    if(notes_list[579] == true){ui->note_4_cell_65->setVisible(true);}else{ui->note_4_cell_65->setVisible(false);}
    if(notes_list[580] == true){ui->note_5_cell_65->setVisible(true);}else{ui->note_5_cell_65->setVisible(false);}
    if(notes_list[581] == true){ui->note_6_cell_65->setVisible(true);}else{ui->note_6_cell_65->setVisible(false);}
    if(notes_list[582] == true){ui->note_7_cell_65->setVisible(true);}else{ui->note_7_cell_65->setVisible(false);}
    if(notes_list[583] == true){ui->note_8_cell_65->setVisible(true);}else{ui->note_8_cell_65->setVisible(false);}
    if(notes_list[584] == true){ui->note_9_cell_65->setVisible(true);}else{ui->note_9_cell_65->setVisible(false);}
    if(notes_list[585] == true){ui->note_1_cell_66->setVisible(true);}else{ui->note_1_cell_66->setVisible(false);}
    if(notes_list[586] == true){ui->note_2_cell_66->setVisible(true);}else{ui->note_2_cell_66->setVisible(false);}
    if(notes_list[587] == true){ui->note_3_cell_66->setVisible(true);}else{ui->note_3_cell_66->setVisible(false);}
    if(notes_list[588] == true){ui->note_4_cell_66->setVisible(true);}else{ui->note_4_cell_66->setVisible(false);}
    if(notes_list[589] == true){ui->note_5_cell_66->setVisible(true);}else{ui->note_5_cell_66->setVisible(false);}
    if(notes_list[590] == true){ui->note_6_cell_66->setVisible(true);}else{ui->note_6_cell_66->setVisible(false);}
    if(notes_list[591] == true){ui->note_7_cell_66->setVisible(true);}else{ui->note_7_cell_66->setVisible(false);}
    if(notes_list[592] == true){ui->note_8_cell_66->setVisible(true);}else{ui->note_8_cell_66->setVisible(false);}
    if(notes_list[593] == true){ui->note_9_cell_66->setVisible(true);}else{ui->note_9_cell_66->setVisible(false);}
    if(notes_list[594] == true){ui->note_1_cell_67->setVisible(true);}else{ui->note_1_cell_67->setVisible(false);}
    if(notes_list[595] == true){ui->note_2_cell_67->setVisible(true);}else{ui->note_2_cell_67->setVisible(false);}
    if(notes_list[596] == true){ui->note_3_cell_67->setVisible(true);}else{ui->note_3_cell_67->setVisible(false);}
    if(notes_list[597] == true){ui->note_4_cell_67->setVisible(true);}else{ui->note_4_cell_67->setVisible(false);}
    if(notes_list[598] == true){ui->note_5_cell_67->setVisible(true);}else{ui->note_5_cell_67->setVisible(false);}
    if(notes_list[599] == true){ui->note_6_cell_67->setVisible(true);}else{ui->note_6_cell_67->setVisible(false);}
    if(notes_list[600] == true){ui->note_7_cell_67->setVisible(true);}else{ui->note_7_cell_67->setVisible(false);}
    if(notes_list[601] == true){ui->note_8_cell_67->setVisible(true);}else{ui->note_8_cell_67->setVisible(false);}
    if(notes_list[602] == true){ui->note_9_cell_67->setVisible(true);}else{ui->note_9_cell_67->setVisible(false);}
    if(notes_list[603] == true){ui->note_1_cell_68->setVisible(true);}else{ui->note_1_cell_68->setVisible(false);}
    if(notes_list[604] == true){ui->note_2_cell_68->setVisible(true);}else{ui->note_2_cell_68->setVisible(false);}
    if(notes_list[605] == true){ui->note_3_cell_68->setVisible(true);}else{ui->note_3_cell_68->setVisible(false);}
    if(notes_list[606] == true){ui->note_4_cell_68->setVisible(true);}else{ui->note_4_cell_68->setVisible(false);}
    if(notes_list[607] == true){ui->note_5_cell_68->setVisible(true);}else{ui->note_5_cell_68->setVisible(false);}
    if(notes_list[608] == true){ui->note_6_cell_68->setVisible(true);}else{ui->note_6_cell_68->setVisible(false);}
    if(notes_list[609] == true){ui->note_7_cell_68->setVisible(true);}else{ui->note_7_cell_68->setVisible(false);}
    if(notes_list[610] == true){ui->note_8_cell_68->setVisible(true);}else{ui->note_8_cell_68->setVisible(false);}
    if(notes_list[611] == true){ui->note_9_cell_68->setVisible(true);}else{ui->note_9_cell_68->setVisible(false);}
    if(notes_list[612] == true){ui->note_1_cell_69->setVisible(true);}else{ui->note_1_cell_69->setVisible(false);}
    if(notes_list[613] == true){ui->note_2_cell_69->setVisible(true);}else{ui->note_2_cell_69->setVisible(false);}
    if(notes_list[614] == true){ui->note_3_cell_69->setVisible(true);}else{ui->note_3_cell_69->setVisible(false);}
    if(notes_list[615] == true){ui->note_4_cell_69->setVisible(true);}else{ui->note_4_cell_69->setVisible(false);}
    if(notes_list[616] == true){ui->note_5_cell_69->setVisible(true);}else{ui->note_5_cell_69->setVisible(false);}
    if(notes_list[617] == true){ui->note_6_cell_69->setVisible(true);}else{ui->note_6_cell_69->setVisible(false);}
    if(notes_list[618] == true){ui->note_7_cell_69->setVisible(true);}else{ui->note_7_cell_69->setVisible(false);}
    if(notes_list[619] == true){ui->note_8_cell_69->setVisible(true);}else{ui->note_8_cell_69->setVisible(false);}
    if(notes_list[620] == true){ui->note_9_cell_69->setVisible(true);}else{ui->note_9_cell_69->setVisible(false);}
    if(notes_list[621] == true){ui->note_1_cell_70->setVisible(true);}else{ui->note_1_cell_70->setVisible(false);}
    if(notes_list[622] == true){ui->note_2_cell_70->setVisible(true);}else{ui->note_2_cell_70->setVisible(false);}
    if(notes_list[623] == true){ui->note_3_cell_70->setVisible(true);}else{ui->note_3_cell_70->setVisible(false);}
    if(notes_list[624] == true){ui->note_4_cell_70->setVisible(true);}else{ui->note_4_cell_70->setVisible(false);}
    if(notes_list[625] == true){ui->note_5_cell_70->setVisible(true);}else{ui->note_5_cell_70->setVisible(false);}
    if(notes_list[626] == true){ui->note_6_cell_70->setVisible(true);}else{ui->note_6_cell_70->setVisible(false);}
    if(notes_list[627] == true){ui->note_7_cell_70->setVisible(true);}else{ui->note_7_cell_70->setVisible(false);}
    if(notes_list[628] == true){ui->note_8_cell_70->setVisible(true);}else{ui->note_8_cell_70->setVisible(false);}
    if(notes_list[629] == true){ui->note_9_cell_70->setVisible(true);}else{ui->note_9_cell_70->setVisible(false);}
    if(notes_list[630] == true){ui->note_1_cell_71->setVisible(true);}else{ui->note_1_cell_71->setVisible(false);}
    if(notes_list[631] == true){ui->note_2_cell_71->setVisible(true);}else{ui->note_2_cell_71->setVisible(false);}
    if(notes_list[632] == true){ui->note_3_cell_71->setVisible(true);}else{ui->note_3_cell_71->setVisible(false);}
    if(notes_list[633] == true){ui->note_4_cell_71->setVisible(true);}else{ui->note_4_cell_71->setVisible(false);}
    if(notes_list[634] == true){ui->note_5_cell_71->setVisible(true);}else{ui->note_5_cell_71->setVisible(false);}
    if(notes_list[635] == true){ui->note_6_cell_71->setVisible(true);}else{ui->note_6_cell_71->setVisible(false);}
    if(notes_list[636] == true){ui->note_7_cell_71->setVisible(true);}else{ui->note_7_cell_71->setVisible(false);}
    if(notes_list[637] == true){ui->note_8_cell_71->setVisible(true);}else{ui->note_8_cell_71->setVisible(false);}
    if(notes_list[638] == true){ui->note_9_cell_71->setVisible(true);}else{ui->note_9_cell_71->setVisible(false);}
    if(notes_list[639] == true){ui->note_1_cell_72->setVisible(true);}else{ui->note_1_cell_72->setVisible(false);}
    if(notes_list[640] == true){ui->note_2_cell_72->setVisible(true);}else{ui->note_2_cell_72->setVisible(false);}
    if(notes_list[641] == true){ui->note_3_cell_72->setVisible(true);}else{ui->note_3_cell_72->setVisible(false);}
    if(notes_list[642] == true){ui->note_4_cell_72->setVisible(true);}else{ui->note_4_cell_72->setVisible(false);}
    if(notes_list[643] == true){ui->note_5_cell_72->setVisible(true);}else{ui->note_5_cell_72->setVisible(false);}
    if(notes_list[644] == true){ui->note_6_cell_72->setVisible(true);}else{ui->note_6_cell_72->setVisible(false);}
    if(notes_list[645] == true){ui->note_7_cell_72->setVisible(true);}else{ui->note_7_cell_72->setVisible(false);}
    if(notes_list[646] == true){ui->note_8_cell_72->setVisible(true);}else{ui->note_8_cell_72->setVisible(false);}
    if(notes_list[647] == true){ui->note_9_cell_72->setVisible(true);}else{ui->note_9_cell_72->setVisible(false);}
    if(notes_list[648] == true){ui->note_1_cell_73->setVisible(true);}else{ui->note_1_cell_73->setVisible(false);}
    if(notes_list[649] == true){ui->note_2_cell_73->setVisible(true);}else{ui->note_2_cell_73->setVisible(false);}
    if(notes_list[650] == true){ui->note_3_cell_73->setVisible(true);}else{ui->note_3_cell_73->setVisible(false);}
    if(notes_list[651] == true){ui->note_4_cell_73->setVisible(true);}else{ui->note_4_cell_73->setVisible(false);}
    if(notes_list[652] == true){ui->note_5_cell_73->setVisible(true);}else{ui->note_5_cell_73->setVisible(false);}
    if(notes_list[653] == true){ui->note_6_cell_73->setVisible(true);}else{ui->note_6_cell_73->setVisible(false);}
    if(notes_list[654] == true){ui->note_7_cell_73->setVisible(true);}else{ui->note_7_cell_73->setVisible(false);}
    if(notes_list[655] == true){ui->note_8_cell_73->setVisible(true);}else{ui->note_8_cell_73->setVisible(false);}
    if(notes_list[656] == true){ui->note_9_cell_73->setVisible(true);}else{ui->note_9_cell_73->setVisible(false);}
    if(notes_list[657] == true){ui->note_1_cell_74->setVisible(true);}else{ui->note_1_cell_74->setVisible(false);}
    if(notes_list[658] == true){ui->note_2_cell_74->setVisible(true);}else{ui->note_2_cell_74->setVisible(false);}
    if(notes_list[659] == true){ui->note_3_cell_74->setVisible(true);}else{ui->note_3_cell_74->setVisible(false);}
    if(notes_list[660] == true){ui->note_4_cell_74->setVisible(true);}else{ui->note_4_cell_74->setVisible(false);}
    if(notes_list[661] == true){ui->note_5_cell_74->setVisible(true);}else{ui->note_5_cell_74->setVisible(false);}
    if(notes_list[662] == true){ui->note_6_cell_74->setVisible(true);}else{ui->note_6_cell_74->setVisible(false);}
    if(notes_list[663] == true){ui->note_7_cell_74->setVisible(true);}else{ui->note_7_cell_74->setVisible(false);}
    if(notes_list[664] == true){ui->note_8_cell_74->setVisible(true);}else{ui->note_8_cell_74->setVisible(false);}
    if(notes_list[665] == true){ui->note_9_cell_74->setVisible(true);}else{ui->note_9_cell_74->setVisible(false);}
    if(notes_list[666] == true){ui->note_1_cell_75->setVisible(true);}else{ui->note_1_cell_75->setVisible(false);}
    if(notes_list[667] == true){ui->note_2_cell_75->setVisible(true);}else{ui->note_2_cell_75->setVisible(false);}
    if(notes_list[668] == true){ui->note_3_cell_75->setVisible(true);}else{ui->note_3_cell_75->setVisible(false);}
    if(notes_list[669] == true){ui->note_4_cell_75->setVisible(true);}else{ui->note_4_cell_75->setVisible(false);}
    if(notes_list[670] == true){ui->note_5_cell_75->setVisible(true);}else{ui->note_5_cell_75->setVisible(false);}
    if(notes_list[671] == true){ui->note_6_cell_75->setVisible(true);}else{ui->note_6_cell_75->setVisible(false);}
    if(notes_list[672] == true){ui->note_7_cell_75->setVisible(true);}else{ui->note_7_cell_75->setVisible(false);}
    if(notes_list[673] == true){ui->note_8_cell_75->setVisible(true);}else{ui->note_8_cell_75->setVisible(false);}
    if(notes_list[674] == true){ui->note_9_cell_75->setVisible(true);}else{ui->note_9_cell_75->setVisible(false);}
    if(notes_list[675] == true){ui->note_1_cell_76->setVisible(true);}else{ui->note_1_cell_76->setVisible(false);}
    if(notes_list[676] == true){ui->note_2_cell_76->setVisible(true);}else{ui->note_2_cell_76->setVisible(false);}
    if(notes_list[677] == true){ui->note_3_cell_76->setVisible(true);}else{ui->note_3_cell_76->setVisible(false);}
    if(notes_list[678] == true){ui->note_4_cell_76->setVisible(true);}else{ui->note_4_cell_76->setVisible(false);}
    if(notes_list[679] == true){ui->note_5_cell_76->setVisible(true);}else{ui->note_5_cell_76->setVisible(false);}
    if(notes_list[680] == true){ui->note_6_cell_76->setVisible(true);}else{ui->note_6_cell_76->setVisible(false);}
    if(notes_list[681] == true){ui->note_7_cell_76->setVisible(true);}else{ui->note_7_cell_76->setVisible(false);}
    if(notes_list[682] == true){ui->note_8_cell_76->setVisible(true);}else{ui->note_8_cell_76->setVisible(false);}
    if(notes_list[683] == true){ui->note_9_cell_76->setVisible(true);}else{ui->note_9_cell_76->setVisible(false);}
    if(notes_list[684] == true){ui->note_1_cell_77->setVisible(true);}else{ui->note_1_cell_77->setVisible(false);}
    if(notes_list[685] == true){ui->note_2_cell_77->setVisible(true);}else{ui->note_2_cell_77->setVisible(false);}
    if(notes_list[686] == true){ui->note_3_cell_77->setVisible(true);}else{ui->note_3_cell_77->setVisible(false);}
    if(notes_list[687] == true){ui->note_4_cell_77->setVisible(true);}else{ui->note_4_cell_77->setVisible(false);}
    if(notes_list[688] == true){ui->note_5_cell_77->setVisible(true);}else{ui->note_5_cell_77->setVisible(false);}
    if(notes_list[689] == true){ui->note_6_cell_77->setVisible(true);}else{ui->note_6_cell_77->setVisible(false);}
    if(notes_list[690] == true){ui->note_7_cell_77->setVisible(true);}else{ui->note_7_cell_77->setVisible(false);}
    if(notes_list[691] == true){ui->note_8_cell_77->setVisible(true);}else{ui->note_8_cell_77->setVisible(false);}
    if(notes_list[692] == true){ui->note_9_cell_77->setVisible(true);}else{ui->note_9_cell_77->setVisible(false);}
    if(notes_list[693] == true){ui->note_1_cell_78->setVisible(true);}else{ui->note_1_cell_78->setVisible(false);}
    if(notes_list[694] == true){ui->note_2_cell_78->setVisible(true);}else{ui->note_2_cell_78->setVisible(false);}
    if(notes_list[695] == true){ui->note_3_cell_78->setVisible(true);}else{ui->note_3_cell_78->setVisible(false);}
    if(notes_list[696] == true){ui->note_4_cell_78->setVisible(true);}else{ui->note_4_cell_78->setVisible(false);}
    if(notes_list[697] == true){ui->note_5_cell_78->setVisible(true);}else{ui->note_5_cell_78->setVisible(false);}
    if(notes_list[698] == true){ui->note_6_cell_78->setVisible(true);}else{ui->note_6_cell_78->setVisible(false);}
    if(notes_list[699] == true){ui->note_7_cell_78->setVisible(true);}else{ui->note_7_cell_78->setVisible(false);}
    if(notes_list[700] == true){ui->note_8_cell_78->setVisible(true);}else{ui->note_8_cell_78->setVisible(false);}
    if(notes_list[701] == true){ui->note_9_cell_78->setVisible(true);}else{ui->note_9_cell_78->setVisible(false);}
    if(notes_list[702] == true){ui->note_1_cell_79->setVisible(true);}else{ui->note_1_cell_79->setVisible(false);}
    if(notes_list[703] == true){ui->note_2_cell_79->setVisible(true);}else{ui->note_2_cell_79->setVisible(false);}
    if(notes_list[704] == true){ui->note_3_cell_79->setVisible(true);}else{ui->note_3_cell_79->setVisible(false);}
    if(notes_list[705] == true){ui->note_4_cell_79->setVisible(true);}else{ui->note_4_cell_79->setVisible(false);}
    if(notes_list[706] == true){ui->note_5_cell_79->setVisible(true);}else{ui->note_5_cell_79->setVisible(false);}
    if(notes_list[707] == true){ui->note_6_cell_79->setVisible(true);}else{ui->note_6_cell_79->setVisible(false);}
    if(notes_list[708] == true){ui->note_7_cell_79->setVisible(true);}else{ui->note_7_cell_79->setVisible(false);}
    if(notes_list[709] == true){ui->note_8_cell_79->setVisible(true);}else{ui->note_8_cell_79->setVisible(false);}
    if(notes_list[710] == true){ui->note_9_cell_79->setVisible(true);}else{ui->note_9_cell_79->setVisible(false);}
    if(notes_list[711] == true){ui->note_1_cell_80->setVisible(true);}else{ui->note_1_cell_80->setVisible(false);}
    if(notes_list[712] == true){ui->note_2_cell_80->setVisible(true);}else{ui->note_2_cell_80->setVisible(false);}
    if(notes_list[713] == true){ui->note_3_cell_80->setVisible(true);}else{ui->note_3_cell_80->setVisible(false);}
    if(notes_list[714] == true){ui->note_4_cell_80->setVisible(true);}else{ui->note_4_cell_80->setVisible(false);}
    if(notes_list[715] == true){ui->note_5_cell_80->setVisible(true);}else{ui->note_5_cell_80->setVisible(false);}
    if(notes_list[716] == true){ui->note_6_cell_80->setVisible(true);}else{ui->note_6_cell_80->setVisible(false);}
    if(notes_list[717] == true){ui->note_7_cell_80->setVisible(true);}else{ui->note_7_cell_80->setVisible(false);}
    if(notes_list[718] == true){ui->note_8_cell_80->setVisible(true);}else{ui->note_8_cell_80->setVisible(false);}
    if(notes_list[719] == true){ui->note_9_cell_80->setVisible(true);}else{ui->note_9_cell_80->setVisible(false);}
    if(notes_list[720] == true){ui->note_1_cell_81->setVisible(true);}else{ui->note_1_cell_81->setVisible(false);}
    if(notes_list[721] == true){ui->note_2_cell_81->setVisible(true);}else{ui->note_2_cell_81->setVisible(false);}
    if(notes_list[722] == true){ui->note_3_cell_81->setVisible(true);}else{ui->note_3_cell_81->setVisible(false);}
    if(notes_list[723] == true){ui->note_4_cell_81->setVisible(true);}else{ui->note_4_cell_81->setVisible(false);}
    if(notes_list[724] == true){ui->note_5_cell_81->setVisible(true);}else{ui->note_5_cell_81->setVisible(false);}
    if(notes_list[725] == true){ui->note_6_cell_81->setVisible(true);}else{ui->note_6_cell_81->setVisible(false);}
    if(notes_list[726] == true){ui->note_7_cell_81->setVisible(true);}else{ui->note_7_cell_81->setVisible(false);}
    if(notes_list[727] == true){ui->note_8_cell_81->setVisible(true);}else{ui->note_8_cell_81->setVisible(false);}
    if(notes_list[728] == true){ui->note_9_cell_81->setVisible(true);}else{ui->note_9_cell_81->setVisible(false);}

    //Clearing space
    notes_list.clear();
    notes_list.shrink_to_fit();

}


void MainWindow::pass_in_sudoku_array(vector<cell> sudoku_array)
{
    //Passes in value of main sudoku array so that the UI can use it at a later time
    passed_in_sudoku_array = sudoku_array;

}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_updateButton_clicked()
{
    MainWindow::update(passed_in_sudoku_array);
}
