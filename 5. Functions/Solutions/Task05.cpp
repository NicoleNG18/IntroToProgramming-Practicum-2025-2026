#include <iostream>

unsigned calculateRadius(unsigned x1, unsigned y1)
{
    return x1 * x1 + y1 * y1;
}

bool areOnTheSameCircle(unsigned firstX, unsigned firstY, unsigned secondX, unsigned secondY) {
    // Сравняваме квадратите на радиусите
    unsigned firstRadiusSq= calculateRadius(firstX, firstY);
    unsigned secondRadiusSq = calculateRadius(secondX, secondY);

    return firstRadiusSq == secondRadiusSq;
}

int main() {
    unsigned a1, b1, a2, b2;
    std::cout << "Enter coordinates of the first point (a1 b1): ";
    std::cin >> a1 >> b1;
    std::cout << "Enter coordinates of the second point (a2 b2): ";
    std::cin >> a2 >> b2;

    if (areOnTheSameCircle(a1, b1, a2, b2)) {
        std::cout << "The points lie on the same circle centered at (0,0)." << std::endl;
    } else {
        std::cout << "The points do NOT lie on the same circle centered at (0,0)." << std::endl;
    }
}
