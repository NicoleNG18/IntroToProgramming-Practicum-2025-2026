#include <iostream>

unsigned long long factorial(unsigned n)
{
    unsigned long long result = 1;

    for (unsigned i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    unsigned number;
  
    std::cout << "Enter number: " << std::endl;
    std::cin >> number

    std::cout << "The factorial of " << number << " is: " << factorial(number) << std::endl;
}
