#include <iostream>

using namespace std;

int main() {
    unsigned int hundreds, tens, units;

    cout << "Enter 3 digits: ";
    cin >> hundreds >> tens >> units;

    cout << (hundreds * 100 + tens * 10 + units) << endl;
}