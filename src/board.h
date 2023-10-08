#pragma once
class Board {
public:
   
    Board(int num_rows, int num_cols, int cell_size);

    
    ~Board();

    
    void clearGrid();
    void showState();
    void fillCell(int row, int col, int value);
    void clearCell(int row, int col);
    bool isCellEmpty(int row, int col);
    int getCellValue(int row, int col);
    bool isRowFull(int row);
    bool clearRows(int tol);

private:
    
    int num_rows_;
    int num_cols_;
    int cell_size_;
    int** grid_;

  
    void initializeGrid();
};

