#include <iostream>

int main () {

    unsigned int code;

    std::cin >> code;

    unsigned int lastdigits = code % 1000;

    std::cout << "*****" << lastdigits;
}