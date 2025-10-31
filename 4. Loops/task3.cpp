#include <iostream>

using namespace std;

int main() {
    unsigned int num1, num2;

    do {
        cout << "Enter two natural numbers: ";
        cin >> num1 >> num2;
    } while (num1 == 0 || num2 == 0);

    while (num2 > 0) {
        unsigned int remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    cout << num1 << endl;
}