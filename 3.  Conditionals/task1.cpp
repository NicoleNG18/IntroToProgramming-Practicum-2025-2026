#include <iostream>

using namespace std;

int main() {
    int x, a, b;

    cout << "Enter 3 integers: ";
    cin >> x >> a >> b;

    cout << boolalpha << (x >= a && x <= b) << endl;
}