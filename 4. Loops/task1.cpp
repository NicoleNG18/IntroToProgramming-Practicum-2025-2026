#include <iostream>

using namespace std;

int main() {
    unsigned int num;

    do {
        cout << "Enter a natural number: ";
        cin >> num;
    } while (num == 0);

    if (num == 1) {
        cout << "not prime" << endl;
    } else {
        bool isPrime = true;
        for (unsigned int i = 2; i <= num / i; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        cout << (isPrime ? "prime" : "not prime") << endl;
    }
}