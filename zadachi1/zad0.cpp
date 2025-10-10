// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello, C++\n";

    int apples, pears, bananas;
    std::cout << "Insert amount of apples, pears and bananas: ";
    std::cin >> apples;
    std::cin >> pears;
    std::cin >> bananas;
    std::cout << "Don't forget to buy " << apples << " apples, " << pears << " pears and  " << bananas << " bananas !";

}
