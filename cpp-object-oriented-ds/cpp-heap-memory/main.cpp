#include <iostream>

int main()
{
    /*
    * The code allocates 2 chunks of memory
    - Memory to store an integer pointer on the stack
    - Memory to store an integer on the heap
    */
    int *numPtr = new int;

    // Checks
    std::cout << "*numPtr: " << *numPtr << std::endl;
    std::cout << "numPtr: " << numPtr << std::endl;
    std::cout << "&numPtr: " << &numPtr << std::endl;

    *numPtr = 42;
    std::cout << "*numPtr assigned 42" << std::endl;

    std::cout << "*numPtr: " << *numPtr << std::endl;
    std::cout << "numPtr: " << numPtr << std::endl;
    std::cout << "&numPtr: " << &numPtr << std::endl;
    return 0;
}