#include <iostream>
#include "raylib.h"
#include "Color.h"
#include "board.h"

#include "App.h"
#include "UnitTestTetromino.h"
#include "UnitTestBoard.h"
#include "UnitTestGame.h"


int main(){

	App tetris;
	//tetris.run_menu();
	//tetris.run_game();


    // InitWindow(500,650,"TEST");
    // Board test_grid=Board();
    // test_grid.show_state();
    // BlockI test_block=BlockI();

    // while(WindowShouldClose()==false){
    //     BeginDrawing();
    //     ClearBackground(BLACK);
    //     test_grid.draw();
    //     test_block.draw();


    //     EndDrawing();
    // }
    // CloseWindow();

    UnitTestTetromino testing1;
    testing1.run_test_tetromino();

    UnitTestBoard testing2;
    testing2.run_test_board();

    UnitTestGame testing3;
    testing3.run_test_game();



}
