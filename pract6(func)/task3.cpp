#include <iostream>
bool isLeapYear(unsigned year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
bool correctDate (unsigned day, unsigned month, unsigned year)
{
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if (day <= 31)
        {
            return true;
        }
        break;

    case 4: case 6: case 9: case 11:
        if (day <= 30)
        {
            return true;
        }
        break;
    case 2:
        if (day <= 29 && isLeapYear(year))
        {
            return true;
        }
        if (day <= 28)
        {
            return true;
        }
    }

}
int main ()
{
    unsigned dd;
    std::cin >> dd;
    if (dd < 1 || dd > 31)
    {
        while (dd < 1 || dd > 31)
        {
            std::cout << "Enter valid date: ";
            std::cin >> dd;
        }
    }
    unsigned mm;
    std::cin >> mm;
    if (mm < 1 || mm > 12)
    {
        while (mm < 1 || mm > 12)
        {
            std::cout << "Enter valid month: ";
            std::cin >> mm;
        }
    }
    unsigned yy;
    std::cin >> yy;
    if (yy < 1)
    {
        while (yy < 1)
        {
            std::cout << "Enter valid year: ";
            std::cin >> yy;
        }
    }
    std::cout << std::boolalpha << correctDate(dd, mm, yy);
}