#include "Cube.h"
#include <iostream>

namespace uiuc
{   
    // Constructors
    Cube::Cube() {
        std::cout << "Created $1 (default)" << std::endl;
    }
    Cube::Cube(double length) {
        length_ = length;
        std::cout << "Created $" << getVolume() << std::endl; 
    }
    Cube::Cube(const Cube &obj) {
        length_ = obj.length_;
        std::cout << "Created $" << getVolume() << " via copy" << std::endl;
    }
    // Destructors
    Cube::~Cube() {
        std::cout << "Destroyed $" << getVolume() << std::endl;
    }
    // Assignment Operator
    Cube& Cube::operator=(const Cube &obj) {
        std::cout << "Transformed $" << getVolume() << " -> $" << obj.getVolume() <<std::endl;
        return *this;
    }
}

double uiuc::Cube::getVolume() const {
    return length_ * length_ * length_;
}

double uiuc::Cube::getSurfaceArea() const {
    return 6 * length_ * length_;
}

void uiuc::Cube::setLength(double length) {
    length_ = length;
}
