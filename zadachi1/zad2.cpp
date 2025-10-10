

#include <iostream>

int main()
{
    double euroToDollar, euroToYen;
    std::cout << "Enter sum in eur: ";
    std::cin >> euroToDollar;
    std::cin >> euroToYen;
    std::cout << "dollars = " << 1.1 * euroToDollar << std::endl;
    std::cout << "yen = " << 145 * euroToYen;
}
