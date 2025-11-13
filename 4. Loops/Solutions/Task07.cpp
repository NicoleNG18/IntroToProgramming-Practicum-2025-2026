#include <iostream>

int main()
{
    std::cout << "Enter number: ";
    unsigned number;
    std::cin >> number;

    std::cout << "All natural solutions (x, y) for x + y = " << number << " are: " << std::endl;

    for (unsigned x = 1; x < number; x++)
    {
        unsigned y = number - x;
        std::cout << "x = " << x << " y = " << y << "" << std::endl;
    }
}
