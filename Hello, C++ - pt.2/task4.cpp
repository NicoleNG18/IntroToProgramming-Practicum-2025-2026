#include <iostream>

using namespace std;

int main() {
    unsigned int num;

    cout << "Enter a positive integer with 4 digits: ";
    cin >> num;

    unsigned int units = num % 10;
    unsigned int tens = num / 10 % 10;
    unsigned int hundreds = num / 100 % 10;
    unsigned int thousands = num / 1000;

    cout << boolalpha << ((units == thousands) && (tens == hundreds)) << endl;
}