#include "game.h"

#include <time.h>

#include <iostream>
#include <random>

// Constructor for the Game class
Game::Game() {
  lines_cleared=0;
  fall_start = 0;
  drop_interval=0.48;
  score=0;
  // Display the initial state of the game grid
  game_grid.show_state();
  // Initialize the block list
  block_list = {BlockI(), BlockJ(), BlockL(), BlockO(),
                BlockO(), BlockT(), BlockZ()};
  // Set the current block to a random Tetromino
  current_block = random_block();
  // Set the game over state to false
  game_over=false;
}


// Function to generate a random Tetromino block
Tetromino Game::random_block() {
    if (block_list.empty()){
        block_list=get_blocks();
    }
  std::vector<Color> color_list = color_vector();
  
  // Randomly select a block from the block list
  int block_index = rand() % block_list.size();
  Tetromino blk =block_list[block_index];
  block_list.erase(block_list.begin()+block_index);

// Randomly assign a color to the block
  int color_index= 1+rand()%(color_list.size()-1);
  blk.color_id=color_index;
  return (blk);
}

// Function to get the list of Tetromino blocks
std::vector<Tetromino> Game::get_blocks(){
    return {BlockI(), BlockJ(), BlockL(), BlockO(),
                BlockO(), BlockT(), BlockZ()};
}
// Function to display the game grid and the current block
void Game::display() {
  game_grid.draw();
  current_block.draw();
}
// Function to handle user input
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
    case KEY_SPACE:
      if(!game_over){
        score+=20;
        while(true){
          current_block.move(1, 0);
          if (!is_within_grid()|| is_collision()) {
            current_block.move(-1, 0);
            block_attach();
            break;
          }
        }
      }
      
  }
}
// Function to move the current block to the left
void Game::move_left() {
  if(!game_over){
    current_block.move(0, -1);
    if (!is_within_grid()||is_collision()) {
      current_block.move(0, 1);
    }
  }
}
// Function to move the current block to the right
void Game::move_right() {
  if(!game_over){
    current_block.move(0, 1);
  if (!is_within_grid()||is_collision()) {
    current_block.move(0, -1);
    }
  }
}
// Function to move the current block down
void Game::move_down() {
  if(!game_over){
    current_block.move(1, 0);
    if (!is_within_grid()|| is_collision()) {
      current_block.move(-1, 0);
      block_attach();
    }
  }
}
// Function to check if the block is within the grid
bool Game::is_within_grid() {
  std::vector<Position> block_structure = current_block.get_current_position();
  for (Position cell : block_structure) {
    if (game_grid.is_cell_within_bounds(cell.row, cell.column)) {
      return false;
    }
  }
  return true;
}
// Function to rotate the current block and check for collisions
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
// Function to make the current block fall
void Game::fall_block() {
    double current_t=GetTime();
    if(current_t-fall_start>=drop_interval){
        move_down();
        fall_start=current_t;
    }
}

// Function to check for collisions with other blocks
bool Game::is_collision(){
    std::vector<Position> block_structure=current_block.get_current_position();
    for(Position cell:block_structure){

        if(!game_grid.is_cell_empty(cell.row,cell.column)){
            return true;
        }
    }
    return false;
}