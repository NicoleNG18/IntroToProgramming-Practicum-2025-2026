#include <iostream>

int main() 
{
    unsigned year;
    std::cout << "Enter year: ";
    std::cin >> year;

    bool isLeap = ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) );

    std::cout << "Is leap year: " << (isLeap ? "Yes" : "No") << std::endl;
}
