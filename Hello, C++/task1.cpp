#include <iostream>

using namespace std;

int main() {
    double length, width;

    cout << "Enter length and width: ";
    cin >> length >> width;

    cout << "Perimeter = " << 2 * (length + width) << endl;
    cout << "Area = " << (length * width) << endl;
}