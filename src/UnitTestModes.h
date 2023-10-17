#include <iostream>
#include <string>
#include "game.h"
#include "first_forty_mode.h"
#include "time_attack_mode.h"
#include "time_dependent_mode.h"
#include "zen_mode.h"

//This class tests the edge cases and other imperative functions of all the modes of the Game

class UnitTestModes{

    public:
    void run_test_modes(){

        run_test_move_zen();
        run_test_is_collision();
        run_test_zen_block_attach();
        run_test_time_attack_get_score();



    }

    private:

    //This function checks the block movement in zen_mode
    void run_test_move_zen(){

        //Checking the move_left() function

        ZenMode test_mode_1=ZenMode();

        //Storing the initial position
        int test_row=test_mode_1.current_block.get_row_offset();
        int test_col=test_mode_1.current_block.get_col_offset();

        //Running the move_left() function to check the movement
        test_mode_1.move_left();

        //Checking if the column position has been altered by one cell
        if ((test_row == test_mode_1.current_block.get_row_offset()) & (test_col-1)==test_mode_1.current_block.get_col_offset() ){
            std::cout << "Test for move_left function passed!" << std::endl;
        }

        //Checking the move_right() function

        //Storing the initial position
        int test_row_2=test_mode_1.current_block.get_row_offset();
        int test_col_2=test_mode_1.current_block.get_col_offset();

        //Running the move_right() function to check the movement
        test_mode_1.move_right();

         //Checking if the column position has been altered by one cell
        if ((test_row_2 == test_mode_1.current_block.get_row_offset()) & (test_col_2+1)==test_mode_1.current_block.get_col_offset() ){
            std::cout << "Test for move_right function passed!" << std::endl;
        }

        //Checking the move_down() function

        //Storing the initial position 
        int test_row_3=test_mode_1.current_block.get_row_offset();
        int test_col_3=test_mode_1.current_block.get_col_offset();

        //Running the move_down() function to check the movement
        test_mode_1.move_down();

        //Checking if the row position has been altered by one cell
        if ((test_col_3 == test_mode_1.current_block.get_col_offset()) & (test_row_3+1)==test_mode_1.current_block.get_row_offset() ){
            std::cout << "Test for move_down function passed!" << std::endl;
        }

    }

    //This function tests the is_collision() function of the zen mode
    void run_test_is_collision(){

        ZenMode test_mode_2;

        //Inserting random values in the grid to ensure collision
        test_mode_2.game_grid.grid[1][2]=4;
        test_mode_2.game_grid.grid[1][3]=4;

        //Condition to check for collision in the grid
        if(test_mode_2.is_collision()){
            std::cout << "Test_1 for is_collision function passed!" << std::endl;
        }

        //Inserting random values in the grid to ensure No collision
        test_mode_2.game_grid.grid[1][2]=0;
        test_mode_2.game_grid.grid[1][3]=0;

        //Condition to check for no collision in the grid
        if(!(test_mode_2.is_collision())){
            std::cout << "Test_2 for is_collision function passed!" << std::endl;
        }
    }
    
    //This functions tests the block attach function of the zen mode
    void run_test_zen_block_attach(){

        //Test_Case 1
        ZenMode test_mode_3;

        //Testing the lines cleared(row_clearance()) and the get_score() function of the Zen Mode class
        //Case when 2 lines are full
        //Manually filling two lines of the game_grid

        for (int i=0;i<10;i++){
            test_mode_3.game_grid.grid[19][i]=1;
        }
        for (int j=0;j<10;j++){
            test_mode_3.game_grid.grid[18][j]=2;
        }


        //Running the block_attach function
        test_mode_3.block_attach();
        test_mode_3.lines_cleared=2;

        //Condition to check for the intended score

         if ((test_mode_3.get_score())==600){
            std::cout << "Test_1 for score_block_attach() function passed!" << std::endl;
        }
         //Condition to check if the total lines cleared are 2 then the tests passes!
        if (test_mode_3.total_lines_cleared==2){
            std::cout << "Test_1 for lines_block_attach() function passed!" << std::endl;
        }

        //Test_Case 2
        //Case when 0 lines are full

        ZenMode test_mode_4;

        //Running the block attach function
        test_mode_4.block_attach();
        
        //Condition to check the intended score

        if ((test_mode_4.get_score())==0){
            std::cout << "Test_2 for score_block_attach() function passed!" << std::endl;
        }

        //Condition to check if the total lines cleared are 0 then the function fails and the test passes
        if (test_mode_4.total_lines_cleared==0){
            std::cout << "Test_2 for lines_block_attach() function passed!" << std::endl;
        }



    }

    //This function tests the get_score() function of time_attack mode 

    void run_test_time_attack_get_score(){

        //Test_Case 1
        TimeAttackMode test_mode_5;
        //This case tests the get_score() function for 1 line cleared

        //Manually filling the bottom line of the grid
        for (int i=0;i<10;i++){
            test_mode_5.game_grid.grid[19][i]=20;
        }

        //Clearing the last line and evaluating the score
        test_mode_5.block_attach();
        test_mode_5.lines_cleared=1;

        if ((test_mode_5.get_score())==200){
            std::cout << "Test_1 for get_score() function passed!" << std::endl;

        }

        //Test_Case 2
        //This case tests the get_score() function for 0 lines to be cleared

        test_mode_5.block_attach();

        if ((test_mode_5.get_score()==0)){
            std::cout << "Test_2 for get_score() function passed!" << std::endl;
        }

        //Test_case 3
        //This case tests the get_score() function for 10 lines to be cleared
        TimeAttackMode test_mode_6;

        //Manually filling the bottom 10 lines to be cleared
        //Iterate rows
        for (int i=10;i<20;i++){
            //Iterate columns
            for (int j=0;j<10;j++){

                test_mode_6.game_grid.grid[i][j]=50;
            }
        }
        //Implementing the block_attach function
        test_mode_6.block_attach();
        test_mode_6.lines_cleared=10;

        if ((test_mode_6.get_score()==6000)){
            std::cout << "Test_3 for get_score() function passed!" << std::endl;
        }


    }
    
};