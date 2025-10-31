#include <iostream>

using namespace std;

int main() {
    unsigned int n;

    cout << "Enter a natural number: ";
    cin >> n;

    for (unsigned int i = 1; i <= n; i++) {
        for(unsigned int j = 1; j <= n; j++) {
            if (j < i) {
                cout << "-";
            } else if (j == i) {
                cout << "0";
            } else {
                cout << "+";
            }
        }
        cout << endl;
    }
}