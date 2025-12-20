#include <iostream>

bool areOnesAndZerosEqual(unsigned int num)
{
    int countOnes = 0;
    int countZeros = 0;
    unsigned int temp = num;

    while (temp > 0)
    {
        if (temp % 2 == 0)
            countZeros++;
        else
            countOnes++;

        temp /= 2;
    }

    return countOnes == countZeros;
}

void printNumbersWithEqualCountOfDigits(unsigned int n)
{
    for (unsigned int i = 1; i <= n; i++)
    {
        if (areOnesAndZerosEqual(i))
        {
            std::cout << i << " ";
        }
    }
}

int main()
{
    unsigned int n;
    std::cin >> n;

    printNumbersWithEqualCountOfDigits(n);
}
