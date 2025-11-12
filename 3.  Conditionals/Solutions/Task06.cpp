#include <iostream>

int main() {
    int month;
    std::cout << "Enter num for month: ";
    std::cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            std::cout << "31 days" << std::endl;
            break;

        case 4: case 6: case 9: case 11:
            std::cout << "30 days" << std::endl;
            break;

        case 2: {
            unsigned year;
            std::cout << "Enter year: ";
            std::cin >> year;

            bool isLeap = ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) );
            std::cout << (isLeap ? "29 days" : "28 days") << std::endl;
            break;
        }

        default:
            std::cout << "Invalid input for month!" << std::endl;
    }

}
