#pragma once
#include <string>

class App{
public:
    int mode;
    // 0-main menu
    //1 - Zen Mode
    //2 - Time Attack
    //3 - First 40 Lines
    //4- Quit

    void run_menu();
    void run_game();
    bool is_game_quit();
};