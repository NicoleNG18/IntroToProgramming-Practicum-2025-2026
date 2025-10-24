#include <iostream>

int main()
{
    int numA, numB;
    std::cin >> numA >> numB;
    int result = (numA > numB) ? numB : numA;
    std::cout << result;
}

