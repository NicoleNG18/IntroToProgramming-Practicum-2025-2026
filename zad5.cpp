

#include <iostream>

int main()
{
    unsigned long long bin;
    std::cout << "Binary to decimal : ";
    std::cin >> bin;
    unsigned long long res = 0;
    unsigned long long base = 1;

    while (bin != 0) {
        unsigned lastDigit = bin % 10;
        res += lastDigit * base;
        base *= 2;
        bin /= 10;
    }
    std::cout << res << std::endl;
    return 0;
}
