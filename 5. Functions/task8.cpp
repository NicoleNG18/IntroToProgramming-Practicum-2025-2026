#include <iostream>

using namespace std;

unsigned int mixNums(unsigned int num1, unsigned int num2) {
    unsigned int mixed = 0;

    bool num1Turn = true;

    while (num1 > 0 || num2 > 0) {
        if (num1Turn) {
            if (num1 > 0) {
                mixed *= 10;
                mixed += num1 % 10;
                num1 /= 10;
            }

            num1Turn = false;
        }

        if (!num1Turn) {
            if (num2 > 0) {
                mixed *= 10;
                mixed += num2 % 10;
                num2 /= 10;
            }

            num1Turn = true;
        }
    }

    return mixed;
}

int main() {
    cout << mixNums(123, 456) << endl;
    cout << mixNums(123, 45678) << endl;
    cout << mixNums(781, 0) << endl;
}