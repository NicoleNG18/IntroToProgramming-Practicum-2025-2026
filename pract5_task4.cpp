

#include <iostream>


unsigned digitsCount(unsigned n)
{
    unsigned counter = 0;
    while (n != 0)
    {
        counter++;
        n /= 10;
    }
    return counter;
}
int order(int num)
{
    int result = 0;
    int digits(digitsCount(num));
    
    for (int currDigit = 9; currDigit>=0;currDigit--)
    {
        int tempNum = num;
        int count = 0;

        while (tempNum != 0)
        {
            int digit = tempNum % 10;
            if (digit==currDigit)
            {
                count++;
            }
            tempNum /= 10;
        }
        for (int i = 0; i < count; i++)
        {
            result = result * 10 + currDigit;
        }
    }
    return result;
}



int main()
{
    int inputNum;
    std::cin >> inputNum;

    int numInOrder = order(inputNum);
    std::cout << numInOrder;
}

