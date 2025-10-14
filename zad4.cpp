

#include <iostream>

int main()
{
    int num1, a, b, c, d;
    std::cout << "Enter two intervals [a; b]: ";
    std::cin >> num1;
    a = num1 / 1000;
    b = (num1 % 1000) / 100;
    c = (num1 % 100) / 10;
    d = num1 % 10;

    if
        (num1 > 1000 && num1 < 9999)
        std::cout << std::boolalpha << (a == d && c == b) << std::endl;

    else
        std::cout << "Enter a 4-digit number." << std::endl;
}
