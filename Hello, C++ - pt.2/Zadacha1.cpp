// yh101025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int number1, number2;

    std::cin >> number1 >> number2;

    std::cout << std::boolalpha << (number1 % number2 == 0);
}

