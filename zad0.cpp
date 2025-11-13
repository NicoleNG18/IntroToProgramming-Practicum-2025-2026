

#include <iostream>

long long decimalToBinary(int n) {
    if (n == 0) {
        return 0;
    }

    int power = 1;
    while (power <= n / 2) {
        power *= 2;
    }

    long long binary = 0;

    while (power > 0) {
        binary *= 10;
        if (n >= power) {
            binary += 1;
            n -= power;
        }
        power /= 2;
    }

    return binary;
}

int main() {
    int n;
    std::cout << "Decimal to binary: ";
    std::cin >> n;

    long long binary = decimalToBinary(n);
    std::cout << binary << std::endl;

    return 0;
}
