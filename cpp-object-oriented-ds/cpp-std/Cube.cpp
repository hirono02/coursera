#include "Cube.h"

// functions name need to include the name of the class where they're defined in
double uiuc::Cube::getVolume() {
    return length_ * length_ * length_;
}

double uiuc::Cube::getSurfaceArea() {
    return 6 * length_ * length_;
}

void uiuc::Cube::setLength(double length) {
    length_ = length;
}   