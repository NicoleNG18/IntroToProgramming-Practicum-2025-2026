

#include <iostream>

int main()
{
    int combined, num1, num2, a, b, c, d;
    std::cout << "Enter two 2-digit numbers: ";
    std::cin >> num1 >> num2;
    a = num1 / 10;
    b = num1 % 10;
    c = num2 / 10;
    d = num2 % 10;

    combined = a * 1000 + b * 100 + c * 10 + d;

    if (b >= a + 1 && c >= b + 1 && d >= c + 1) 
        std::cout << combined << " - Yes" << std::endl;
    else
        std::cout << combined << " - No" << std::endl;

}
