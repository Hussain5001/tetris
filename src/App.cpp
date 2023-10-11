#include "App.h"
#include <iostream>

#include "raylib.h"
#include "game.h"

// void App::run_menu() {
//   InitWindow(800, 450, "Main Menu");

//   // Button positions and sizes
//   Rectangle zenButton = {50, 50, 200, 50};
//   Rectangle timeAttackButton = {50, 120, 200, 50};
//   Rectangle first40LinesButton = {50, 190, 200, 50};

//   mode = 0;

//   // Main loop
//   while (!WindowShouldClose()) {
//     // Check if any button is clicked
//     if (mode == 0) {
//       if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
//         if (CheckCollisionPointRec(GetMousePosition(), zenButton)) {
//           mode = 1;
//           break;
//         } else if (CheckCollisionPointRec(GetMousePosition(),timeAttackButton)) {
//           mode = 2;
//           break;
//         } else if (CheckCollisionPointRec(GetMousePosition(),first40LinesButton)) {
//           mode = 3;
//           break;
//         }
//       }
//     }

//     BeginDrawing();
//     ClearBackground(RAYWHITE);

//     if (mode == 0) {
//       // Draw the buttons
//       DrawRectangleRec(zenButton, BLUE);
//       DrawRectangleRec(timeAttackButton, GREEN);
//       DrawRectangleRec(first40LinesButton, RED);

//       // Draw the button labels
//       DrawText("Zen Mode", zenButton.x + 20, zenButton.y + 15, 20, WHITE);
//       DrawText("Time Attack", timeAttackButton.x + 20, timeAttackButton.y + 15,
//                20, WHITE);
//       DrawText("First 40 Lines", first40LinesButton.x + 20,
//                first40LinesButton.y + 15, 20, WHITE);
//     }

//     EndDrawing();
//   }

//   // Close the window
//   CloseWindow();
// }

void App::run_game() {
  // Initialize the window
  InitWindow(800, 500, "Game Window");
  Game test_game=Game();
  Board test_board=Board();
  //BlockI test_block=BlockI();
  // Main loop
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);
  
    test_game.display();

    // if (mode == 1) {
    //   // Draw Zen Mode 
    //   DrawText("Zen Mode", 50, 50, 40, BLACK);
    // } else if (mode == 2) {
    //   // Draw Time Attack 
    //   DrawText("Time Attack", 50, 50, 40, BLACK);
    // } else if (mode == 3) {
    //   // Draw First 40 Lines 
    //   DrawText("First 40 Lines", 50, 50, 40, BLACK);
    // }

    EndDrawing();
  }

  // Close the window
  CloseWindow();
}

