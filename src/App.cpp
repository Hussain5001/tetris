#include "App.h"

#include <iostream>

#include "Color.h"
#include "first_forty_mode.h"
#include "game.h"
#include "raylib.h"
#include "time_attack_mode.h"
#include "time_dependent_mode.h"
#include "zen_mode.h"

void App::run_menu() {
  // Opening Menu Window
  open_menu = false;
  InitWindow(500, 600, "Main Menu");

  // Button positions and sizes
  Rectangle zenButton = {50, 50, 200, 50};
  Rectangle timeAttackButton = {50, 120, 200, 50};
  Rectangle first40LinesButton = {50, 190, 200, 50};
  // Default mode
  mode = 0;

  // Main loop
  while (!WindowShouldClose()) {
    // Check if any button is clicked
    if (mode == 0) {
      if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
        if (CheckCollisionPointRec(GetMousePosition(), zenButton)) {
          mode = 1;
          break;
        } else if (CheckCollisionPointRec(GetMousePosition(),
                                          timeAttackButton)) {
          mode = 2;
          break;
        } else if (CheckCollisionPointRec(GetMousePosition(),
                                          first40LinesButton)) {
          mode = 3;
          break;
        }
      }
    }

    BeginDrawing();
    ClearBackground(BLACK);

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
  run_game();
}

void App::zen_mode_menu() {
  InitWindow(500, 600, "Zen");
  // Button positions and sizes
  Rectangle new_game_button = {50, 50, 200, 50};
  Rectangle last_progress_button = {50, 120, 200, 50};
  zen_choice_made = false;
  while (!WindowShouldClose()) {
    // Check if any button is clicked
    if (!zen_choice_made) {
      if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
        if (CheckCollisionPointRec(GetMousePosition(), new_game_button)) {
          zen_choice_made = true;
          break;
        } else if (CheckCollisionPointRec(GetMousePosition(),
                                          last_progress_button)) {
          zen_choice_made = true;
          load_saved_game = true;
          break;
        }
      }
    }
    BeginDrawing();
    ClearBackground(BLACK);

    if (!zen_choice_made) {
      // Draw the buttons
      DrawRectangleRec(new_game_button, BLUE);
      DrawRectangleRec(last_progress_button, GREEN);

      // Draw the button labels
      DrawText("New Game", new_game_button.x + 20, new_game_button.y + 15, 20,
               WHITE);
      DrawText("Last Progress", last_progress_button.x + 20,
               last_progress_button.y + 15, 20, WHITE);
    }

    EndDrawing();
  }

  // Close the window
  CloseWindow();
}

void App::zen_mode() {
  InitWindow(500, 600, "Zen Mode");
  ZenMode zen_game = ZenMode();
  Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);
  ClearBackground(BLACK);

  if (load_saved_game) {
    zen_game.load_game_state();
    load_saved_game=false;
  }

  while (!WindowShouldClose()) {
    DrawTextEx(font, "Score", {365, 15}, 38, 2, WHITE);
    DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, BLUE);
    char score_text[10];
    sprintf(score_text, "%.2f", zen_game.score);
    Vector2 textSize = MeasureTextEx(font, score_text, 38, 2);
    DrawTextEx(font, score_text, {320 + (170 - textSize.x) / 2, 65}, 38, 2,
               WHITE);

    // Button positions and sizes
    Rectangle quit = {320, 150, 170, 60};
    Rectangle quit_save = {320, 250, 170, 60};
    Rectangle main_menu = {320, 360, 170, 60};
    DrawRectangleRec(quit, RED);
    DrawRectangleRec(quit_save, PINK);
    DrawRectangleRec(main_menu, GREEN);
    // Draw the button labels
    DrawTextEx(font, "Quit", {360, 160}, 38, 2, WHITE);
    DrawTextEx(font, "Quit And Save", {325, 260}, 23, 2, WHITE);
    DrawTextEx(font, "Main Menu", {330, 370}, 32, 2, WHITE);
    if (zen_game.game_over == true) {
      Rectangle over_game = {305, 450, 190, 60};
      DrawRectangleRec(over_game, WHITE);
      DrawTextEx(font, "Game Over", {310, 460}, 38, 2, BLACK);
    }

    zen_game.handle_input();
    BeginDrawing();
    zen_game.fall_block();

    zen_game.display();
    // Clicking on the buttons
    if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
      if (CheckCollisionPointRec(GetMousePosition(), main_menu)) {
        zen_game.game_over = true;
        open_menu = true;
        return;
      } else if (CheckCollisionPointRec(GetMousePosition(), quit)) {
        zen_game.game_over = true;
        return;
      } else if (CheckCollisionPointRec(GetMousePosition(), quit_save)) {
        zen_game.save_game_state();
        zen_game.game_over=true;
        return;
      }
    }

    EndDrawing();
  }
}

