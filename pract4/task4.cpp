#include <iostream>
int main ()
{
    unsigned int num1, num2;
    std::cin >> num1 >> num2;



    for (int i = 1; i <= num1 * num2; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            std::cout << i;
            break;
        }
    }
}