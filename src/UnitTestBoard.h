#include <iostream>
#include <string>
#include "board.h"

//This class tests the edge cases and imperative functions of the Board class

class UnitTestBoard{

    public:
    void run_test_board(){
        test_cell_within_bounds();
        test_row_clearance();
        test_clear_grid();
        test_is_row_full();

    }

    private:

    //This function is to test if a given cell is within the bounds
    void test_cell_within_bounds(){

        Board test_board;

        //Checking for a standard form
        if (test_board.is_cell_within_bounds(5,10)){
            std::cout << "Test for bound checking_1 passed!" << std::endl;
        }

        //Checking for cell outside the bounds
        if ((test_board.is_cell_within_bounds(30,50))){
            std::cout << "Test for bound checking_2 passed!" << std::endl;
        }

    };

    //This function is to test the row_clearance function
    void test_row_clearance(){
        
        //By default the board gets initialized with 20 rows and 10 columns
        Board test_board_2;

        int full_rows=test_board_2.row_clearance();

        if (full_rows==0){
            if (test_board_2.get_num_rows()==20){
                std::cout << "Test for row_clearance passed!" << std::endl;
            }
        }

    }

    //This function is to test the clear_grid function
    void test_clear_grid(){

        Board test_board_3;

        //Filling up the last row of board with random values
        //I indicates the column position
        for (int i=0;i<10;i++){
            test_board_3.grid[19][i]=1;

        }

        test_board_3.clear_grid();
        int zero_count=0;


        //Iterating through each cell of the grid to check if every cell is 0

        for (int i=0; i<20; i++){
            for (int j=0; j<10; j++){

                if (test_board_3.get_grid_value(i,j)==0){
                    zero_count++;
                }
            }
        }

        if (zero_count==200){
            std::cout << "Test for clear_grid() passed!" << std::endl;
        }
        
    }

    //This function is to test the is_row_full function

    void test_is_row_full(){

        Board test_board_4;

        //Filling up the last row of board with random values
        //I indicates the column position
        for (int i=0;i<10;i++){
            test_board_4.grid[19][i]=1;

        }

        if (test_board_4.is_row_full(19)){
            std::cout << "Test for is_row_full() passed!" << std::endl;
        }
    }

};




 