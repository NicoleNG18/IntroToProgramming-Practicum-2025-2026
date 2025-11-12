

#include <iostream>
#include <cmath>
#include <iomanip>

double trianglePerimeter(int x1, int y1, int x2, int y2, int x3, int y3) {
    double a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    double c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));

    return a + b + c;
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double perimeter = trianglePerimeter(x1, y1, x2, y2, x3, y3);
    std::cout << std::fixed << std::setprecision(2) << perimeter << std::endl;
    return 0;
}
