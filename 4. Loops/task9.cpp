#include <iostream>

using namespace std;

int main() {
    unsigned int num;
    do {
        cout << "Enter a natural number: ";
        cin >> num;
    } while (num == 0);

    unsigned int maxOccurances = 0, maxOccurancesDigit = 0;
    for (unsigned int i = 0; i <= 9; i++) {
        unsigned int numCopy = num, occurances = 0;

        while (numCopy > 0) {
            if (numCopy % 10 == i) {
                occurances++;
            }
            numCopy /= 10;
        }

        if (occurances >= maxOccurances) {
            maxOccurances = occurances;
            maxOccurancesDigit = i;
        }
    }

    cout << maxOccurancesDigit << endl;
}