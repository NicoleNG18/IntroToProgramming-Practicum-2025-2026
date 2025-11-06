#include <iostream>
int main() {
    unsigned int number;
    std::cin >> number;

    for (int x = 1; x < number; x++) {
        unsigned y = number - x;
        std::cout << "x = " << x << " y = " << y << std::endl;
    }
}