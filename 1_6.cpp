#include <iostream>

int main()
{
    int number1, number2, product, units;
    std::cout << "Please enter the first number " << std::endl;
    std::cin >> number1;
    std::cout << "Please enter the second number " << std::endl;
    std::cin >> number2;
    
    product = number1 * number2;
    units = product % 10;
    
    std::cout << "The product of the two numbers is: " << product << std::endl;
    std::cout << "The units digit of the product is: " << units << std::endl;
    std::cout << "Is odd: " << std::boolalpha << (product % 2 != 0) << std::endl;
    
    
    

    return 0;
}