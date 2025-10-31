#include <iostream>

using namespace std;

int main() {
    unsigned int code;

    cout << "Enter a code with 8 digits: ";
    cin >> code;

    unsigned int d8 = code % 10;
    unsigned int d7 = code / 10 % 10;
    unsigned int d6 = code / 100 % 10;

    cout << "*****" << d6 << d7 << d8 << endl;
}