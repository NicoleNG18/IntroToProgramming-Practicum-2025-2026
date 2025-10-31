#include <iostream>

using namespace std;

int main() {
    unsigned int num;

    do {
        cout << "Enter a natural number: ";
        cin >> num;
    } while (num == 0);

    for (unsigned int i = 1; i <= num; i++) {
        for (unsigned int j = 1; j <= i; j++) {
        cout << "$";
        }

        cout << endl;
    }
}