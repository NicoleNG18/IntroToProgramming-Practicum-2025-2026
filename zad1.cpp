

#include <iostream>

int main()
{
    int x, a, b;
    std::cout << "Enter three numbers x, a, b: ";
    std::cin >> x >> a >> b;

    bool inInterval = (a <= x && x <= b);
    std::cout << std::boolalpha << inInterval << std::endl;
}

