

#include <iostream>

bool onSameCircle(int a, int b, int c, int d) {
    int rad1_squared = a * a + b * b;
    int rad2_squared = c * c + d * d;

    return rad1_squared == rad2_squared;
}

int main() {
    int a, b, c, d;
    std::cout << "Enter coordinates of (a b): ";
    std::cin >> a >> b;
    std::cout << "Enter coordinates of (c d): ";
    std::cin >> c >> d;

    if (onSameCircle(a, b, c, d))
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
    return 0;
}
