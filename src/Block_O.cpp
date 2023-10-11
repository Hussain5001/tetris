#include "Block_O.h"
#include "Tetromino.h"


BlockO::BlockO(){

    this->id = 4;
    cells[0] = {Position{0, 0}, Position{0, 1}, Position{1, 0}, Position{1, 1}};

}
//Changing the initial position of the O Block to move to the centre of the grid.
void BlockO::set_initial_position(){
    move(0,4);
}

