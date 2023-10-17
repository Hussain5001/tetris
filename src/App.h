#pragma once
#include <string>

class App {
 public:
  int mode;
  // 0-main menu
  // 1 - Zen Mode
  // 2 - Time Attack
  // 3 - First 40 Lines
  // 4- Quit

  void run_menu();
  void run_game();

 private:
  bool open_menu = false;
  bool load_saved_game = false;
  bool zen_choice_made = false;
  void zen_mode();
  void zen_mode_menu();
  void time_attack_mode();
  void forty_line_mode();
};