#include <iostream>

int main()
{
    int mesec;
    std::cin >> mesec;
    switch (mesec)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: std::cout << "31"; break;
    case 4: case 6: case 9: case 11: std::cout << "31"; break;
    case 2: 
    {
        std::cout << "Year: ";
        int year;
        std::cin >> year;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) std::cout << "29";
        else std::cout << "28";
    } 
    break;
    default: std::cout << "Invalid input!";
    }
}

