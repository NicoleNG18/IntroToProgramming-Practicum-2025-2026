

#include <iostream>

int main()
{
    int num;
    int x;
    int y;
    std::cin >> num;

    for ( x = 1; x < num; x++)
    {
        y = num - x;
        std::cout << "x= " << x << "y= " << y << std::endl;

    }
    
}

