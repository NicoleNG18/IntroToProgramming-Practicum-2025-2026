// Paola.zad5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    unsigned num;
    
    std::cout << "Enter number: " << std::endl;
    std::cin >>num;

    std::cout << std::boolalpha << (num % 2 == 0);
  
}

