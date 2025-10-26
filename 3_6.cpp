#include <iostream> 

int main() {
    double OxCoordinate, OyCoordinate;
    std::cout << "Please enter value for x coordinate of point A. " << std::endl;
    std::cin >> OxCoordinate; 
    
    std::cout << "Please enter value for y coordinate of point A. " << std::endl;
    std::cin >> OyCoordinate; 

    if (OxCoordinate > 0 && OyCoordinate > 0) std::cout << "Point A is in the First quadrant." << std::endl;
    else if (OxCoordinate > 0 && OyCoordinate < 0) std::cout << "Point A is in the Fourth quadrant." << std::endl;
    else if (OxCoordinate < 0 && OyCoordinate > 0) std::cout << "Point A is in the Second quadrant." << std::endl;
    else if (OxCoordinate < 0 && OyCoordinate < 0) std::cout << "Point A is in the Third quadrant." << std::endl;
    else if (OxCoordinate == 0 || OyCoordinate == 0) std::cout << "On Axis" << std::endl;

 


    return 0;
}