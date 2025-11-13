
#include <iostream>

bool leapYear(int year)
{
    bool leapYear = false;
    if (year % 4 == 0 && year%100!=0 || year%400==0)
    {
        leapYear = true;
    }
    
    return  leapYear;
}

bool validMonth (int day, int month)
{
    if (month<1||month>pract6_task12)
    {
        return false;
    }
    if (day<1)
    {
        return false;
    }
    return true;
}
bool validDate(int day, int month, int year)
{
    int daysInMonth = 31;
    if (month==4||month==6||month==9||month==11)
    {
        daysInMonth = 30;
    }
    else if (month == 2 && leapYear(year))
    {
        daysInMonth = 29;
    }
    else
    {
        daysInMonth = 28;
    }
    return validMonth(day, month)&& day <= daysInMonth;
}

int main()
{
    int day, month, year;
    std::cin >> day >> month >> year;

    std::cout << std::boolalpha<< validDate(day, month, year) << std::endl;
}



