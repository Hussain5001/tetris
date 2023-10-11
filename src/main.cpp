#include <iostream>
#include "raylib.h"
#include "Color.h"
#include "board.h"
#include "Tetromino.h"
#include "Block_S.h"


int main(){

    InitWindow(500,650,"TEST");
    Board test_grid=Board();
    test_grid.show_state();
    BlockS test_block=BlockS();

    while(WindowShouldClose()==false){
        BeginDrawing();
        ClearBackground(BLACK);
        test_grid.draw();
        test_block.draw();


        EndDrawing();
    }
    CloseWindow();
}