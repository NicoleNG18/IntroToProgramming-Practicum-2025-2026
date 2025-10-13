#include <iostream>

int main()
{
    double evro;
    std::cin >> evro;

    double dollars = evro * 1.1;
    double yen = evro * 145;

    std::cout << "dollars = " << dollars  << std::endl;
    std::cout << "yen = " << yen << std::endl;

}