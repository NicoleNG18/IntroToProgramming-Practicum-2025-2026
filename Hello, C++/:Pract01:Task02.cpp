#include <iostream>

int main() {

    double length, width;

    std::cin >> length >> width;

    double perimeter = 2*length + 2*width;
    double area = length * width;

    std::cout << "Perimeter = " << perimeter <<std::endl
    << "Area = " << area << std::endl;
}