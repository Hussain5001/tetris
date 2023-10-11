#pragma once
class Board {
public:
   
    Board(int num_rows, int num_cols, int cell_size);

    
    ~Board();

    
    void clear_grid();
    void show_state();
    void fill_cell(int row, int col, int value);
    void clear_cell(int row, int col);
    bool is_cell_empty(int row, int col);
    int get_cell_value(int row, int col);
    bool is_row_full(int row);
    bool clear_rows(int tol);

private:
    
    int num_rows_;
    int num_cols_;
    int cell_size_;
    int** grid_;

  
    void initialize_grid();
};

