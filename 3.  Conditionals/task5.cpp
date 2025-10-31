#include <iostream>

using namespace std;

int main() {
    double x, y;

    cout << "Enter coordinates: ";
    cin >> x >> y;

    const double tolerance = 1e-6;
    bool isXZero = (x >= -tolerance && x <= tolerance);
    bool isYZero = (y >= -tolerance && y <= tolerance);

    if (isXZero) {
        if (isYZero) {
            cout << "At start" << endl;
        } else {
            cout << "On y-axis" << endl;
        }
    } else if (x > tolerance) {
        if (isYZero) {
            cout << "On x-axis" << endl;
        } else if (y > tolerance) {
            cout << "In first quadrant" << endl;
        } else {
            cout << "In fourth quadrant" << endl;
        }
    } else {
        if (isYZero) {
            cout << "On x-axis" << endl;
        } else if (y > tolerance) {
            cout << "In second quadrant" << endl;
        } else {
            cout << "In third quadrant" << endl;
        }
    }
}