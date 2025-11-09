#include <iostream>

using namespace std;

int main() {
    unsigned int n;
    do {
        cout << "Enter a natural number (n >= 2): ";
        cin >> n;
    } while (n < 2);

    int max = INT32_MIN, secondMax = INT32_MIN;
    for (unsigned int i = 1; i <= n; i++) {
        int currentNum;
        cout << "Enter number " << i << ": ";
        cin >> currentNum;

        if (currentNum > max) {
            secondMax = max;
            max = currentNum;
        }
    }

    cout << max << " " << secondMax << endl;
}