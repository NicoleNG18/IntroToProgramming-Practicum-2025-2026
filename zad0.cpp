

#include <iostream>

int main()
{
    int a, b;
    std::cout << "Enter two numbers a, b: ";
    std::cin >> a >> b;

    std::cout << ((a > b) ? a : b) << std::endl;

}

