#include <iostream>

using namespace std;

int main() {
    int num;
    unsigned int position;

    cout << "Enter an integer and a position: ";
    cin >> num >> position;

    for (unsigned int i = 1; i < position; i++) {
        num /= 10;
    }

    if (num > 0) {
        cout << (num % 10) << endl;
    } else if (num < 0) {
        cout << -(num % 10) << endl;
    } else {
        cout << "There is no digit on that index." << endl;
    }
}