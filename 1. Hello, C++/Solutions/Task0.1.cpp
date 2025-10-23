#include <iostream>

int main()
{
    unsigned apples, pears, bananas;
    std::cout << "Enter count of apples, pears and bananas: ";

    std::cin >> apples >> pears >> bananas;
    std::cout << "Don’t forget to buy " << apples << " apples, " << pears << " pears and " << bananas << " bananas!";
}
