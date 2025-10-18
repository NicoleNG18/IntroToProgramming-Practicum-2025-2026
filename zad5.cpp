

#include <iostream>

int main()
{
    int x, y;
    std::cout << "Enter coordinates of pt.A: ";
    std::cin >> x >> y;
    
    if (x == 0 || y == 0)
        std::cout << "On axis" << std::endl;
    else if (x > 0 && y > 0)
        std::cout << "First" << std::endl;
    else if (x < 0 && y > 0)
        std::cout << "Second" << std::endl;
    else if (x < 0 && y < 0)
        std::cout << "Third" << std::endl; 
    else if (x > 0 && y < 0)
        std::cout << "Forth" << std::endl;

}
