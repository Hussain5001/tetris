#pragma once
#include <vector>
#include "Color.h"

// Class declaration for Board
class Board {
public:
    // Constructor with default values for rows and columns
    Board(int row = 20, int col = 10);

    // Destructor
    ~Board();

    // Method to clear the grid
    void clear_grid();

    // Method to display the current state of the grid
    void show_state();

    // Method to check if a cell is empty
    bool is_cell_empty(int row, int col);

    // Method to clear filled rows and shift the rows above down
    int row_clearance();

    // Method to get the value at a specific cell
    int get_cell_value(int row, int col);

    // Method to check if a particular row is completely filled
    bool is_row_full(int row);

    // Method to check if a cell is within the bounds of the grid
    bool is_cell_within_bounds(int row, int col);

    // 2D grid to hold the board state
    int** grid;

    // Method to draw the board
    void draw();

    //Method to get the grid value
    int get_grid_value(int given_row,int given_column);

    //Method to get the row value
    int get_num_rows();



private:
    // Number of rows in the grid
    int num_rows;

    // Number of columns in the grid
    int num_cols;

    // Size of each cell in the grid
    int cell_size;

    // Vector to hold colors for the grid
    std::vector<Color> colors;

    // Method to create the grid
    void create_grid();
};
