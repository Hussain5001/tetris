//Class for manipulating the tetrominos

#pragma once
#include "Position.h"
#include <map>
#include <string>
#include <vector>
#include "Color.h"
using namespace std;

class Tetromino{

    private:
    int cell_size;
    int current_rotation;
    std::vector<Color> colors;
    int row_pos;
    int col_pos;



    public:
    int id;
    Tetromino();
    std::map<int, std::vector<Position>> cells;
    void draw();
    void move(int row, int col);
};




