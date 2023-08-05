#include <iostream>
#include "number.h"


int main(){

    Number n1(22);
    std::cout << "n1: " << n1 << '\n';
    std::cout << "n1 + 2: " << (n1 + 2) << '\n';
    std::cout << "2 + n1: " << (2 + n1) << '\n';
    std::cout << "42 - n1: " << (42 - n1) << '\n';

    return 0;
}