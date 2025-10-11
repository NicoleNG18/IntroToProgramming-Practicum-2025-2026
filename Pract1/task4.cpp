#include <iostream>
int main()
{
    unsigned int number;
    std::cin >> number;

    int units = number % 10;
    int tens = (number / 10) % 10;
    int hundreds = number / 100;

    std::cout << "units= " << units << std::endl;
    std::cout << "tens= " << tens << std::endl;
    std::cout << "hundreds= " << hundreds << std::endl;
    std::cout << "sum= " << units + tens + hundreds << std::endl;
    return 0;
}