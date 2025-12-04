#include <iostream>

unsigned reverseNumber(unsigned number) 
{
    unsigned reversed = 0;
    while (number > 0) 
    {
        unsigned lastDigit = number % 10;       
        reversed = (reversed * 10) + lastDigit; 
        number /= 10;                  
    }
    return reversed;
}

int main() {
    unsigned number;

    std::cout << "Enter natural number: ";
    std::cin >> number;

    std::cout << "Reversed number: " << reverseNumber(number) << std::endl;
}
