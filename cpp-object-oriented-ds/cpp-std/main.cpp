#include "Cube.h"
#include "Cube.cpp"
#include <iostream>

// Namespaces
using std::cout;
using std::endl;

int main() {
    // Using uiuc namespace -> specifies that our cube is within the uiuc namespace
    uiuc::Cube c;
    c.setLength(2.4);
    std::cout << "Volume: " << c.getVolume() << std::endl;

    double surfaceArea = c.getSurfaceArea();
    std::cout << "Surface Area: " << surfaceArea << std::endl;

    return 0;
}