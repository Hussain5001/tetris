#include "game.h"
#include <random>
#include<iostream>

Game::Game() {
    game_grid= Board();
    std::cout<<"game const2"<<std::endl;
    game_grid.show_state();
    std::cout<<"game const3"<<std::endl;
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