#include <iostream>

int getNumberLength(unsigned int number)
{
    if (number == 0) return 1;
    int count = 0;
    while (number > 0) 
    {
        number /= 10;
        count++;
    }
    return count;
}

int powerOf10(int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
        result *= 10;
    return result;
}

int getKLastDigits(int number, int k)
{
    int pow10 = powerOf10(k);
    return number % pow10;
}

int makeNewSecondNumber(int oldNum, int lastKDigits)
{
    int digitsOldNum = getNumberLength(oldNum);
    int multiplier = powerOf10(digitsOldNum);
    return lastKDigits * multiplier + oldNum;
}

int main() 
{
    unsigned int firstNumber, secondNumber, k;
    std::cin >> firstNumber >> secondNumber >> k;

    int firstPart = firstNumber / powerOf10(k);
    int lastDigits = getKLastDigits(firstNumber, k);
    int newSecondNumber = makeNewSecondNumber(secondNumber, lastDigits);

    std::cout << firstPart << " " << newSecondNumber;
}
