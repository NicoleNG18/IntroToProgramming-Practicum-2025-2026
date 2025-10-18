

#include <iostream>
#include <chrono>

int main()
{
    int month;
    std::cin >> month;
    if
        (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        std::cout << "31";
    }
    else if
        (month == 4 || month == 6 || month == 9 || month == 11)
    {
        std::cout << "30";
    }
    else if (month == 2)
    {
        int year;
        std::cin >> year;
        if (year%4==0 && year%100!=0 || year%400==0)
        {
            std::cout << "29";
        }
        else
        {
            std::cout << "28";
        }
    }
}



