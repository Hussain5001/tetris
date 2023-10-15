#include "time_attack_mode.h"
#include <iostream>

TimeAttackMode::TimeAttackMode():TimeDependentMode() {}

bool TimeAttackMode::is_game_finished() {
  if (elapsed_seconds() >= 120) {
    std::cout<<"Game Over"<<std::endl;
    return true;
  } else {
    return false;
  }
}

void TimeAttackMode::block_attach(){
    std::vector<Position> block_structure = current_block.get_current_position();
    for(Position cell:block_structure){
        game_grid.grid[cell.row][cell.column]=current_block.color_id;
    }
    current_block=random_block();
    if(is_collision()){game_over=true;}
    lines_cleared=game_grid.row_clearance();
    score+=get_score();
    lines_cleared=0;
    std::cout<<"score: "<<score<<std::endl;

}

double TimeAttackMode::get_score() { 
    switch (lines_cleared)
    {
    case 1:
        return 200*lines_cleared;
    case 2:
        return 300*lines_cleared;
    case 3:
        return 400*lines_cleared;
    default:
        return 600*lines_cleared;
    }
}
