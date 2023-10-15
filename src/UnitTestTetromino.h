#include <iostream>
#include "Tetromino/Tetromino.h"


class UnitTestTetromino{

    public:
    void run_test_tetromino(){
        test_rotation_state();
        test_get_current_position();

    };

private:
    //This function is to test the rotation state of a tetromino block
    void test_rotation_state(){

        Tetromino test1;

        //Check if the initialized roatation state is 0
        if (test1.current_rotation == 0){
            std::cout << "Test for checking rotation state passed" << std::endl;
        };


    };

    //This function tests the get_current_position() function of tetromino
    void test_get_current_position(){

        Tetromino test2;

        //Check if the initialized tetromino has a position inside the grid
        std::vector<Position> check_position= test2.get_current_position();

        if (check_position[0].row != 0 && check_position[0].column != 0){
            std:: cout << "Test for checking the position intitialization passed" << std::endl;
        } 
    };


};

