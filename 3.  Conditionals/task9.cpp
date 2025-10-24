#include <iostream>

using namespace std;

int main() {
    unsigned int squareLength;
    double x, y;

    cout << "Enter square length and positive coordinates: ";
    cin >> squareLength >> x >> y;
    if (squareLength < 1 || x < 0 || y < 0) {
        cout << "Error! Invalid input." << endl;
    } else {
        unsigned int xSquareIndex = (unsigned int)(x / squareLength);
        unsigned int ySquareIndex = (unsigned int)(y / squareLength);

        if (xSquareIndex % 2 == 0) {
            if (ySquareIndex % 2 == 0) {
                cout << "black" << endl;
            } else {
                cout << "white" << endl;
            }
        } else {
            if (ySquareIndex % 2 == 0) {
                cout << "white" << endl;
            } else {
                cout << "black" << endl;
            }
        }
    }
}