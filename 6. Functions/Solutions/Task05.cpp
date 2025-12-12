#include <iostream>

unsigned long long reverseNumber(unsigned n)
{
    unsigned long long rev = 0;

    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    return rev;
}

unsigned countDigits(unsigned num)
{
    unsigned cnt = 0;
    while(num>0)
    {
        num/=10;
        cnt++;
    }
    return cnt;
}

unsigned myPow(unsigned number,unsigned powNum)
{
    unsigned long long  result = 1;
    while(powNum>0)
    {
        result*=number;
        powNum--;
    }
    return result;
}

unsigned long long concatenateReverse(unsigned n)
{
    unsigned long long revrseNum = reverseNumber(n);

    unsigned digitsCount = countDigits(n);
    unsigned powOfNum = myPow(10,digitsCount); 

    return revrseNum * powOfNum + n;
}

int main()
{
    unsigned n;
    std::cout << "Enter number: ";
    
    std::cin >> n;

    unsigned long long result = concatenateReverse(n);
    std::cout << "Result: " << result << std::endl;
}
