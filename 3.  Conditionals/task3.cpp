#include <iostream>

using namespace std;

int main() {
    double a, b, c;

    cout << "Enter 3 positive numbers: ";
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Error! Invalid input." << endl;
    } else {
        if (a + b > c && b + c > a && a + c > b) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}