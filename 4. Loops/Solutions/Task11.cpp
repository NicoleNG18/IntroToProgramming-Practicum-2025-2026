#include <iostream>

int main()
{
    std::cout << "Enter number: " << std::endl;
    unsigned number;
    std::cin >> number;

    unsigned res = number * (number + 1) / 2; // сумата на всички числа от 1 до N

    std::cout << "Enter " << number - 1 << " numbers: " << std::endl;
    for (unsigned i = 0; i < number - 1; i++)
    {
        unsigned currentNum;
        std::cin >> currentNum;
        res-=currentNum;
    }

    std::cout << "The missing number is: " << res << std::endl;
}
