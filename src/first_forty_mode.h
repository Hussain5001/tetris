#pragma once
#include "time_dependent_mode.h"

class FirstFortyMode: public TimeDependentMode{
    public:
        FirstFortyMode();
        int total_lines_cleared=0;
        bool is_game_finished();
        double get_score();
        void block_attach();

};