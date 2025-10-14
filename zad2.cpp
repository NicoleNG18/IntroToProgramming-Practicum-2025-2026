

#include <iostream>

int main()
{
    int num, lastDigit;
    std::cout << "Enter a natural number: ";
    std::cin >> num;

    lastDigit = num % 10;

    if
        (num > 9)
        std::cout << lastDigit << std::endl;
    else
        std::cout << num << std::endl;
}
