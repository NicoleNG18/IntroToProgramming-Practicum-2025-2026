#include <iostream>
int main() {
    unsigned num1, num2;
    std::cin >> num1 >> num2;

    if (num1 < num2) {
        unsigned help;
        help = num2;
        num2 = num1;
        num1 = help;
    }

    for (int i = 1; i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            std::cout << i << " "; // не са сортирани наобратно
        }
    }
}