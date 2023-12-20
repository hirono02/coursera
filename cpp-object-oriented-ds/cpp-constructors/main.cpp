#include "Cube.h"
#include "Cube.cpp"
#include <iostream>

void foo(uiuc::Cube cube) {
    
}

int main() {
    std::cout << "-------------------Testing Default Constructors-----------------" << std::endl;
    uiuc::Cube c;
    std::cout << "Default Constructor Volume: " << c.getVolume() << std::endl;

    uiuc::Cube c2(2);
    std::cout << "One Argument Constructor Volume: " << c2.getVolume() << std::endl;

    std::cout << "-------------------Testing Copy Constructor-----------------" << std::endl;
    foo(c);

    uiuc::Cube myCube = c;
    std::cout << "-------------------Testing Assignment Operator-----------------" << std::endl;
    c = c2;
    return 0;
}