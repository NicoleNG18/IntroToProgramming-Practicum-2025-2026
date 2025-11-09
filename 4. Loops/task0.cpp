#include <iostream>

using namespace std;

int main() {
    int num;

    do {
        cout << "Enter a natural number: ";
        cin >> num;
    } while (num <= 0);

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
        cout << "$";
        }

        cout << endl;
    }
}