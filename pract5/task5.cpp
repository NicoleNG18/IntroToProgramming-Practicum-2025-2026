#include <iostream>
bool isOnCircle (int a, int b, int c, int d)
{
    if (a * a + b * b == c * c + d * d)
        return true;
    else
        return false;
}
int main ()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::cout << isOnCircle(a, b, c, d);
}