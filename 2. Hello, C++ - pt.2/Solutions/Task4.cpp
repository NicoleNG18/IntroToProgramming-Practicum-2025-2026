#include <iostream>

int main() {
    int number;
    
    std::cout<< "Enter 4-digit number: "<< std::endl;
    std::cin >> number;

    short units  = number % 10;       
    short tens = (number / 10) % 10; 
    short hundreds = (number / 100) % 10;  
    short thousands = number / 1000;         

    std::cout << "Is palindrome: "<< std::boolalpha << (units == thousands && tens == hundreds) << std::endl;
}
