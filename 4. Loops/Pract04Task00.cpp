#include <iostream>

int main() {
    unsigned int number;
    std::cin >> number;

    for (unsigned int lines = 1; lines <= number; lines++ ) {
        for (unsigned int columns = 1; columns <= lines; columns++) {
            std::cout << "$";
        }
        std::cout << std::endl;
    }
}