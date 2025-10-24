#include <iostream>

using namespace std;

int main() {
    unsigned int num1, num2;

    cout << "Enter 2 positive two-digit integers: ";
    cin >> num1 >> num2;
    if (num1 < 10 || num1 > 99 || num2 < 10 || num2 > 99) {
        cout << "Error! Invalid input." << endl;
    } else {
        unsigned int newUnits = num2 % 10;
        unsigned int newTens = num2 / 10;
        unsigned int newHundreds = num1 % 10;
        unsigned int newThousands = num1 / 10;

        unsigned int newNum = newUnits + newTens * 10 + newHundreds * 100 + newThousands * 1000;

        bool increasing = newHundreds > newThousands && newTens > newHundreds && newUnits > newTens;

        cout << newNum << " - " << (increasing ? "YES" : "NO") << endl;
    }
}