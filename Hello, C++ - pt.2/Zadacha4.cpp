// yh101025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int num, thousands, hundreds, tens, units;
    
    std::cin >> num;

    units = num % 10;
    num /= 10;
    tens = num % 10;
    num /= 10;
    hundreds = num % 10;
    num /= 10;
    thousands = num % 10;
    num /= 10;

    std::cout << std::boolalpha << (thousands == units && hundreds == tens);
}

