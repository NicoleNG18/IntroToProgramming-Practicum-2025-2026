

#include <iostream>

int main()
{
    int num, lastDigit;
    std::cout << "Enter a natural number: ";
    std::cin >> num;

        lastDigit = (num > 9) * (num % 10) + (num <= 9) * num;

        std::cout << lastDigit << std::endl;

}
