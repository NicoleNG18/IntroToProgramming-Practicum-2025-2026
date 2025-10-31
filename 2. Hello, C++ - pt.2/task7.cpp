#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << (num * ((num >= 0) * 2 - 1)) << endl;
}