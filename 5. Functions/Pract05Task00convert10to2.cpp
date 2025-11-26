#include <iostream>

long long convert (unsigned int number) {
    long long result = 0;
    long long base = 1;

    while (number != 0) {
        int last_digit = number % 2;
        result += last_digit * base;
        base *= 10;
        number /= 2;
    }
    return result;
}

int main() {
    unsigned int number;
    std::cin >> number;

    std::cout << convert(number);
}