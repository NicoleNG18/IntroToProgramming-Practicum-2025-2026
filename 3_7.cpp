#include <iostream>

int main () {
    int Month;
    std::cout << "Enter Month" << std::endl;
    std::cin >> Month ;
        if (Month % 2 == 1) {
            std::cout << "31 days" << std::endl;
        }
        else if (Month == 2) {
            int year;
            std::cout << "Please enter year. " << std::endl;
            std::cin >> year;

            if (year % 4 == 0 && year % 100 !=0 || year % 400 == 0) std::cout << " 29 days " << std::endl;
            else std::cout << " 28 days " << std::endl; 
        }
        else if (Month % 2 == 0 && Month !=2) std::cout << "30 days" << std::endl;
 
    return 0;
}