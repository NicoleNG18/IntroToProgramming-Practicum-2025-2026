#include <iostream>
unsigned digitCount (int num)
{
    unsigned count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}
int main ()
{
    int number;
    std::cin >> number;

    std::cout << digitCount (number);
}