#include <iostream>
#include <cmath>

using namespace std;

double distance(int x1, int y1, int x2, int y2) {
    int dx = x1 - x2;
    int dy = y1 - y2;
    return sqrt(dx * dx + dy * dy);
}

double triangleParameter(int xA, int yA, int xB, int yB, int xC, int yC) {
    double a = distance(xB, yB, xC, yC);
    double b = distance(xA, yA, xC, yC);
    double c = distance(xA, yA, xB, yB);

    return a + b + c;
}

int main() {
    cout << triangleParameter(0, 0, 3, 0, 0, 4) << endl;
    cout << triangleParameter(1, 1, 4, 5, 6, 2) << endl;
}