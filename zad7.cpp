#include <iostream>

int main()
{
    int a;
    std::cin >> a;

    int lastT = a % 1000;
    std::cout << "*****" << lastT;
}
