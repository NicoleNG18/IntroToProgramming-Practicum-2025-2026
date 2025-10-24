#include <iostream>

int main()
{
    int numA, numB, numX;
    std::cin >> numX >> numA >> numB;

    bool result = ((numA >= numX && numX >= numB) || (numA <= numX && numX <= numB));

    std::cout << std::boolalpha << result; //daje ne e nujno if maj

    std::cout << std::endl;

    if ((numA >= numX && numX >= numB) || (numA <= numX && numX <= numB)) std::cout << "true"; // sus if else
    else std::cout << "false";

    std::cout << std::endl;

    switch (result) { // i taka sqkash stava
    case 0: std::cout << "false"; break;
    case 1: std::cout << "true"; break;
    }
}

