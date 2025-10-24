#include <iostream>

using namespace std;

int main() {
    unsigned int num;

    cout << "Enter a positive integer with 3 digits: ";
    cin >> num;

    unsigned int units = num % 10;
    unsigned int tens = num / 10 % 10;
    unsigned int hundreds = num / 100;
    unsigned int sum = units + tens + hundreds;

    cout << "units = " << units << endl;
    cout << "tens = " << tens << endl;
    cout << "hundreds = " << hundreds << endl;
    cout << "sum = " << sum << endl;
}