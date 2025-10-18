#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int hundredsThousands = number / 100;
    int unitsTens = number % 100;

    std::cout << (hundredsThousands == unitsTens ? "true":"false") << std::endl;
}

