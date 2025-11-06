

#include <iostream>

int main()
{
    unsigned int num1, num2;
    std::cout << "Enter 2 numbers to find lcm : ";
    std::cin >> num1 >> num2;
    unsigned int a = num1;
    unsigned int b = num2;

    while (num2 != 0) {
        unsigned int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    unsigned int gcd = num1;
    unsigned long long lcm = ((unsigned long long)a * b) / gcd;
    std::cout << lcm << std::endl;
    return 0;
}
