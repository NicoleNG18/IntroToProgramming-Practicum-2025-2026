#include <iostream>

int main()
{
    int x, a, b;
    std::cout << "Please enter value of x" << std::endl;
    std::cin >> x;

    std::cout << "Please enter value of a" << std::endl;
    std::cin >> a;

    std::cout << "Please enter value of b" << std::endl;
    std::cin >> b;
    
    if (x>=a && x<=b) std::cout << "True" << std::endl;
    else std::cout << "False" << std::endl;
    

    return 0;
}