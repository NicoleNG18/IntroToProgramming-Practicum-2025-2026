#include <iostream>

using namespace std;

int main() {
    unsigned int n;
    do {
        cout << "Enter a natural number: ";
        cin >> n;
    } while (n == 0);

    for (unsigned int i = 1; i <= n - 1; i++) {
        cout << "x = " << i << " y = " << (n - i) << endl;
    }
}