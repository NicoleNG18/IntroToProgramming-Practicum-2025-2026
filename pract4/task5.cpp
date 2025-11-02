#include <iostream>
int main ()
{
    unsigned long num;
    std::cin >> num;

    unsigned pos = 1;
    unsigned decimal = 0;

    while (num != 0)
    {
        unsigned lastDigit = num % 10;
        decimal = decimal + pos * lastDigit;
        pos = pos * 2;
        num /= 10;

    }
    std::cout << decimal << std::endl;
}