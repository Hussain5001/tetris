#include "Color.h"
#include <vector>
using namespace std;

const Color YELLOW = { 253, 249, 0, 255 };
const Color ORANGE = { 255, 161, 0, 255 };
const Color GREEN = { 0, 228, 48, 255 };
const Color PURPLE = { 200, 122, 255, 255 };
const Color SKYBLUE = { 102, 191, 255, 255 };
const Color BROWN = { 127, 106, 79, 255 };
const Color WHITE = { 255, 255, 255, 255 };
const Color RED = { 230, 41, 55, 255 };

vector<Color> Cell_Colors(){
    return (YELLOW,ORANGE,GREEN,PURPLE,SKYBLUE,BROWN,WHITE,RED);
}


