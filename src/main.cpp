#include <iostream>
#include "raylib.h"
#include "Color.h"
#include "board.h"
#include "Tetromino.h"
#include "Block_I.h"


int main(){

    InitWindow(500,650,"TEST");
    Board test_grid=Board();
    test_grid.show_state();
    BlockI test_block=BlockI();

    while(WindowShouldClose()==false){
        BeginDrawing();
        ClearBackground(BLACK);
        test_grid.draw();
        test_block.draw();


        EndDrawing();
    }
    CloseWindow();
}