#include "zen_mode.h"
#include <iostream>

ZenMode::ZenMode():Game() {
    total_lines_cleared=0;
    lines_cleared=0;
    lines_counter=0;
    score_multiplyer=1;
}

bool ZenMode::is_game_finished() {
  if (is_collision()) {
    return true;
  } else {
    return false;
  }
}

void ZenMode::block_attach(){
    std::vector<Position> block_structure = current_block.get_current_position();
    for(Position cell:block_structure){
        game_grid.grid[cell.row][cell.column]=current_block.color_id;
    }
    current_block=random_block();
    game_over=is_game_finished();
    lines_cleared=game_grid.row_clearance();
    total_lines_cleared+=lines_cleared;
    score+=get_score();
    lines_cleared=0;
    std::cout<<"score: "<<score<<std::endl;

}

double ZenMode::get_score(){
    if(lines_cleared>=4){
        return 500*lines_cleared;
    }else{
        return 300*lines_cleared;
    }
}

void ZenMode::fall_block() {
    if(total_lines_cleared-lines_counter>=5){
        lines_counter=total_lines_cleared;
        score_multiplyer+=0.5;
        if(drop_interval>0.09){
            drop_interval-=0.1;
        }
        std::cout<<"speed increased"<<std::endl;
    }
    double current_t=GetTime();
    if(current_t-fall_start>=drop_interval){
        move_down();
        score+=score_multiplyer;
        fall_start=current_t;
    }
}
