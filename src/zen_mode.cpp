#include "zen_mode.h"
#include <iostream>
#include <fstream>
#include "../vendor/json/single_include/nlohmann/json.hpp"

using json = nlohmann::json;

ZenMode::ZenMode():Game() {
    total_lines_cleared=0;
    lines_counter=0;
    score_multiplier=1;
}

bool ZenMode::is_game_finished() {
    if (is_collision()) {
        return true;
    } else {
        return false;
    }
}

void ZenMode::block_attach() {
    std::vector<Position> block_structure = current_block.get_current_position();
    for (Position cell : block_structure) {
        game_grid.grid[cell.row][cell.column] = current_block.color_id;
    }
    current_block = random_block();
    game_over = is_game_finished();
    lines_cleared = game_grid.row_clearance();
    total_lines_cleared += lines_cleared;
    score += get_score();
    lines_cleared = 0;
    std::cout << "score: " << score << std::endl;
}

double ZenMode::get_score() {
    if (lines_cleared >= 40) {
        return 500 * lines_cleared;
    } else {
        return 300 * lines_cleared;
    }
}

void ZenMode::fall_block() {
    if (total_lines_cleared - lines_counter >= 5) {
        lines_counter = total_lines_cleared;
        score_multiplier += 0.5;
        if (drop_interval > 0.09) {
            drop_interval -= 0.08;
        }
        std::cout << "speed increased" << std::endl;
    }
    double current_t = GetTime();
    if (current_t - fall_start >= drop_interval) {
        move_down();
        if(!game_over){
            score += score_multiplier;
        }
        fall_start = current_t;
    }
}

void ZenMode::save_game_state() {
    try {
        json game_state;
        json grid_array;

        
        for (int i = 0; i < 20; i++) {
            json row;
            for (int j = 0; j < 10; j++) {
                row.push_back(i * 10 + j);;
            }
            grid_array.push_back(row);
        }

        game_state["game_grid"] = grid_array;
        game_state["score"] = score;
        game_state["score_multiplier"]=score_multiplier;
        game_state["drop_interval"]=drop_interval;

        std::ofstream file("game_state.json");
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file: game_state.json");
        }
        file << game_state.dump(4);
    } catch (const std::exception &e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }
}

void ZenMode::load_game_state() {
    try {
        std::ifstream file("game_state.json");
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file: game_state.json");
        }

        json game_state;
        file >> game_state;

        std::cout << "Reading from file: " << game_state << std::endl;

        if (game_state.contains("game_grid") && game_state["game_grid"].is_array()) {
            json grid_array = game_state["game_grid"];
            for (int i = 0; i < 20; i++) {
                if (grid_array[i].is_array()) {
                    for (int j = 0; j < 10; j++) {
                        if (grid_array[i][j].is_number()) {
                            std::cout << grid_array[i][j] << " ";
                        }
                    }
                    std::cout << std::endl;
                }
            }
        }

       
        if (game_state.contains("score") && game_state["score"].is_number()) {
            score = game_state["score"];
        }

        

        if (game_state.contains("score_multiplier") && game_state["score_multiplier"].is_number_float()) {
            score_multiplier = game_state["score_multiplier"];
        }

        if (game_state.contains("drop_interval") && game_state["drop_interval"].is_number_float()) {
            drop_interval = game_state["drop_interval"];
        }

    } catch (const std::exception &e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }
}



