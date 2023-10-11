#include "Block_T.h"
#include "Tetromino.h"


BlockT::BlockT(){

    this->id = 6;
    cells[0] = {Position{0, 1}, Position{1, 0}, Position{1, 1}, Position{1, 2}};
    cells[1] = {Position{0, 1}, Position{1, 1}, Position{1, 2}, Position{2, 1}};
    cells[2] = {Position{1, 0}, Position{1, 1}, Position{1, 2}, Position{2, 1}};
    cells[3] = {Position{0, 1}, Position{1, 0}, Position{1, 1}, Position{2, 1}};
}

