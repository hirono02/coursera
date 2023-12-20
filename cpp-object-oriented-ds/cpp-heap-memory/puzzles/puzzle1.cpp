#include <iostream>

int main() {
    // NO new keyword, so it is all stack memory
    int i = 2, j = 4, k = 8;
    int *p = &i, *q = &j, *r = &k;

    k = i;
    std::cout << i << j << k << *p << *q << *r << std::endl;
    // 2 4 2 2 4 2

    p = q;
    std::cout << i << j << k << *p << *q << *r << std::endl;
    // 2 4 2 4 4 2

    *q = *r;
    std::cout << i << j << k << *p << *q << *r << std::endl;
    // 2 2 2 2 2 2
    return 0;
}