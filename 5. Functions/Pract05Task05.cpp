#include <iostream>
#include <cmath>

void coordinates (int x1, int y1, int x2, int y2) {
    int r1 = sqrt(x1 * x1 + pow(y1, 2));
    int r2 = sqrt(x2 * x2 + y2 * y2);
    if (r1 == r2) {
        std::cout << "yes";
    } else {
        std::cout << "no";
    }
}

int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    coordinates(x1, y1, x2, y2);
}