#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    int temp = a;
    a = b;
    b = temp;

    cout << "first = " << a << endl;
    cout << "second = " << b << endl;
}