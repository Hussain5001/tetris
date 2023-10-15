#pragma once
#include "time_dependent_mode.h"

class TimeAttackMode: public TimeDependentMode{
    public:
    TimeAttackMode();
    bool is_game_finished();
    double get_score();
    void block_attach();
};