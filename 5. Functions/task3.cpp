#include <iostream>

using namespace std;

unsigned int digitCount(int num) {
    unsigned int digitCount = 0;

    while (num != 0) {
        num /= 10;
        digitCount++;
    }

    return digitCount;
}

int main() {
    cout << digitCount(78965735) << endl;
    cout << digitCount(78) << endl;
}