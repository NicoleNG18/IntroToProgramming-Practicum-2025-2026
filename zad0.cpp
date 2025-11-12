

#include <iostream>

void decimalToBinary(int n) {
    if (n == 0) {
        std::cout << 0;
        return;
    }

    int power = 1;
    while (power <= n / 2) {
        power *= 2;
    }

    while (power > 0) {
        if (n >= power) {
            std::cout << 1;
            n -= power;
        }
        else {
            std::cout << 0;
        }
        power /= 2;
    }
}

int main() {
    int n;
    std::cout << "Decimal to binary: ";
    std::cin >> n;
    decimalToBinary(n);
    return 0;
}
