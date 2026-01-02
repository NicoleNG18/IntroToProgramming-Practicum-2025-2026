#include <iostream>

using namespace std;

void drawDiamondLine(unsigned int i, unsigned int num) {
    for (unsigned int j = 0; j < num - i; j++) {
        cout << " ";
    }

    for (unsigned int j = 0; j < (i - 1) * 2 + 1; j++) {
        cout << "*";
    }

    for (unsigned int j = 0; j < num - i; j++) {
        cout << " ";
    }

    cout << endl;
}

void drawDiamond(unsigned int num) {
    if (num == 0) {
        return;
    }

    for (unsigned int i = 1; i < num; i++) {
        drawDiamondLine(i, num);
    }

    for (unsigned int i = 0; i < num * 2 - 1; i++) {
        cout << "*";
    }
    cout << endl;

    for (unsigned int i = num - 1; i >= 1; i--) {
        drawDiamondLine(i, num);
    }

    cout << endl;
}
int main() {
    drawDiamond(4);
}