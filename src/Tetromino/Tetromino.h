//Class for manipulating the tetrominos

#pragma once
#include "../Position.h"
#include <map>
#include <string>
#include <vector>
#include "../Color.h"

class Tetromino{

    private:
    int cell_size;
    std::vector<Color> colors;
    int row_pos;
    int col_pos;

    public:
    Tetromino();
    int color_id;
    int current_rotation;
    std::map<int, std::vector<Position>> cells;
    std::vector<Position> get_current_position();
    void draw();
    void move(int row, int col);
    void rotate();
    virtual void set_initial_position();
};




