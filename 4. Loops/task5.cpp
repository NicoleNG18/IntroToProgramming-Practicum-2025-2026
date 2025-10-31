#include <iostream>

using namespace std;

int main() {
    unsigned long long binary;

    bool isBinary;
    do {
        isBinary = true;

        cout << "Enter a binary number: ";
        cin >> binary;

        unsigned long long binaryCopy = binary;
        while (binaryCopy > 0) {
            if (binaryCopy % 10 != 0 && binaryCopy % 10 != 1) {
                isBinary = false;
                break;
            }

            binaryCopy /= 10;
        }
    } while (!isBinary);

    unsigned int decimal = 0;
    for (int i = 0 ; binary > 0 ;i++, binary /= 10) {
        if (binary % 10 == 1) {
            unsigned int twoPowI = 1;
            for (int j = 0; j < i; j++) {
                twoPowI *= 2;
            }

            decimal += twoPowI;
        }
    }

    cout << decimal << endl;
}