#pragma once
#include "game.h"
#include <chrono>
#include <ctime>
class TimeDependentMode: public Game{
    public:
        TimeDependentMode();
        void game_start();
        void game_end();
        double elapsed_seconds();
        bool timer_on=false;
    protected:
        std::chrono::time_point<std::chrono::system_clock> game_start_time;
        std::chrono::time_point<std::chrono::system_clock> game_end_time;

};

