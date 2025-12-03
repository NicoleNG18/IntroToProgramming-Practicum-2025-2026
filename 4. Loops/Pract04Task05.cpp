#include <iostream>

int main() {
    unsigned long long numberInTwoSystem;
    std::cin >> numberInTwoSystem;

    unsigned int result = 0;
    unsigned int base = 1;

    while (numberInTwoSystem > 0) {
        unsigned int lastdigit = numberInTwoSystem % 10;
        result = result + lastdigit * base;
        numberInTwoSystem /= 10;
        base *= 2;
    }
    std::cout << result;
}