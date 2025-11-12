

#include <iostream>

int countDigits(int n) {
    if (n == 0) return 1;

    if (n < 0) n = -n;

    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << countDigits(num) << std::endl;

    return 0;
}
