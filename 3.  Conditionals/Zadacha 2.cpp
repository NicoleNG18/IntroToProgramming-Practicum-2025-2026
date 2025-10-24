#include <iostream>

int main()
{
    int godina;
    std::cin >> godina;

    if (godina % 4 == 0 && godina % 100 != 0 || godina % 400 == 0) std::cout << "yes";
    else std::cout << "no";
}

