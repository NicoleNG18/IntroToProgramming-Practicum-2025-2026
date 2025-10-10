

#include <iostream>

int main()
{
    int a, b, prodNum, lastDigit;
    std::cout << "Enter two natural numbers a and b: ";
    std::cin >> a;
    std::cin >> b;

    prodNum = a * b;
    lastDigit = prodNum % 10;

        std::cout << "Prod: " << prodNum << std::endl;
        std::cout << "Last digit: " << lastDigit << std::endl;
        
        if
            (prodNum % 2 == 0)
        std::cout << "Is odd: " << std::boolalpha << (2 < 1) << std::endl;
        else
        std::cout << "Is odd: " << std::boolalpha << (2 > 1) << std::endl;
}
