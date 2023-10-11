#include "game.h"
#include <random>
#include<iostream>

Game::Game() {
    //game_grid= Board();
    
    game_grid.show_state();
    block_list={BlockI(),BlockJ(),BlockL(),BlockO(),BlockO(),BlockT(),BlockZ()};
    current_block=random_block();

}

Tetromino Game::random_block(){
    int num = rand() % block_list.size();
    return (block_list[num]);
}

void Game::display(){
    game_grid.draw();
    current_block.draw();
}