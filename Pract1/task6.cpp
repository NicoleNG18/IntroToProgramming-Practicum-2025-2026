#include <iostream>
int main()
{
    unsigned short int a;
    std::cin >> a;
    unsigned short int b;
    std::cin >> b;

    int prod = a * b;
    int lastDigit = prod % 10;
    bool isOdd = lastDigit % 2 == 1; //proverqvame dali edinicite sa nechetni s "dali ostatyka ot delenieto s 2 shte bude =1"

    std::cout << "Prod: " << prod << std::endl;
    std::cout << "Last digit: " << lastDigit << std::endl;
    std::cout << "Is odd: " << std::boolalpha << isOdd << std::endl;
}