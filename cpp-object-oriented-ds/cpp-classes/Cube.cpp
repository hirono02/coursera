#include "Cube.h"

// functions name need to include the name of the class where they're defined in
double Cube::getVolume() {
    return length_ * length_ * length_;
}

double Cube::getSurfaceArea() {
    return 6 * length_ * length_;
}

void Cube::setLength(double length) {
    length_ = length;
}   