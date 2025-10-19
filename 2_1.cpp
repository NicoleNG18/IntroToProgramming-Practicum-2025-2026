#include <iostream>

int main()
{
    int number1, number2, is;
    std::cout << "Please enter the first number " << std::endl;
    std::cin >> number1;
    std::cout << "Please enter the second number " << std::endl;
    std::cin >> number2;

    is = number1%number2;

    std::cout << std::boolalpha << (is==0)  << std::endl;
    return 0;
}