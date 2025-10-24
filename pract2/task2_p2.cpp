#include <iostream>
int main ()
{
    unsigned int number;
    std::cin >> number;


    int lastDigit = ((number > 0 && number < 10) * number) + ((number > 10) * number % 10);


    std::cout << lastDigit << std::endl;
    return 0;
}