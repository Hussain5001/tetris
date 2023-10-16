#include <iostream>
#include "Tetromino/Tetromino.h"
#include "Tetromino/Block_O.h"
#include "Tetromino/Block_I.h"

//This class tests the edge cases and imperative functions of the Tetromino class
class UnitTestTetromino{

    public:
    void run_test_tetromino(){
        test_rotation_state();
        test_get_current_position();
        test_set_initial_position();

    };

    private:
    
    //This function is to test the rotation state of a tetromino block
    void test_rotation_state(){

        Tetromino test1;

        //Check if the initialized roatation state is 0
        if (test1.current_rotation == 0){
            std::cout << "Test for checking rotation state passed!" << std::endl;
        };


    };

    //This function tests the get_current_position() function 
    void test_get_current_position(){

        Tetromino test2;

        //Check for the initialization of the position of tetromino inside the grid
        std::vector<Position> check_position= test2.get_current_position();

        if (!check_position.empty() &&check_position[0].row != 0 && check_position[0].column != 0){
            std:: cout << "Test for checking the position intitialization not passed!" << std::endl;
        }

        else{
            std::cout << "Test for checking the position initialization passed!" << std::endl;
        } 

    }

    //This function tests the set_initial_position() function
    void test_set_initial_position(){

        //The starting point of all the blocks is (0,3) only the block O and I have different starting points

        //This functions checks if the O block correctly alters the set_initial_position() function

        BlockO test_block_o;
        test_block_o.set_initial_position();

        if (test_block_o.get_col_offset()!=3){
            std::cout << "Test for checking the starting position of O block passed!" << std::endl;

        }

        BlockI test_block_i;
        test_block_i.set_initial_position();

        if (test_block_i.get_row_offset()!=0 && test_block_i.get_col_offset()!=3 ){
            std::cout << "Test for checking the starting position of I block passed!" << std::endl;

        }
   
    }

};






