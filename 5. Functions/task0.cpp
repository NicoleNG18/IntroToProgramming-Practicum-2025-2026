#include <iostream>

using namespace std;

void decimalToBinary(unsigned int decimal) {
    if (decimal > 1) {
        decimalToBinary(decimal / 2);
    }

    cout << (decimal % 2);
}

int main() {
    unsigned int decimal;
    cout << "Enter a non-negative integer: ";
    cin >> decimal;

    decimalToBinary(decimal);
    cout << endl;
}