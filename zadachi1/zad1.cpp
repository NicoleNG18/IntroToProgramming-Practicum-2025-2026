

#include <iostream>

int main()
{
    std::cout << "Hello, C++\n";

    double height, width;
    std::cout << "Enter height and width of the rectangle: ";
    std::cin >> height;
    std::cin >> width;
    std::cout << "Perimeter = " << 2 * (height + width) << std::endl;
    std::cout << "Area = " << height * width;
}
