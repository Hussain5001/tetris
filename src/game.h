#pragma once
#include "board.h"
#include "Tetromino/Tetromino.h"
#include "Tetromino/Block_I.h"
#include "Tetromino/Block_J.h"
#include "Tetromino/Block_L.h"
#include "Tetromino/Block_O.h"
#include "Tetromino/Block_S.h"
#include "Tetromino/Block_T.h"
#include "Tetromino/Block_Z.h"
#include "Position.h"
#include "Color.h"
#include <vector>

class Game{
public:
    Game();
    Board game_grid=Board();

    Tetromino random_block();
    std::vector<Tetromino> get_blocks();
    void display();
    void handle_input();

    void move_left();

    void move_right();

    void move_down();
    void rotate_and_bound_chk();
    virtual void fall_block();
    virtual void block_attach();
    bool is_collision();
    double fall_start;
    double drop_interval;
    double score;
    bool game_over;
    virtual bool is_game_finished()=0; 
    virtual double get_score()=0;

   protected:
    std::vector<Tetromino> block_list;
    Tetromino current_block;
    bool is_within_grid();


    
};