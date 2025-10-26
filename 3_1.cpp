#include <iostream>

int main () 
{
    double number1, number2;
    std::cout << "Please, enter value for the first number." <<std::endl;
    std::cin >> number1;

    std::cout << "Please, enter value for the second number." << std::endl;
    std::cin >> number2;

    double SmallerNumber = (number1>number2)?number2:number1; 
    std::cout << "The value of the smaller number is : " << SmallerNumber << std::endl;


    return 0;
}