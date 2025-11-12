#include <iostream>

int main() {
    double xCoord, yCoord;
    std::cout << "Enter coordinates for point: ";
    std::cin >> xCoord >> yCoord;

    if (xCoord == 0 && yCoord == 0)
        std::cout << "At (0,0)" << std::endl;
    else if (xCoord == 0)
        std::cout << "On Y" << std::endl;
    else if (yCoord == 0)
        std::cout << "On X" << std::endl;
    else
        std::cout << ((xCoord > 0) ? ((yCoord > 0) ? "First" : "Fourth")
                         : ((yCoord > 0) ? "Second" : "Third"))
             << std::endl;
}
