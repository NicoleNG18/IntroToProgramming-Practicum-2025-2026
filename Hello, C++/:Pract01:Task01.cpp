#include <iostream>

int main () {

    std::cout << "Hello, C++" << std::endl;

    unsigned int apples, pears, bananas;

    std::cin >> apples >> pears >> bananas;

    std::cout << "Don't forget to buy " << apples << " apples, "
    << pears << " pears and " << bananas << " bananas!" <<std::endl;
}