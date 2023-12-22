// std::vector is a standard library class that provides the functionality of a dynamic array with
// a "templated" type
#include <vector>   // Defined in
#include <iostream>

int main() {

    std::vector<int> v; // Initialization of an vector of ints
    v.push_back(2);    // Append to back of array 
    v.push_back(3);    // Append to back of array
    v.push_back(5);    // Append to back of array
    v[0];   // Access specific element
    std::cout << "Size: " << v.size() << std::endl;   // Number of elements

    std::cout << v[0] << std::endl;
    std::cout << v[1] << std::endl;
    std::cout << v[2] << std::endl;

    std::cout << "---------------------------" << std::endl;

    std::vector<int> v2;
    for (int i = 0; i < 100; i++) {
        v2.push_back(i * i);
    }
    std::cout << v2[12] << std::endl;
    return 0;

}