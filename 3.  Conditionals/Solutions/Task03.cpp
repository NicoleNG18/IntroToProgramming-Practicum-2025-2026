#include <iostream>

int main() {
    double firstSide, secondSide, thirdSide;
    std::cout << "Enter triangle sides: ";
    std::cin >> firstSide >> secondSide >> thirdSide;
    
    if( firstSide <= 0 || secondSide <= 0 || thirdSide <= 0)
    {
        std::cout << "Invalid input!";
    } else { 

    bool isTriangle = ((firstSide + secondSide > thirdSide)
                       && (firstSide + thirdSide > secondSide) 
                       && (secondSide + thirdSide > firstSide));

    std::cout << "Is triangle: " << (isTriangle ? "Yes" : "No") << std::endl;
    }
}
