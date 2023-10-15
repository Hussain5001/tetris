#include "game.h"

#include <time.h>

#include <iostream>
#include <random>

Game::Game() {
  lines_cleared=0;
  fall_start = 0;
  drop_interval=0.48;
  score=0;
  game_grid.show_state();
  block_list = {BlockI(), BlockJ(), BlockL(), BlockO(),
                BlockO(), BlockT(), BlockZ()};
  current_block = random_block();
  game_over=false;
}

Tetromino Game::random_block() {
    if (block_list.empty()){
        block_list=get_blocks();
    }
  std::vector<Color> color_list = color_vector();
  
  int block_index = rand() % block_list.size();
  Tetromino blk =block_list[block_index];
  block_list.erase(block_list.begin()+block_index);

  int color_index= 1+rand()%(color_list.size()-1);
  blk.color_id=color_index;
  return (blk);
}

std::vector<Tetromino> Game::get_blocks(){
    return {BlockI(), BlockJ(), BlockL(), BlockO(),
                BlockO(), BlockT(), BlockZ()};
}

void Game::display() {
  game_grid.draw();
  current_block.draw();
}

void Game::handle_input() {
  int key = GetKeyPressed();
  switch (key) {
    case KEY_LEFT:
      move_left();
      break;
    case KEY_RIGHT:
      move_right();
      break;
    case KEY_DOWN:
      move_down();
      break;
    case KEY_UP:
      rotate_and_bound_chk();
      break;
  }
}

void Game::move_left() {
  if(!game_over){
    current_block.move(0, -1);
    if (!is_within_grid()||is_collision()) {
      current_block.move(0, 1);
    }
  }
}

void Game::move_right() {
  if(!game_over){
    current_block.move(0, 1);
  if (!is_within_grid()||is_collision()) {
    current_block.move(0, -1);
    }
  }
}

void Game::move_down() {
  if(!game_over){
    current_block.move(1, 0);
    if (!is_within_grid()|| is_collision()) {
      current_block.move(-1, 0);
      block_attach();
    }
  }
}

bool Game::is_within_grid() {
  std::vector<Position> block_structure = current_block.get_current_position();
  for (Position cell : block_structure) {
    if (game_grid.is_cell_within_bounds(cell.row, cell.column)) {
      return false;
    }
  }
  return true;
}

void Game::rotate_and_bound_chk() {
  if(!game_over){
    current_block.rotate();
    if (!is_within_grid()||is_collision()) {
      current_block.current_rotation -= 1;
      if (current_block.current_rotation == -1) {
        current_block.current_rotation = (int)current_block.cells.size() - 1;
      }
    }
  }
}

void Game::fall_block() {
    double current_t=GetTime();
    if(current_t-fall_start>=drop_interval){
        move_down();
        fall_start=current_t;
    }
}


bool Game::is_collision(){
    std::vector<Position> block_structure=current_block.get_current_position();
    for(Position cell:block_structure){

        if(!game_grid.is_cell_empty(cell.row,cell.column)){
            return true;
        }
    }
    return false;
}
