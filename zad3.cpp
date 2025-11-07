

#include <iostream>

int main()
{
    unsigned int num1, num2;
    std::cout << "Enter 2 numbers to find gcd : ";
    std::cin >> num1 >> num2;
    if (num1 < num2) {
        unsigned int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    while (num2 != 0) {
        unsigned int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    std::cout << num1 << std::endl;
    return 0;
}
