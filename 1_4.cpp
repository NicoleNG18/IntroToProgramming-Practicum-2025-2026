#include <iostream>

int main()
{
    unsigned number, units, tens, hundreds, sum;
     std::cout << "Please enter a number. " << std::endl;
     std::cin >> number;
    
     units = number % 10;
     tens = (number / 10) % 10;
     hundreds = number / 100;
     sum = units + tens + hundreds;
     
     std::cout << "Units = " << units << std::endl;
     std::cout << "Tens = " << tens << std::endl;
     std::cout << "Hundreds = " << hundreds << std::endl;

     std::cout << "The sum of the digits of the number " << number << " is: " << sum << std::endl;
    
    
    

    return 0;
}