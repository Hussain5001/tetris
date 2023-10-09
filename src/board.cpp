#include "board.h"
#include <iostream>

Board::Board(int num_rows, int num_cols, int cell_size)
    : num_rows_(num_rows), num_cols_(num_cols), cell_size_(cell_size) {
  initializeGrid();
}

Board::~Board() {
  for (int i = 0; i < num_rows_; ++i) {
    delete[] grid_[i];
  }
  delete[] grid_;
}

void Board::initializeGrid() {
  grid_ = new int*[num_rows_];
  for (int i = 0; i < num_rows_; i++) {
    grid_[i] = new int[num_cols_];
    for (int j = 0; j < num_cols_; j++) {
      grid_[i][j] = 0;
    }
  }
}

void Board::clearGrid() {
  for (int i = 0; i < num_rows_; i++) {
    for (int j = 0; j < num_cols_; j++) {
      grid_[i][j] = 0;
    }
  }
}

bool Board::isRowFull(int row) {
    for (int j = 0; j < num_cols_; ++j) {
        if (grid_[row][j] == 0) {
            return false;
        }
    }
    return true;
}



int Board::getCellValue(int row, int col) {
    return grid_[row][col];
}

bool Board::isCellEmpty(int row, int col) {
    return grid_[row][col] == 0;
}
