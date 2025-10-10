

#include <iostream>

int main()
{
    int firstNum, secondNum;
    std::cout << "Enter the value of two numbers: ";
    std::cin >> firstNum;
    std::cin >> secondNum;
    firstNum = firstNum + secondNum;
    secondNum = firstNum - secondNum;
    firstNum = firstNum - secondNum;
    std::cout << "first = " << firstNum << std::endl;
    std::cout << "second = " << secondNum;
}
