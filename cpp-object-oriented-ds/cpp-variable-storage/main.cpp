#include "Cube.h"
#include "Cube.cpp"
#include <iostream>

bool sendCube(uiuc::Cube c) {
    // Sending the cube by value
    // Logic
    return true;
}

bool sendCubeByRef(uiuc::Cube &c) {
    // Sending the cube by ref
    // Logic
    return true;
}
bool sendCubeByPtr(uiuc::Cube *c) {
    // Sending the cube by ref
    // Logic
    return true;
}

int main() {
    // Direct Storage
    uiuc::Cube c; // Stores a Cube in memory
    int i;  // Stores an integer in memory

    // Storage by Pointer
    uiuc::Cube *cPtr;    // Pointer to a cube in memory
    int *iPtr; // Pointer to an integer in memory

    // Storage by Reference -> a reference does not store memory, only an alias
    uiuc::Cube &cRef = c;
    int &iRef = i;

    std::cout << "-------- Pass by Value --------" << std::endl;
    uiuc::Cube c1(10);
    uiuc::Cube myCube = c1;   // Transfer the cube
    sendCube(c1);

    std::cout << "-------- Pass by Reference --------" << std::endl;
    uiuc::Cube c2(10);
    uiuc::Cube& myCube1 = c2;
    sendCubeByRef(c2);
    std::cout << "-------- Pass by Pointer --------" << std::endl;
    uiuc::Cube c3(10);
    uiuc::Cube *myCube2 = &c3;
    sendCubeByPtr(&c3);
    return 0;
}