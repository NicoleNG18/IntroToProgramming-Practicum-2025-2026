// Paola.zad4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    unsigned number;

    std::cout << "Enter number with 3 digit: " <<std::endl;
    std::cin >> number;

    short units = number % 10;
    short tens = (number / 10) % 10;
    short hundreds = (number / 100);
    int sum = units + tens + hundreds;

    std::cout <<"units = " << units << std::endl;
    std::cout <<"tens = " <<tens << std::endl;
    std::cout <<"hundreds = " <<hundreds << std::endl;
    std::cout << "sum = " << sum;
}

