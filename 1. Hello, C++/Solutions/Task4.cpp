#include <iostream>

int main()
{
    unsigned num;

    std::cout << "Enter number: " << std::endl;
    std::cin >> num;

    short units = num % 10;
    short tens = (num / 10) % 10;
    short hundreds = (num / 100) % 10;

    std::cout << "units: " << units << std::endl;
    std::cout << "tens: " << tens << std::endl;
    std::cout << "hundreds: " << hundreds << std::endl;

    short sum = units + tens + hundreds;

    std::cout << "sum: " << sum << std::endl;
}