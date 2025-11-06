#include <iostream>

int main() {
    unsigned num1, num2;
    std::cin >> num1 >> num2;

    unsigned num1c = num1, num2c = num2; // копия
    //за да си запазя оригиналните числа за накрая

    if (num1c < num2c) {
        unsigned help = num1c;
        num1c = num2c;
        num2c = help;
    }

    while (num2c != 0) {
        unsigned int remaining = num1c % num2c;
        num1c = num2c;
        num2c = remaining;
    }
    unsigned gcd = num1c;

    unsigned lmc = (num1 * num2) / gcd;
    std::cout << lmc;
}