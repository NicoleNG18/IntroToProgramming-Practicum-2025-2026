// yh101025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int inputSeconds, minutes, hours, days;
    
    std::cin >> inputSeconds;

    days = inputSeconds / 86400;
    inputSeconds %= 86400;
    hours = inputSeconds / 3600;
    inputSeconds %= 3600;
    minutes = inputSeconds / 60;
    inputSeconds %= 60; 

    std::cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << inputSeconds << " seconds";
}

