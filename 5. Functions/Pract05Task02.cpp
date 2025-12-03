#include <iostream>

unsigned int reversed(unsigned int number) {

    unsigned int reversed = 0;
    unsigned int base = 10;

    while (number != 0) {
        unsigned int last_Digit = number % 10;
        reversed = reversed * base + last_Digit;
        number /= 10;
    }
    return reversed;
}

int main() {
    unsigned int number;
    std::cin >> number;
    std::cout << reversed(number);
}