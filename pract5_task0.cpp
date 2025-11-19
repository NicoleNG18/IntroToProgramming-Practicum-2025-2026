

#include <iostream>


long long   decimalToBinary(int num)
{
    
    long long binary = 0;
    long long pow = 1;
    while (num>0)
    {
        int remaining = num % 2;

        binary = binary + remaining * pow;
        pow *= 10;
        num /= 2;
    }
    return binary;
}

int main()
{
    int decimal;
    long long binary;

    std::cin >> decimal;

    std::cout << decimalToBinary(decimal);
}

