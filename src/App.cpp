#include "App.h"
#include <iostream>

#include "raylib.h"
#include "game.h"
#include "zen_mode.h"
#include "time_dependent_mode.h"
#include "time_attack_mode.h"
#include "first_forty_mode.h"

void App::run_menu() {
  InitWindow(800, 450, "Main Menu");

  // Button positions and sizes
  Rectangle zenButton = {50, 50, 200, 50};
  Rectangle timeAttackButton = {50, 120, 200, 50};
  Rectangle first40LinesButton = {50, 190, 200, 50};

  mode = 0;

  // Main loop
  while (!WindowShouldClose()) {
    // Check if any button is clicked
    if (mode == 0) {
      if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
        if (CheckCollisionPointRec(GetMousePosition(), zenButton)) {
          mode = 1;
          break;
        } else if (CheckCollisionPointRec(GetMousePosition(),timeAttackButton)) {
          mode = 2;
          break;
        } else if (CheckCollisionPointRec(GetMousePosition(),first40LinesButton)) {
          mode = 3;
          break;
        }
      }
    }

    BeginDrawing();
    ClearBackground(RAYWHITE);

    if (mode == 0) {
      // Draw the buttons
      DrawRectangleRec(zenButton, BLUE);
      DrawRectangleRec(timeAttackButton, GREEN);
      DrawRectangleRec(first40LinesButton, RED);

      // Draw the button labels
      DrawText("Zen Mode", zenButton.x + 20, zenButton.y + 15, 20, WHITE);
      DrawText("Time Attack", timeAttackButton.x + 20, timeAttackButton.y + 15,
               20, WHITE);
      DrawText("First 40 Lines", first40LinesButton.x + 20,
               first40LinesButton.y + 15, 20, WHITE);
    }

    EndDrawing();
  }

  // Close the window
  CloseWindow();
}

void App::run_game() {
  // Initialize the window
  InitWindow(500, 800, "Game Window");
  if(mode==1){
    ZenMode zen_game=ZenMode();
    while(!WindowShouldClose()){
      zen_game.handle_input();
      BeginDrawing();
      zen_game.fall_block();
      ClearBackground(BLACK);
      zen_game.display();
      EndDrawing();
    }
  }else if(mode==2){
    TimeAttackMode attack_game=TimeAttackMode();
    attack_game.game_start();
    while(!WindowShouldClose()){
      if(attack_game.is_game_finished()){
        attack_game.game_over=true;
        attack_game.timer_on=false;
      }
      attack_game.handle_input();
      attack_game.fall_block();
      BeginDrawing();
      ClearBackground(BLACK);
      attack_game.display();
      EndDrawing();
    }

  }else if(mode==3){
    FirstFortyMode forty_game=FirstFortyMode();
    forty_game.game_start();
    while(!WindowShouldClose()){
      if(forty_game.is_game_finished()){
        forty_game.game_over=true;
        forty_game.timer_on=false;
      }
      forty_game.score=forty_game.get_score();
      forty_game.handle_input();
      forty_game.fall_block();
      BeginDrawing();
      ClearBackground(BLACK);
      forty_game.display();
      EndDrawing();
  }
}
// Close the window
  CloseWindow();
}

