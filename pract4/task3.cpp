#include <iostream>
int main ()
{
    unsigned int num1, num2;
    std::cin >> num1 >> num2;

    unsigned int left;

    if (num1 > num2)
    {
        left = num2 % num1;
    }
    else
    {
        left = num1 % num2;
    }

    while (left != 0)
    {
         if (num1 > num2)
         {
             left = num2 % left;
             std::cout << num2;
         }
        else
        {
            left = num2 % left;
            std::cout << left;
            break;
        }
    }



}