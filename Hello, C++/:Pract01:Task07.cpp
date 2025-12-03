#include <iostream>

int main() {

    unsigned int a, b;

    std::cin >> a >> b;

    std::cout << "Prod: " << a * b << std::endl
    << "Last digit: " << (a * b) % 10 << std::endl
    << "Is odd: " << std::boolalpha << ((a * b) % 10 != 0 );

}