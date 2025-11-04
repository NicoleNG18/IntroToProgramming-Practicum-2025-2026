#include <iostream>

int main()
{
    double euro;

    std::cout << "Enter money in euro: ";
    std::cin >> euro;

    std::cout << "yeni: " << euro * 1.1 << std::endl;
    std::cout << "dollars: " << euro * 145 << std::endl;
}