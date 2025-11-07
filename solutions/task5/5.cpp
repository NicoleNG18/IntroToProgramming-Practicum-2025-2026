#include <iostream>

long long sortDigits(long long n) {
    long long result = 0;
    long long multiplier = 1;

    long long temp = n, digitCount = 0;
    while (temp > 0) {
        temp /= 10;
        digitCount++;
    }

    for (int i = 0; i < digitCount; i++) {
        long long temp = n, maxDigit = -1;
        while (temp > 0) {
            int d = temp % 10;
            if (d > maxDigit) maxDigit = d;
            temp /= 10;
        }

        long long newN = 0, pow10 = 1;
        bool removed = false;
        while (n > 0) {
            int d = n % 10;
            n /= 10;
            if (d == maxDigit && !removed) {
                removed = true;
                continue;
            }
            newN += d * pow10;
            pow10 *= 10;
        }
        n = newN;

        result = result * 10 + maxDigit;
    }

    return result;
}

int main() {
    long long n = 463211;
    long long n1 = 758701732;
    std::cout << sortDigits(n) << std::endl;
    std::cout << sortDigits(n1) << std::endl;
}

