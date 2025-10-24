#include <iostream>
int main ()
{
    double a, b;
    std::cin >> a >> b;

    if (a > 0 && b > 0)
    {
        std::cout << "first";
    }
    else if (a < 0 && b > 0)
    {
    std::cout << "second";
    }
    else if (a < 0 && b < 0)
    {
    std::cout << "third";
    }
    else if (a == 0 || b == 0)
    {
        std::cout << "On axis";
    }
    else
    {
        std::cout << "fourth";
    }
}