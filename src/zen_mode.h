#pragma once
#include "game.h"

class ZenMode: public Game{
    public:
    ZenMode();
    int total_lines_cleared;
    double score_multiplyer;
    int lines_counter;
    bool is_game_finished();
    void block_attach();
    double get_score();
    void fall_block();

    void save_game_state(const std::string &filename);

    void load_game_state(const std::string &filename);
};
