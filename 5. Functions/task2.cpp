#include <iostream>

using namespace std;

unsigned int mirroredNum(unsigned int num) {
    unsigned int mirrored = 0;

    while (num > 0) {
        mirrored *= 10;
        mirrored += num % 10;

        num /= 10;
    }

    return mirrored;
}

int main () {
    cout << mirroredNum(288) << endl;
    cout << mirroredNum(210) << endl;
}