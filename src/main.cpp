#include <iostream>
#include "raylib.h"
#include "Color.h"
#include "board.h"



int main(){

    InitWindow(500,650,"TEST");
    Board test_grid=Board();
    test_grid.show_state();

    while(WindowShouldClose()==false){
        BeginDrawing();
        ClearBackground(DARKBLUE);


        EndDrawing();
    }
    CloseWindow();
}