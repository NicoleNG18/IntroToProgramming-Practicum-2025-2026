#include <iostream>

int main()
{
    std::cout << "Enter first number: ";
    unsigned number1;
    std::cin >> number1;

    std::cout << "Enter second number: ";
    unsigned number2;
    std::cin >> number2;

    // Намираме по-малкото число, за да ограничим цикъла
    unsigned minNum = (number1 < number2) ? number1 : number2;

    std::cout << "Common divisors in descending order: " << std::endl;

    // Проверяваме от най-голямото към най-малкото
    for (unsigned i = minNum; i >= 1; i--)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
}
