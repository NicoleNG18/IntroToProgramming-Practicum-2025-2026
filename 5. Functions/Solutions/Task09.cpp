#include <iostream>
#include <cmath>

double distance(double x1, double y1, double x2, double y2) {
    return std::sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

double trianglePerimeter(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3); 
    double c = distance(x3, y3, x1, y1);

    return a + b + c;
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    std::cout << "Enter coordinates of the first point (x1 y1): ";
    std::cin >> x1 >> y1;

    std::cout << "Enter coordinates of the second point (x2 y2): ";
    std::cin >> x2 >> y2;

    std::cout << "Enter coordinates of the third point (x3 y3): ";
    std::cin >> x3 >> y3;

    std::cout << "Perimeter of the triangle: " 
              << trianglePerimeter(x1, y1, x2, y2, x3, y3) << std::endl;
}
