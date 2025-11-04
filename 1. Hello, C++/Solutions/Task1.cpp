#include <iostream>

int main()
{
    double width, height;

    std::cout << "Enter width: ";
    std::cin >> width;

    std::cout << "Enter height: ";
    std::cin >> height;

    double perimeter = 2 * (width + height);
    double area = width * height;

    std::cout << "Perimeter = " << perimeter << std::endl;
    std::cout << "Area = " << area << std::endl;
}