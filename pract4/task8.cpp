#include <iostream>
int main ()
{
    int num1, num2;
    std::cin >> num1 >> num2;
    int const max = num1 > num2 ? num2 : num1;

    for (int i = max; i <= num1 && i <= num2 && i > 0; --i)
    {
        if (num2 % i == 0 && num1 % i == 0)
        {
            std::cout << i << std::endl;
        }
    }
}