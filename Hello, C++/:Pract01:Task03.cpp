#include <iostream>

int main () {

    double euros;

    std::cin >> euros;

    double dollars = euros * 1.1, yen = euros * 145;

    std::cout << "dollars = " << dollars << std::endl;
    std::cout << "yen = " << yen;
}