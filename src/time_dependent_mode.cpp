#include "time_dependent_mode.h"

TimeDependentMode::TimeDependentMode():Game() {}

void TimeDependentMode::game_start() {
  game_start_time = std::chrono::system_clock::now();
  timer_on = true;
}

void TimeDependentMode::game_end(){
    game_end_time=std::chrono::system_clock::now();
    timer_on=false;
}

double TimeDependentMode::elapsed_seconds(){
    std::chrono::time_point<std::chrono::system_clock> end_t;
    if(timer_on){
        end_t =std::chrono::system_clock::now();
    }else{
        end_t=game_end_time;
    }
    std::chrono::duration<double> elapsed_time = end_t-game_start_time;
    return elapsed_time.count();
}
