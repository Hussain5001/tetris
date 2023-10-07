//Class for manipulating the tetrominos

#pragma once
#include "Position.h"
#include <map>
#include <string>

class Tetromino{

    private:
    int cell_size;
    int current_rotation;



    public:
    Tetromino();
    void draw();
};




