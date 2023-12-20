#include "Cube.h"
#include <iostream>

namespace uiuc {
    // If there is any custom constructor, an automatic default constructor is not defined
    Cube::Cube() {
        length_ =1;
        std::cout << "Default constructor invoked!" << std::endl;
    }
    Cube::Cube(double length) {
        length_ = length;
    }
    Cube::Cube(const uiuc::Cube &obj) {
        length_ = obj.length_;
        std::cout << "Copy constructor invoked!" << std::endl;
    }
    Cube& Cube::operator=(const Cube &obj) {
        length_ = obj.length_;
        std::cout << "Assignment operator invoked!" << std::endl;
        return *this;   // --> this is an instance of the class
    }
}

double uiuc::Cube::getVolume() {
    return length_ * length_ * length_;
}

double uiuc::Cube::getSurfaceArea() {
    return 6 * length_ * length_;
}

void uiuc::Cube::setLength(double length) {
    length_ = length;
}