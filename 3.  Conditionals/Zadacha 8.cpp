#include <iostream>

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;
    int thou, hund, tens, units;

    thou = num1 / 10;
    hund = num1 % 10;
    tens = num2 / 10;
    units = num2 % 10;

    int numRes = thou * 1000 + hund * 100 + tens * 10 + units;

    std::cout << numRes << " - ";

    if (units > tens && tens > hund && hund > thou) std::cout << "YES";
    else std::cout << "NO";
}

