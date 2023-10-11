#include"Tetromino.h"
#include"Position.h"
#include<raylib.h>

//Default constructor for initializing all the attributes
Tetromino::Tetromino(){
    this->cell_size=30;
    this->current_rotation=0;
    colors = Cell_Colours();
    this ->row_pos=0;
    this ->col_pos=0;
};

void Tetromino::draw() {
//Storing the intital rotation state of a tetromino in a vector
    std::vector<Position> tiles = set_initial_position();

    for (Position current_block: tiles) {

        DrawRectangle(current_block.column * cell_size + 1, current_block.row * cell_size + 1, cell_size - 1,
                      cell_size - 1,colors[id]);

    };
};

void Tetromino::move(int row, int col){

    //Updating the row offset and the column offset
    row_pos=row_pos+row;
    col_pos=col_pos+col;
}

//Virtual Function for defining the initial position of a Tetromino block
std::vector<Position> Tetromino::set_initial_position(){

    std::vector<Position>tiles= cells[current_rotation];
    std::vector<Position> movedTiles;
    for (Position item:tiles){
        Position new_pos= Position(item.row + 0, item.column + 3);
        movedTiles.push_back(new_pos);
    }

    return movedTiles;

}


