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
//Changing the initial position of the I block to make it start its movement from the beginning of the grid
std::vector<Position> Tetromino::set_initial_position(){

    std::vector<Position>tiles= cells[current_rotation];
    std::vector<Position> movedTiles;

    for (Position item:tiles){
        Position new_pos= Position(item.row + -1, item.column + 3);
        movedTiles.push_back(new_pos);
    }

    return movedTiles;

}
