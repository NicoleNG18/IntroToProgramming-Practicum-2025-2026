#include <iostream>
int main ()
{
    int number;
    std::cin >> number;

    int lastThreeDigits = number % 1000;

    std::cout << "*****" << lastThreeDigits << std::endl;
}