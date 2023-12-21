#include "Cube.h"
#include "Cube.cpp"
#include <iostream>

double cubeOnStack() {
    uiuc::Cube c(3);
    return c.getVolume();
}

void cubeOnHeap() {
    uiuc::Cube *c1 = new uiuc::Cube(10);
    uiuc::Cube *c2 = new uiuc::Cube;
    delete c1;
}


int main() {
    cubeOnStack();
    cubeOnHeap();
    cubeOnStack();
    return 0;
}