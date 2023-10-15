#include "first_forty_mode.h"
#include <iostream>

FirstFortyMode::FirstFortyMode():TimeDependentMode(){}

bool FirstFortyMode::is_game_finished() {
    if(total_lines_cleared>=1){
        return true;
    }else{
        return false;
    }
}

double FirstFortyMode::get_score() {
    return elapsed_seconds();
}

void FirstFortyMode::block_attach() {
  std::vector<Position> block_structure = current_block.get_current_position();
  for (Position cell : block_structure) {
    game_grid.grid[cell.row][cell.column] = current_block.color_id;
  }
  current_block = random_block();
  if(is_collision()){
    game_over=true;
    game_end();
  }
  lines_cleared = game_grid.row_clearance();
  total_lines_cleared += lines_cleared;
  lines_cleared = 0;
}
