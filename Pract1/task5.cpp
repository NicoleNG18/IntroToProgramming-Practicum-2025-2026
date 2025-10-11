#include <iostream>
int main ()
{
    int a;
    std::cin >> a;

    bool b = a % 2 == 0; //za da izvadi "true" ili "false" trqbva b da e bool, a ne int. v protiven sluchai --> 0 ili 1

    std::cout <<std::boolalpha<< b << std::endl;

    int c;
    std::cin >> c;

    bool d = c % 2 == 0;

    std::cout << std::boolalpha << d << std::endl;

    return 0;
}