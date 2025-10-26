#include <iostream>

int main () 
{
    double TriangleSide1, TriangleSide2, TriangleSide3;
    std::cout << "Please enter value for the first side of the triangle. " << std::endl;
    std::cin >> TriangleSide1;

    std::cout << "Please enter value for the second side of the triangle. " << std::endl;
    std::cin >> TriangleSide2;

    std::cout << "Please enter value for the third side of the triangle. " << std::endl;
    std::cin >> TriangleSide3;

        if (TriangleSide1 > 0 && TriangleSide2 > 0 && TriangleSide3 > 0) {

            if (TriangleSide1 + TriangleSide2 > TriangleSide3 && TriangleSide1 + TriangleSide3 > TriangleSide2 && TriangleSide2 + TriangleSide3 > TriangleSide1) std::cout << "This is a valid triangle. " << std::endl;

            else std::cout << "There cannot be a triangle with these sides. " << std::endl;

        } else std::cout << "Please enter valid values. " << std::endl;

    return 0;
}