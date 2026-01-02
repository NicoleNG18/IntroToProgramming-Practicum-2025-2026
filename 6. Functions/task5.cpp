#include <iostream>

using namespace std;

unsigned int reversedDigits(unsigned int num) {
    unsigned int reversed = 0;

    while (num > 0) {
        reversed *= 10;
        reversed += num % 10;

        num /= 10;
    }

    return reversed;
}

unsigned int digitCount(unsigned int num) {
    if (num == 0) {
        return 1;
    }

    unsigned int count = 0;

    while (num > 0) {
        count++;
        num /= 10;
    }

    return count;
}

unsigned int concat(unsigned int a, unsigned int b) {
    unsigned int trailingZeroesB = digitCount(b) - digitCount(reversedDigits(b));
    b = reversedDigits(b);

    while (b > 0) {
        a *= 10;
        a += b % 10;

        b /= 10;
    }

    for (unsigned int i = 0; i < trailingZeroesB; i++) {
        a *= 10;
    }

    return a;
}

unsigned int concatWithRevrsed(unsigned int num) {
    return concat(reversedDigits(num), num);
}

int main() {
    cout << concatWithRevrsed(5678) << endl;
    cout << concatWithRevrsed(100) << endl;
}