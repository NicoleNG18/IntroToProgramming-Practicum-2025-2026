// yh101025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int numA, numB, numC, numResult;
    
    std::cin >> numA >> numB >> numC;

    numResult = numA * 100 + numB * 10 + numC;

    std::cout << numResult;
}