void App::time_attack_mode() {
  InitWindow(500, 600, "Time Attack");
  Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);
  TimeAttackMode attack_game = TimeAttackMode();
  attack_game.game_start();
  while (!WindowShouldClose()) {
    if (attack_game.is_game_finished() && !attack_game.game_over) {
      attack_game.game_over = true;
      attack_game.game_end();
      std::cout<<"Game Over"<<std::endl;
    }
    if (attack_game.game_over == true) {
      Rectangle over_game = {305, 450, 190, 60};
      DrawRectangleRec(over_game, WHITE);
      DrawTextEx(font, "Game Over", {310, 460}, 38, 2, BLACK);
    }

    // Score and Time
    DrawTextEx(font, "Time", {365, 15}, 38, 2, WHITE);
    DrawTextEx(font, "Score", {360, 130}, 38, 2, WHITE);
    DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, BLUE);
    DrawRectangleRounded({320, 170, 170, 60}, 0.3, 6, RED);

    // Button positions and sizes
    Rectangle quit = {320, 250, 170, 60};
    Rectangle main_menu = {320, 330, 170, 60};
    DrawRectangleRec(quit, PINK);
    DrawRectangleRec(main_menu, GREEN);
    // Draw the button labels

    DrawTextEx(font, "Quit", {360, 260}, 38, 2, WHITE);
    DrawTextEx(font, "Main Menu", {330, 340}, 32, 2, WHITE);
    // Clicking on the buttons

    if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
      if (CheckCollisionPointRec(GetMousePosition(), main_menu)) {
        attack_game.game_over = true;
        open_menu = true;
        return;

      } else if (CheckCollisionPointRec(GetMousePosition(), quit)) {
        attack_game.game_over = true;
        return;
      }
    }

    char time_text[10];
    sprintf(time_text, "%.1f", attack_game.elapsed_seconds());
    Vector2 textSize = MeasureTextEx(font, time_text, 38, 2);
    DrawTextEx(font, time_text, {320 + (170 - textSize.x) / 2, 65}, 38, 2,
               WHITE);
    char score_text[10];
    sprintf(score_text, "%.2f", attack_game.score);
    ;
    Vector2 textSize1 = MeasureTextEx(font, score_text, 38, 2);
    DrawTextEx(font, score_text, {320 + (170 - textSize1.x) / 2, 180}, 38, 2,
               WHITE);
    attack_game.handle_input();
    attack_game.fall_block();
    BeginDrawing();
    ClearBackground(BLACK);
    attack_game.display();
    EndDrawing();
  }
}

void App::forty_line_mode() {
  InitWindow(500, 600, "First 40 Lines");
  Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);
  FirstFortyMode forty_game = FirstFortyMode();
  forty_game.game_start();
  while (!WindowShouldClose()) {
    if (forty_game.is_game_finished() && !forty_game.game_over) {
      forty_game.game_over = true;
      forty_game.game_end();
      std::cout<<"Game Over"<<std::endl;
    }

    if (forty_game.game_over == true) {
      Rectangle over_game = {305, 450, 190, 60};
      DrawRectangleRec(over_game, WHITE);
      DrawTextEx(font, "Game Over", {310, 460}, 38, 2, BLACK);
    }
    DrawTextEx(font, "Lines", {365, 15}, 38, 2, WHITE);
    DrawTextEx(font, "Time", {365, 130}, 38, 2, WHITE);
    DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, BLUE);
    DrawRectangleRounded({320, 170, 170, 60}, 0.3, 6, RED);

    // Buttons
    Rectangle quit = {320, 250, 170, 60};
    Rectangle main_menu = {320, 330, 170, 60};
    DrawRectangleRec(quit, PINK);
    DrawRectangleRec(main_menu, GREEN);
    // Draw the button labels

    DrawTextEx(font, "Quit", {360, 260}, 38, 2, WHITE);
    DrawTextEx(font, "Main Menu", {330, 340}, 32, 2, WHITE);

    // Clicking on the buttons

    if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
      if (CheckCollisionPointRec(GetMousePosition(), main_menu)) {
        forty_game.game_over=true;
        open_menu=true;
        return;

      } else if (CheckCollisionPointRec(GetMousePosition(), quit)) {
        forty_game.game_over = true;
        return;
      }
    }

    char line_text[10];
    sprintf(line_text, "%d", forty_game.total_lines_cleared);
    Vector2 textSize = MeasureTextEx(font, line_text, 38, 2);
    DrawTextEx(font, line_text, {320 + (170 - textSize.x) / 2, 65}, 38, 2,
               WHITE);
    char time_text[10];
    sprintf(time_text, "%.1f", forty_game.score);

    Vector2 textSize1 = MeasureTextEx(font, time_text, 38, 2);
    DrawTextEx(font, time_text, {320 + (170 - textSize1.x) / 2, 180}, 38, 2,
               WHITE);
    forty_game.score = forty_game.get_score();
    forty_game.handle_input();
    forty_game.fall_block();
    BeginDrawing();
    ClearBackground(BLACK);
    forty_game.display();
    EndDrawing();
  }
}

void App::run_game() {
  // Zen Mode
  if (mode == 1) {
    zen_mode_menu();
    if(zen_choice_made){
      zen_mode();
      CloseWindow();
    }
    if (open_menu) {
      run_menu();
    }
  }

  else if (mode == 2) {
    time_attack_mode();
    CloseWindow();
    if (open_menu) {
      run_menu();
    }

  } else if (mode == 3) {
    forty_line_mode();
    CloseWindow();
    if(open_menu){
      run_menu();
    }
  }
}