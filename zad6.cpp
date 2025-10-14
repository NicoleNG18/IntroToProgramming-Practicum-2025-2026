

#include <iostream>

int main()
{
    int numFinal, num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    
    int firstNum = num1 * 100;
    int secondNum = num2 * 10;
    int thirdNum = num3;

    numFinal = firstNum + secondNum + thirdNum;
    std::cout << numFinal;
}
