

#include <iostream>

int sortDescending(int n) {
    int result = 0;

    while (n > 0) {
        int maxDigit = 0;
        int temp = n;

        while (temp > 0) {
            int digit = temp % 10;
            if (digit > maxDigit)
                maxDigit = digit;
            temp /= 10;
        }

        result = result * 10 + maxDigit;

        int newNum = 0;
        int multiplier = 1;
        bool removed = false;

        while (n > 0) {
            int digit = n % 10;
            n /= 10;
            if (digit == maxDigit && !removed) {
                removed = true;
                continue;
            }
            newNum += digit * multiplier;
            multiplier *= 10;
        }
        n = newNum;
    }

    return result;
}

int main() {
    int num;
    std::cout << "Enter a natural number: ";
    std::cin >> num;
    std::cout << sortDescending(num) << std::endl;

    return 0;
}
