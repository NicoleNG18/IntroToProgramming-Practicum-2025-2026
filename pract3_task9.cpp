

#include <iostream>

int main()
{
    unsigned int squareSide;
    unsigned int x, y;
    std::cin >> squareSide >> x >> y;

    int column = x / squareSide;
    int row = y / squareSide;

    if ((column+row)%2==0)
    {
        std::cout << "Black";
    }
    else
    {
        std::cout << "White";
    }
}

