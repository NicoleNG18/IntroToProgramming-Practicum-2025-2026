#include <iostream>

using namespace std;

unsigned int specificDigitCount(unsigned int num, int digit) {
    unsigned int count = 0;

    while (num > 0) {
        if (num % 10 == (unsigned int)digit) {
            count++;
        }

        num /= 10;
    }

    return count;
}

unsigned int appendDigitNTimes(unsigned int num, int digit, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        num *= 10;
        num += (unsigned int)digit;
    }

    return num;
}

unsigned int sortedDigitsDesc(unsigned int num) {
    unsigned int sorted = 0;

    for (int digit = 9; digit >= 0; digit--) {
        unsigned int thisDigitCount = specificDigitCount(num, digit);

        sorted = appendDigitNTimes(sorted, digit, thisDigitCount);
    }

    return sorted;
}

int main() {
    cout << sortedDigitsDesc(463211) << endl;
    cout << sortedDigitsDesc(758701732) << endl;
}