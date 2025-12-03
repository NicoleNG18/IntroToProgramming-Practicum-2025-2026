#include <iostream>
int main() {
    unsigned int number;
    std::cin >> number;

    for ( int i = 1; i <= number; i++) {
        for (int j = 1; j<=number; j++) {
            if (i==j) {
                std::cout << "0";
            } else if (i < j) {
                std::cout << "+";

            } else {
                std::cout << "-";
            }
        }
        std::cout << std::endl;
    }
}