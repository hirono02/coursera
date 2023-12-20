#include <iostream>
int main() {
    int *p, *q;
    p = new int;
    q = p;
    *q = 8;
    std::cout << *p << std::endl;
    // 8


    q = new int;
    *q = 9;
    std::cout << *p << std::endl;
    std::cout << *q << std::endl;
    // 8
    // 9 
    return 0;
}