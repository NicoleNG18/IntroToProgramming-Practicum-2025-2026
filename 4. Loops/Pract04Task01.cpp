#include <iostream>
int main() {
    unsigned int number;
    std::cin >> number;

    for ( unsigned int delimo = 2; delimo <= number - 1; delimo++) {
        if ( number % delimo == 0) {
            std::cout << "not prime";
            break;
        }

        if (number % delimo != 0) {
        std::cout << "prime";
            break;
        }
        }
    }