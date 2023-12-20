#include <iostream>

int main() {
    int *x = new int;
    int &y = *x;
    y = 4; 

    std::cout << "&x: " << &x << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "*x: " << *x << std::endl;

    std::cout << "&y: " << &y << std::endl;
    std::cout << "y: " << y << std::endl;
    // std::cout << "*y: " << *y << std::endl;
    // Can't dereference a non-pointer
    
}