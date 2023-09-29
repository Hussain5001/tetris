#include <iostream>
#include "raylib.h"

extern int window_init();

int main(){
    window_init();
    std::cout << "Hello World"<< std::endl;
    return 0;
}