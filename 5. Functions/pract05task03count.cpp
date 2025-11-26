#include <iostream>

unsigned int count(int number) {
    unsigned int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    std::cin >> number;
    std::cout << count(number);
}