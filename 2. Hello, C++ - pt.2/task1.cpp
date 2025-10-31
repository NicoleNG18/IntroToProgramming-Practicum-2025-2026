#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter 2 integers: ";
    cin >> a >> b;

    cout << boolalpha << (b % a == 0) << endl;
}