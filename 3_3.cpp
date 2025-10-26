#include <iostream>

int main ()
{
    int year;
    std::cout << "Please enter value for year " << std::endl;
    std::cin >> year;

    if (year % 4 == 0 && year % 100 !=0 || year % 400 == 0) std::cout << "Leap year. " << std::endl;
    else std::cout << "Not a leap year. " << std::endl; 



    return 0;
}