#pragma once
#include "board.h"
#include "Tetromino.h"
#include "Block_I.h"
#include "Block_J.h"
#include "Block_L.h"
#include "Block_O.h"
#include "Block_S.h"
#include "Block_T.h"
#include "Block_Z.h"
#include <vector>

class Game{
public:
    Game();
    Board game_grid=Board();
    
    Tetromino random_block();
    void display();
private:
    std::vector<Tetromino> block_list;
    Tetromino current_block;

};