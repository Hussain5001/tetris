#include "Block_O.h"
#include "Tetromino.h"
using namespace std;

Block_O::Block_O(){

    this->id = 4;
    cells[0] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};

}

