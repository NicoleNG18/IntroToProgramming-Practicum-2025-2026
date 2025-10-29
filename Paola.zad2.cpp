// Paola.zad2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double euro;

    std::cout << "Enter money in euro: ";
    std::cin >> euro;

    double dolars = euro * 1.1;
    double yen = euro * 145;

    std::cout << "dollars = " <<dolars <<std::endl;
    std::cout << "yen = " <<yen;
}
