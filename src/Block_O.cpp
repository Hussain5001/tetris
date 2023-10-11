#include "Block_O.h"
#include "Tetromino.h"
using namespace std;

Block_O::Block_O(){

    this->id = 4;
    cells[0] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};

}
//Changing the initial position of the O Block to move it's axis of rotation to the centre of the grid.
std::vector<Position> Tetromino::set_initial_position(){

    std::vector<Position>tiles= cells[current_rotation];
    std::vector<Position> movedTiles;

    for (Position item:tiles){
        Position new_pos= Position(item.row + 0, item.column + 4);
        movedTiles.push_back(new_pos);
    }

    return movedTiles;

}

