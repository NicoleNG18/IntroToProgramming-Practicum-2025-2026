#include <iostream>
int main ()
{
    short int hundreds;
    std::cin >> hundreds;
    hundreds = (hundreds < 10) * hundreds;


    unsigned short int tens;
    std::cin >> tens;
    tens = (tens < 10) * tens;


    unsigned short int units;
    std::cin >> units;
    units = (units < 10) * units;



    std::cout << hundreds << tens << units << std::endl;
}