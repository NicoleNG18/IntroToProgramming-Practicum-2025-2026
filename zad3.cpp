

#include <iostream>

int main()
{
    unsigned int a, b, c;
    std::cout << "Enter three sides of triangle a, b, c: ";
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
}
