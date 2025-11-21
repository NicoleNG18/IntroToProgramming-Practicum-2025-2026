// Paola.zad6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    unsigned firstNum, secondNum;

    std::cin >> firstNum >> secondNum;

    unsigned Result = firstNum * secondNum;
    unsigned lastDigit = Result % 10;

    std::cout << "Prod: " << Result << std::endl;
    std::cout << "Last digit: " << lastDigit << std::endl;
    std::cout << "Is even: " << std::boolalpha << (lastDigit % 2 == 0) << std::endl;
}

