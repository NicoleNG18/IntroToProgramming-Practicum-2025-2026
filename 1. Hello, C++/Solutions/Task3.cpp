#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "Enter first number: " << std::endl;
    std::cin >> num1;

    std::cout << "Enter second number: " << std::endl;
    std::cin >> num2;

    std::cout << "first number before change: " << num1 << std::endl;
    std::cout << "second number before change: " << num2 << std::endl;

    int helpNum = num1;
    num1 = num2;
    num2 = helpNum;

    std::cout << "first number after change: " << num1 << std::endl;
    std::cout << "second number after change: " << num2 << std::endl;
}