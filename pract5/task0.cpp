#include <iostream>
unsigned long long bits(unsigned decimal)
{
    unsigned i = 1;
    unsigned bits = 0;
    while (decimal != 0)
    {
        unsigned currBit = decimal % 2;
        bits = bits + currBit * i;
        i *= 10;
        decimal /= 2;
    }
    return bits;
}

int main ()
{
    unsigned num;
    std::cin >>num;

    std::cout << bits(num);
}