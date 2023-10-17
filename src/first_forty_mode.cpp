#include "first_forty_mode.h"
#include <iostream>

FirstFortyMode::FirstFortyMode():TimeDependentMode(){}

//Function to check if the game is finished! (Total lines cleared are above 40)
bool FirstFortyMode::is_game_finished() {
    if(total_lines_cleared>=40){
        return true;
        std::cout<<"Game Over"<<std::endl;
    }else{
        return false;
    }
}

//Function to return the score in elapsed seconds
double FirstFortyMode::get_score() {
    return elapsed_seconds();
}

//Function to attach the block in the grid and storing the number of lines cleared
void FirstFortyMode::block_attach() {
  std::vector<Position> block_structure = current_block.get_current_position();
  for (Position cell : block_structure) {
    game_grid.grid[cell.row][cell.column] = current_block.color_id;
  }

  //Storing the block using the random block generator
  current_block = random_block();
  
  //Collision check
  if(is_collision()){
    game_over=true;
    game_end();
    std::cout<<"Game Over"<<std::endl;
  }
  lines_cleared = game_grid.row_clearance();
  total_lines_cleared += lines_cleared;
  lines_cleared = 0;
}
