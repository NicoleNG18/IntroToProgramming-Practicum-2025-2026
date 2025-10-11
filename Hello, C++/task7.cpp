#include <iostream>

using namespace std;

int main() {
    unsigned int code;

    cout << "Enter a code with 8 digits: ";
    cin >> code;

    cout << "*****" << (code % 1000) << endl;
}