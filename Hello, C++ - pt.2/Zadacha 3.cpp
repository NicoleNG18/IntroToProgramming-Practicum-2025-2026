// yh101025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int numA, numB, numC, numD;
    
    std::cin >> numA >> numB;
    std::cin >> numC >> numD;

    std::cout << std::boolalpha << (numB >= numC && numD >= numA);
}

