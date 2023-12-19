#include "Cube.h"
#include "Cube.cpp"
#include <iostream>

int main() {
    int *p = new int;
    Cube *c = new Cube;

    *p = 42;
    // When an object is stored via a pointer, access can be made using the -> operator

    // (*c).setLength(4);
    c->setLength(4);

    delete c;
    c = nullptr;
    delete p;
    p = nullptr;


    return 0;
}