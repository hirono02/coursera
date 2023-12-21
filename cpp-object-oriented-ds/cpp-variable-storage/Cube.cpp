#include "Cube.h"
#include <iostream>

namespace uiuc {
    Cube::Cube() {
        
    }
    Cube::Cube(double length) {
        length_ = length;
        std::cout << "Created $" << getVolume() << std::endl;
    }
    Cube::Cube(const Cube &obj) {
        length_ = obj.length_;
        std::cout << "Created $" << getVolume() << " via copy" << std::endl;
    }
    Cube& Cube::operator=(const Cube &obj) {
        std::cout << "Transformed $" << getVolume() << "-> $" << obj.getVolume() << std::endl;
        length_ = obj.length_;
        return *this;
    }
}

double uiuc::Cube::getVolume() const{
    return length_ * length_ * length_;
}

double uiuc::Cube::getSurfaceArea() {
    return 6 * length_ * length_;
}

void uiuc::Cube::setLength(double length) {
    length_ = length;
}