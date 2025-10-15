

#include <iostream>

int main()
{
    unsigned int num1, num2;
    std::cout << "Enter 2 numbers: ";
    std::cin >> num1;
    std::cin >> num2;

        std::cout << std::boolalpha << (num1 % num2 == 0);

}   
