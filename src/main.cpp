//  #include <iostream>
//  #include <fstream>
//  #include "nlohmann/json.hpp"
// int main() {
    
//     const int rows = 20;
//     const int cols = 10;
//     int grid_array[rows][cols];

//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             grid_array[i][j] = 0; 
//         }
//     }
//     grid_array[0][0]=99;


//     json game_state;
//     for (int i = 0; i < rows; i++) {
//         json row;
//         for (int j = 0; j < cols; j++) {
//             row.push_back(grid_array[i][j]);
//         }
//         game_state.push_back(row);
//     }

    
//     std::ofstream file("game_state.json");
//     if (file.is_open()) {
//         file << game_state.dump(4);
//         file.close();
//         std::cout << "2D array saved to game_state.json" << std::endl;
//     } else {
//         std::cerr << "Unable to open file for writing." << std::endl;
//     }

//     return 0;
// }

// #include "Color.h"
// #include "board.h"

// #include "App.h"


// int main(){

// 	App tetris;
// 	//tetris.run_menu();
// 	//tetris.run_game();
//     int gridd[20][10];
//     for(int x=0;x<20;x++){
//         for(int y=0;y<10;y++){
//             gridd[x][y]=0;
//         }
//     }
//     //try {
//         std::ifstream file("game_state.json");
//         if (!file.is_open()) {
//             throw std::runtime_error("Failed to open file: game_state.json");
//         }

//         json game_state;
//         file >> game_state;

//         if (game_state.contains("game_grid") && game_state["game_grid"].is_array()) {
//             json grid_array = game_state["game_grid"];
//             for (int i = 0; i < 20; i++) {
//                 if (grid_array[i].is_array()) {
//                     for (int j = 0; j < 10; j++) {
//                         if (grid_array[i][j].is_number()) {
//                             gridd[i][j] = grid_array[i][j];
//                         }
//                     }
//                 }
//             }
//         }

//         // if (game_state.contains("score") && game_state["score"].is_number()) {
//         //     score = game_state["score"];
//         // }

//         // if (game_state.contains("total_lines_cleared") && game_state["total_lines_cleared"].is_number()) {
//         //     total_lines_cleared = game_state["total_lines_cleared"];
//         // }


//         // if (game_state.contains("score_multiplier") && game_state["score_multiplier"].is_number_float()) {
//         //     score_multiplier = game_state["score_multiplier"];
//         // }

//         // if (game_state.contains("drop_interval") && game_state["drop_interval"].is_number_float()) {
//         //     drop_interval = game_state["drop_interval"];
//         // }

//     // } catch (const std::exception &e) {
//     //     std::cerr << "An error occurred: " << e.what() << std::endl;
//     // }
//     for(int x=0;x<20;x++){
//         for(int y=0;y<10;y++){
//             std::cout<<gridd[x][y]<<std::endl;
//         }
//     }
//     // InitWindow(500,650,"TEST");
//     // Board test_grid=Board();
//     // test_grid.show_state();
//     // BlockI test_block=BlockI();

//     // while(WindowShouldClose()==false){
//     //     BeginDrawing();
//     //     ClearBackground(BLACK);
//     //     test_grid.draw();
//     //     test_block.draw();


//     //     EndDrawing();
//     // }
//     // CloseWindow();
// }

#include <iostream>
#include <fstream>
#include "zen_mode.h" // Include the necessary header file for the JSON library
#include <nlohmann/json.hpp> // Include the nlohmann json library
using json = nlohmann::json;


int main() {
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

       
        // if (game_state.contains("score") && game_state["score"].is_number()) {
        //     score = game_state["score"];
        // }

        // if (game_state.contains("total_lines_cleared") && game_state["total_lines_cleared"].is_number()) {
        //     total_lines_cleared = game_state["total_lines_cleared"];
        // }

        // if (game_state.contains("score_multiplier") && game_state["score_multiplier"].is_number_float()) {
        //     score_multiplier = game_state["score_multiplier"];
        // }

        // if (game_state.contains("drop_interval") && game_state["drop_interval"].is_number_float()) {
        //     drop_interval = game_state["drop_interval"];
        } 
