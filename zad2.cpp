

#include <iostream>

int main()
{
    unsigned int year;
    std::cout << "Enter year: ";
    std::cin >> year;

    if ((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
}
