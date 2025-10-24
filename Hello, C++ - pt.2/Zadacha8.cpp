// yh101025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int kilometers;
    double kmResult, finalFare;

    std::cin >> kilometers;

    kmResult = ((kilometers <= 5) * kilometers * 2.5) + ((kilometers > 5) * ((kilometers - 5) * 1.5 + 5 * 2.5));
    finalFare = ((kmResult > 20) * (kmResult * 10 / 100)) + kmResult + 3;

    std::cout << finalFare;
}

