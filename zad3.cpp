

#include <iostream>

int main()
{
    double a, b, c, d;
    std::cout << "Enter two intervals [a; b]: ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    if
        (a > b && c > d)
    std::cout << "Make sure a < b & c < d." << std::endl;

    else
    std::cout << std::boolalpha << (a <= d && c <= b) << std::endl;
}
