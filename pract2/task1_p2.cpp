#include <iostream>
int main()
{
    int a, b;
    std::cin >> a >> b;

    bool c = a % b == 0;
    std::cout << std::boolalpha << c << std::endl;

}