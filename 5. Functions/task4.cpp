#include <iostream>

using namespace std;

unsigned int sortedDigitsDesc(unsigned int num) {
    unsigned int sorted = 0;

    for (int digit = 9; digit >= 0; digit--) {
        unsigned int numCopy = num;
        unsigned int digitEncounters = 0;

        while (numCopy > 0) {
            if (numCopy % 10 == digit) {
                digitEncounters++;
            }

            numCopy /= 10;
        }

        for (unsigned int i = 0; i < digitEncounters; i++) {
            sorted *= 10;
            sorted += digit;
        }
    }

    return sorted;
}

int main() {
    cout << sortedDigitsDesc(463211) << endl;
    cout << sortedDigitsDesc(758701732) << endl;
}