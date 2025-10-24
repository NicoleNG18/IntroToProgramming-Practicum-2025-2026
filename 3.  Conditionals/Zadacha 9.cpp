#include <iostream>

int main()
{
    int size, numX, numY;
    std::cin >> size >> numX >> numY;
    if ((numX / size) % 2 == 0 && numX % size > 0 || (numX / size) % 2 == 1 && numX % size == 0)
    {
        if ((numY / size) % 2 == 1 && numY % size > 0 || (numY / size) % 2 == 0 && numY % size == 0)
        {
            std::cout << "white";
        }
        else std::cout << "black";
    }
    else if ((numX / size) % 2 == 1 && numX % size > 0 || (numX / size) % 2 == 0 && numX % size == 0)
    {
        if ((numY / size) % 2 == 0 && numY % size > 0 || (numY / size) % 2 == 1 && numY % size == 0)
        {
            std::cout << "white";
        }
        else std::cout << "black";
    }
}

