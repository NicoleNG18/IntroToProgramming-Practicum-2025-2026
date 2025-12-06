#include <iostream>
int main ()
{
    unsigned int a, b, c;
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        std::cout << "yes";
    }
    else
    {
        std::cout << "no";
    }
}