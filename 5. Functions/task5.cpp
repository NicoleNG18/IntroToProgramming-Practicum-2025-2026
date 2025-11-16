#include <iostream>

using namespace std;

bool arePointsOnSameCircle(int a, int b, int c, int d) {
    return (a * a + b * b) == (c * c + d * d);
}

int main() {
    cout << (arePointsOnSameCircle(3, 4, -3, -4) ? "yes" : "no") << endl;
    cout << (arePointsOnSameCircle(2, 5, 4, 5) ? "yes" : "no") << endl;
}