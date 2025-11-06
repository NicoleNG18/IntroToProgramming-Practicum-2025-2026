

#include <iostream>

int main() {
    unsigned int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    unsigned int min = (num1 < num2) ? num1 : num2;

    for (int i = min; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}

