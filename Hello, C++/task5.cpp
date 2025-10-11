#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << boolalpha << (num % 2 == 0) << endl;
}