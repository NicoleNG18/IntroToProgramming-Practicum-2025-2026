#include <iostream>

using namespace std;

int main() {
    unsigned int n;
    do {
        cout << "Enter a natural number (n >= 2): ";
        cin >> n;
    } while (n < 2);

    unsigned int oneToNSum = 0;
    for (unsigned int i = 1; i <= n; i++) {
        oneToNSum += i;
    }

    for (unsigned int i = 0; i < n - 1; i++) {
        unsigned int currentNum;
        cout << "Enter a number: ";
        cin >> currentNum;

        oneToNSum -= currentNum;
    }

    cout << oneToNSum << endl;
}