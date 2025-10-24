// yh101025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int number;

    std::cin >> number;

    std::cout << ((number < 0) * -2 * number) + number;
}

