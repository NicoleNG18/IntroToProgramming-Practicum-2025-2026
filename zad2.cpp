

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

    do {
        std::cout << "Enter a non-negative number: ";
        std::cin >> n;

        if (n < 0) {
            std::cout << "Number must not be negative! Try again.\n";
        }

    } while (n < 0);

    int reversed = reverseNumber(n);
    std::cout << "Reversed number: " << reversed << std::endl;

    return 0;
}
