#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    std::cout << (number < 0 ? number * (-1) : number);
}


