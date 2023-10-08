#include"Tetromino.h"
#include"Position.h"
#include<raylib.h>

//Default constructor for initializing all the attributes
Tetromino::Tetromino(){
    this->cell_size=30;
    this->current_rotation=0;
    colors = Cell_Colours();
};

void Tetromino::draw() {
//Storing the rotation of a tetromino in a vector
    std::vector<Position> tiles = cells[current_rotation];

//For loop to iterate through each element of the vector tiles
    for (Position current_block: tiles) {

        DrawRectangle(current_block.column * cell_size + 1, current_block.row * cell_size + 1, cell_size - 1,
                      cell_size - 1,colors[id]);

    };


};