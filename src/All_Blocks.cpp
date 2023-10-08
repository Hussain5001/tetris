//This file will store all the blocks with their respective rotation states
#include "Tetromino.h"
#include "Position.h"

class Block_L : public Tetromino{

    public:
    Block_L(){
        id=1;
        cells[0]= {Position(0,2),Position(1,0),Position(1,1),Position(1,2)};
        cells[1]= {Position(0,1),Position(1,1),Position(2,1),Position(2,2)};
        cells[2]={Position(1,0),Position(1,1),Position(1,2),Position(2,0)};
        cells[3]={Position(0,0),Position(0,1),Position(1,1),Position(2,1)};


    }


};