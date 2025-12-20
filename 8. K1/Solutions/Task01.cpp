#include <iostream>

unsigned int gcd(unsigned int a, unsigned int b)
{
    while (b != 0)
    {
        unsigned int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void reduceNumber(unsigned int numerator, unsigned int denominator)
{
    unsigned int divisor = gcd(numerator, denominator);

    numerator /= divisor;
    denominator /= divisor;

    std::cout << numerator << "/" << denominator;
}

int main()
{
    unsigned int num1, num2;
    std::cin >> num1 >> num2;

    reduceNumber(num1, num2);
}
