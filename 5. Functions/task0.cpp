#include <iostream>

using namespace std;

unsigned long long int decimalToBinary(unsigned int decimal) {
    if (decimal > 1) {
        decimalToBinary(decimal / 2);
    }

    unsigned long long int binary = 0;
    unsigned long long int tenPowI = 1;

    for (unsigned int i = 1; decimal > 0; i++) {
        binary += (decimal % 2) * tenPowI;
        decimal /= 2;
        tenPowI *= 10;
    }

    return binary;
}

int main() {
    unsigned int decimal;
    cout << "Enter a non-negative integer: ";
    cin >> decimal;

    cout << decimalToBinary(decimal) << endl;
}