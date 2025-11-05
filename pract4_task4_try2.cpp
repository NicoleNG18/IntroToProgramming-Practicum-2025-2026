
#include <iostream>

int main()
{
    int a;
    int b;
    std::cin >> a >> b;

    int x = a;
    int y = b;

    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int gcd = x;
    int lcm = (a*b)/gcd;
    std::cout << lcm;
}

