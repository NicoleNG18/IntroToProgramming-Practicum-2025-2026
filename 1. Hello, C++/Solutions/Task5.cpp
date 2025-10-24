#include <iostream>

int main()
{
    unsigned num;

    std::cout << "Enter number: " << std::endl;
    std::cin >> num;

    std::cout << "Is even: " << std::boolalpha << (num % 2 == 0) << std::endl;

}