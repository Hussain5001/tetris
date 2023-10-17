#pragma once

#include "game.h" // including the header file for the base Game class

// ZenMode class inheriting from Game class
class ZenMode: public Game{
public:
    // Constructor
    ZenMode();

    // Member variables
    int total_lines_cleared; // variable to keep track of the total lines cleared
    int lines_cleared; // variable to keep track of lines cleared in one move
    double score_multiplier; // variable to manage the score multiplier
    int lines_counter; // variable to count the lines

    // Function to check if the game is finished
    bool is_game_finished();

    // Function to attach the block to the grid
    void block_attach();

    // Function to calculate the score based on lines cleared
    double get_score();

    // Function to manage the falling of blocks
    void fall_block();

    // Function to save the game state to a JSON file
    void save_game_state();

    // Function to load the game state from a JSON file
    void load_game_state();
};
