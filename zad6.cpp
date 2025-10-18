

#include <iostream>

int main()
{
    int input, year, days;
    std::cout << "Enter a number (1-12): ";
    std::cin >> input;

    switch (input) {
    case 1: 
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        std::cout << "31"; break;
    case 2: std::cout << "Enter year: ";
        std::cin >> year;
        days = (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 29 : 28);
        std::cout << "Year: " << year << std::endl;
        std::cout << days;
         break;
    case 4:
    case 6: 
    case 9:
    case 11: 
        std::cout << "30"; break;
    default: std::cout << "Invalid input!";
    }

    std::cout << std::endl;
}
