#include <iostream>

int main ()
{
    int number, units, tens, hundreds;
    std::cout << "Please enter an 8 digit number" << std::endl;
    std::cin >> number; 

    units = number%10;
    tens = (number/10)%10;
    hundreds = (number/100)%10;

    std::cout << "*****" <<hundreds << tens << units << std::endl;
    return 0;
}