#pragma once
#include <vector>
#include "Color.h"
class Board {
public:
   
    Board();

    
    ~Board();

    
    void clear_grid();
    void show_state();
    //void fill_cell(int row, int col, int value);
    //void clear_cell(int row, int col);
    bool is_cell_empty(int row, int col);
    int get_cell_value(int row, int col);
    bool is_row_full(int row);
    //bool clear_rows(int tol);
    bool is_cell_within_bounds(int row, int col);
    int** grid;
    void draw();
private:
    
    int num_rows;
    int num_cols;
    int cell_size;
    std::vector<Color> colors;
    

  
    void create_grid();
};

