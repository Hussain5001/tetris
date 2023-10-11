#pragma once
#include "Tetromino.h"

class BlockI: public Tetromino{

public:
    BlockI();
    int id;
    virtual void set_initial_position();
};

