#include <iostream>

int main()
{
    int a;
    std::cin >> a;

    int units = a % 10;
    std::cout << "units = " << units << std::endl;

    int tens = a / 10 % 10;
    std::cout << "tens = " << tens << std::endl;

    int hundreds = a / 100 % 10;
    std::cout << "hundreds = " << hundreds << std::endl;

    int sum = units + tens + hundreds;
    std::cout << "sum = " << sum << std::endl;

}
