#include <iostream>

void drawDiamond(unsigned n)
{
    int totalRows = 2 * n - 1;

    for (int i = 1; i <= totalRows; i++)
    {
        int stars = i <= n ? (2*i - 1) : (2*(totalRows - i + 1) - 1);
        int spaces = (2*n - 1 - stars) / 2;

        for (int j = 0; j < spaces; j++)
            std::cout << " ";

        for (int j = 0; j < stars; j++)
            std::cout << "*";

        std::cout << std::endl;
    }
}

int main()
{
    unsigned number;
    std::cout << "Enter number: ";
    std::cin >> number;

    drawDiamond(number);
}
