#include "Block_I.h"
#include "Tetromino.h"
using namespace std;

Block_I::Block_I(){

    this->id = 3;
    cells[0] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(1, 3)};
    cells[1] = {Position(0, 2), Position(1, 2), Position(2, 2), Position(3, 2)};
    cells[2] = {Position(2, 0), Position(2, 1), Position(2, 2), Position(2, 3)};
    cells[3] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(3, 1)};
}

