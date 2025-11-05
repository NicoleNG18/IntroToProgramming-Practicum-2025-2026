

#include <iostream>

int main()
{
    int num1;
    int num2; 
    int gcd;
    std::cin >> num1 >> num2;

    if (num1<num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    while (num2!=0)
    {
        int temp = num2;
        num2 = num1 % num2;
        gcd = temp;
    }
    
    for (int i = 1; i <= gcd; i++)
    {
        if (gcd%i==0)
        {
            std::cout << i << " ";
        }
    }
}

