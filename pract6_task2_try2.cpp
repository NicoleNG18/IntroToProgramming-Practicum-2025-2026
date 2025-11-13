

#include <iostream>


unsigned long long toBin(unsigned long long n)
{
    unsigned long long binary = 0;
    unsigned long long position = 1;

    while (n > 0)
    {
        unsigned long long remainDigit = n % 2;
        n = n / 2;
        binary = binary + remainDigit * position;
        position = position * 10;
    }
    return binary;
}

unsigned long long reversedNum(unsigned long long n)
{
    unsigned long long reversed = 0;

    while (n != 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    return reversed;
}

void    firstTwenty()
{
    int counter = 0;
    int currNum = 1;

    while (counter < 20)
    {
        unsigned long long BinNum = toBin(currNum);

        if (BinNum == reversedNum(BinNum))
        {
            std::cout << currNum << " "<< BinNum << std::endl;
            counter++;
        }
        currNum++;
    }
}


int main()
{
     firstTwenty();
}



