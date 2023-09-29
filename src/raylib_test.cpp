#include "raylib.h"

int window_init(){
    InitWindow(500,500,"test");
    while(WindowShouldClose()==false){
        BeginDrawing();
    }
    CloseWindow();
}