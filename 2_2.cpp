#include <iostream>

int main()
{
    int number, last_digit;
    std::cout << "Please enter value of number: " << std::endl;
    std::cin >> number;

    last_digit = number % 10;

    std::cout << "Last digit of the number is: "  << last_digit << std::endl;
    return 0;
}