#include <iostream>
int main()
{
    double a;
    std::cout << "Enter amount of cash in EUR: ";
    std::cin >> a;

    std::cout << "Dollars = " << a * 1.1 << std::endl;
    std::cout << "Yen = " << a * 145 << std::endl;
    return 0;
}