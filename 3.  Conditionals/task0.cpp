#include <iostream>

using namespace std;

int main() {
    double a, b;

    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    cout << (a <= b ? a : b) << endl;
}