#pragma once
#include "Tetromino.h"

class BlockO: public Tetromino{

public:
    BlockO();
    int id;
    virtual void set_initial_position();
};



