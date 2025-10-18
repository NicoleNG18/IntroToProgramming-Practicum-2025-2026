

#include <iostream>

int main()
{
    int codeDef, codeEdit;
    std::cout << "Enter an 8-digit code: ";
    std::cin >> codeDef;

    codeEdit = codeDef % 1000;
    std::cout << "*****" << codeEdit;

}
