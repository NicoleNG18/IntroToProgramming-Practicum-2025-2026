#include <iostream>

int main() {
    unsigned int number, position;
    std::cin >> number >> position;

    unsigned int digits = 0, copy = number;

    while (copy > 0) {
        copy /= 10;
        digits++;
    }

    if (position > digits) {
        std::cout << "Don't have digit on index " << position;
    } else {
        for (unsigned int removing = 1; removing < position; removing++) {
            number /= 10;
        }
        std::cout << number % 10;
    }
}