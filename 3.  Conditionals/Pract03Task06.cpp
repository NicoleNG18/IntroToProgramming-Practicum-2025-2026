#include <iostream>

int main () {

    unsigned int month;
    std::cin >> month;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:std::cout << "31"; break;
        case 2:
            int year;
            std::cin >> year;

            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                std::cout << "Year: " << year << std::endl << "29";
            }
            else {
                std::cout << "Year: " << year << std::endl << "28";
            }; break;
        case 4:
        case 6:
        case 9:
        case 11: std::cout << "30"; break;
        default: std::cout << "Въведете число между 1 и 12";
    }
}