#include <iostream>

int main () {

    unsigned int number;

    std::cin >> number;

    unsigned int units = number % 10, tens = (number / 10) % 10,
    hundreds = number / 100, sum = units + tens + hundreds;

    std::cout << "units = " << units << std::endl
    << "tens = " << tens << std::endl
    << "hundreds = " << hundreds << std::endl
    << "sum = " << sum << std::endl;

}