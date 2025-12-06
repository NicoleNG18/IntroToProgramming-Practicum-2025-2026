#include <iostream>
int main ()
{
    unsigned int year;
    std:: cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            std::cout << "yes";
        }
    else
    {
        std::cout << "no";
    }
}