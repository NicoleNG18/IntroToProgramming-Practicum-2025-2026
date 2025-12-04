#include <iostream>

bool isLeapYear(int year)
{
    return (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));
}


bool isValidDate(int dd, int mm, int yyyy)
{
    if (yyyy < 1) 
       return false;
       
    if (mm < 1 || mm > 12) 
       return false;
       
    if (dd < 1) 
       return false;

    int daysInMonth;

    switch(mm)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31; break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30; break;
        case 2:
            daysInMonth = isLeapYear(yyyy) ? 29 : 28; break;
        default:
            return false;
    }

    if (dd > daysInMonth)
       return false;

    return true;
}

int main()
{
    int day, month, year;
    std::cout << "Enter date(dd mm yyyy): ";
    std::cin >> day >> month >> year;

    if (isValidDate(day, month, year))
        std::cout << "Valid";
    else
        std::cout << "Invalid";
}
