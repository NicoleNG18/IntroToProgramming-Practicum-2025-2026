#include <iostream>

int main () {

    unsigned int number;

    std::cin >> number;

    unsigned int units = number % 10;
    unsigned int tens = number / 10 % 10;
    unsigned int hundreds = number / 100 % 10;
    unsigned int thousands = number / 1000 % 10;

    bool expr = units == thousands && tens == hundreds;

    std::cout << std::boolalpha;
    std::cout << expr;

    // std::cout << std::boolalpha <<(units == thousands && tens == hundreds);

}
