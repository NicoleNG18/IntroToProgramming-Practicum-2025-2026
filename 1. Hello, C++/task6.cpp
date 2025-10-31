#include <iostream>

using namespace std;

int main() {
    unsigned int a, b;

    cout << "Enter two positive integers with 2 digits: ";
    cin >> a >> b;

    unsigned int prod = a * b;

    cout << "Prod: " << prod << endl;
    cout << "Last digit: " << (prod % 10) << endl;
    cout << boolalpha << "Is odd: " << (prod % 2 == 1) << endl;
}