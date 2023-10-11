#include"Tetromino.h"
#include"Position.h"
#include<raylib.h>

//Default constructor for initializing all the attributes
Tetromino::Tetromino(){
    this->cell_size=30;
    this->current_rotation=0;
    colors = cell_colours();
    this ->row_pos=0;
    this ->col_pos=0;
};

std::vector<Position> Tetromino::get_current_position() {
    std::vector<Position> block_structure = cells[current_rotation];
    std::vector<Position> block_with_offset;
    for(Position cell: block_structure){
        Position moved{cell.row + row_pos, cell.column + col_pos};
        block_with_offset.push_back(moved);
    }

    return block_with_offset;
}

void Tetromino::draw() {
  // getting the position of block in grid
  std::vector<Position> cell_positions = get_current_position();

  for (Position cell : cell_positions) {
    DrawRectangle(cell.column * cell_size + 1,
                  cell.row * cell_size + 1, cell_size - 1,
                  cell_size - 1, colors[id]);
  };
};

void Tetromino::move(int row, int col){

    //Updating the row offset and the column offset
    row_pos=row_pos+row;
    col_pos=col_pos+col;
};

//Virtual Function for defining the initial position of a Tetromino block
void Tetromino::set_initial_position(){
    move(0,3);
}

//Function for rotating a Tetromino block
void Tetromino::rotate(){

    current_rotation=current_rotation+1;
    if(current_rotation==(int)cells.size()){
        current_rotation=0;
    }
};

//Function for reversing the rotation of tetromino block during bound checking
void Tetromino::undo_rotation(){

    current_rotation=current_rotation-1;

    if (current_rotation==-1){
        current_rotation = (int)cells.size() - 1;
    }

};