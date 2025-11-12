

#include <iostream>

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main() {
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Number must not be negative!" << std::endl;
        return 1;
    }

    int reversed = reverseNumber(n);
    std::cout << reversed << std::endl;

    return 0;
}
