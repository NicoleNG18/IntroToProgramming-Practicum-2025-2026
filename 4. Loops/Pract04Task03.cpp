#include <iostream>

int main() {
    unsigned num1, num2;
    std::cin >> num1 >> num2;

    if (num1 < num2) {
        unsigned help = num1;
        num1 = num2;
        num2 = help;
    }

    while (num2 != 0) {
        unsigned int remaining = num1 % num2;
        num1 = num2;
        num2 = remaining;
    }
    std::cout << num1;
}