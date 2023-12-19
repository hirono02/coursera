#include <iostream>

int main() {
    int num = 7;

    std::cout << "Value: " << num << std::endl; // -> Value of the numebr
    std::cout << "Address: " << &num << std::endl;  // -> Address of the stack memory address 
    // Stack memory always starts from high addresses and grows down
    

    return 0;
}