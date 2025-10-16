#include <iostream>
int main ()
{
    unsigned int number;
    std::cin >> number;
    //int units, tens, hundreds, thousands

    int units = number % 10;
    int tens = (number / 10) % 10;
    int hundreds = (number / 100) % 10;
    int thousands = number / 1000;


    bool palindrome = (thousands == units) && (hundreds == tens);

    std::cout << std::boolalpha << palindrome << std::endl;
}