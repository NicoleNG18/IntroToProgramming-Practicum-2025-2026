#include <iostream>

long long findBase(unsigned count) 
{
    long long base  = 1;
    for (int i = 0; i < count - 1; i++)
    {
        base *= 10;
    }
    return base;
}

unsigned countNumDigits(unsigned n) {

    unsigned counter=0;

    while (n != 0)
    {
        counter++;
        n /= 10;
    }

    return counter;
}


unsigned lastToFirst(unsigned num)
{
    unsigned countOfDigits = countNumDigits(num);

    unsigned base = findBase(countOfDigits);

    unsigned result = 0;

    while (num != 0) 
    {
        unsigned lastDigit = num % 10;

        result += lastDigit * base;

        base /= 10;

        num /= 10;
    }


    return result;
}

int main()
{
    unsigned n;
    std::cin >> n;

    std::cout << lastToFirst(n);
}

//задачата е решена с ваша помощ
