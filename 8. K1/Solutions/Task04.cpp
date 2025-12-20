#include <iostream>

void countDigits(unsigned long long num, int counts[10])
{
    while (num > 0)
    {
        counts[num % 10]++;
        num /= 10;
    }
}

bool arePermutations(unsigned long long a, unsigned long long b)
{
    int countA[10] = {0};
    int countB[10] = {0};

    countDigits(a, countA);
    countDigits(b, countB);

    for (int i = 0; i < 10; i++)
    {
        if (countA[i] != countB[i])
            return false;
    }

    return true;
}

int main()
{
    unsigned long long firstNum, secondNum;
    std::cin >> firstNum >> secondNum;

    std::cout << std::boolalpha << arePermutations(firstNum, secondNum);
}
