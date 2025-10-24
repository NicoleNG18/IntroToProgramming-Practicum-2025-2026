#include <iostream>

int main()
{
    int numA, numB, numC;
    std::cin >> numA >> numB >> numC;

    if (numA < (numB + numC) && numB < (numA + numC) && numC < (numB + numA)) std::cout << "yes";
    else std::cout << "no";
}

