

#include <iostream>

int main()
{
    int number, firstDigit, secondDigit, thirdDigit;
    std::cout << "Enter a positive 3-digit number: ";
    std::cin >> number;

    firstDigit = number / 100;
    secondDigit = (number / 10 ) % 10;
    thirdDigit = number % 10;

    std::cout << "hundreds = " << firstDigit << std::endl;
    std::cout << "tens = " << secondDigit << std::endl;
    std::cout << "units = " << thirdDigit << std::endl;
    std::cout << "sum = " << firstDigit + secondDigit + thirdDigit;
}

