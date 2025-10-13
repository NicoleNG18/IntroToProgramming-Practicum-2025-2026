#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    int prod = a * b;
    std::cout << "Prod: " << prod << std::endl;

    int ld = prod % 10;
    std::cout << "Last digit: " << ld << std::endl;

    std::cout << "Is odd:" << std::boolalpha << (prod % 2 != 0) << std::endl;
}
