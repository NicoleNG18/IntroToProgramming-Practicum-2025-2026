#include <iostream>
int main ()
{
    int x, a, b;
    std:: cin >> x >> a >> b;

    if (a <= x && x <= b)
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }
}