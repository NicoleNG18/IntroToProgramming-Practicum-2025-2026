#include <iostream>

int main()
{
    unsigned firstNum, secondNum;

    std::cout << "Enter two 2-digit nums: ";
    std::cin >> firstNum >> secondNum;

    unsigned multiplyResult = firstNum * secondNum;
    unsigned lastDigit = multiplyResult % 10;

    std::cout << "Prod: " << multiplyResult << std::endl;
    std::cout << "Last digit: " << lastDigit << std::endl;
    std::cout << "Is even: " << std::boolalpha << (lastDigit % 2 == 0) << std::endl;
}
