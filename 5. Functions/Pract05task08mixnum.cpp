#include <iostream>

long long mixNums(long long num1, long long num2) {
    // искам num1 да ми е по малко
    // за да може да направя само 1 if във while по-надолу
    if (num1 > num2) {
        int helper;
        helper = num1;
        num1 = num2;
        num2 = helper;
    }

    long long result = 0;
    short base = 10;

    while (num1 != 0 || num2 != 0) {

        if (num1 != 0) {
            unsigned short digit = num1 % 10;
        result = result * base + digit;
    }
        unsigned int lastDnum2 = num2 % 10;
        result = result * base + lastDnum2;;

        num1 /= 10;
        num2 /= 10;
    }
    return result;
}

int main() {
    long long num1, num2;
    std:: cin >> num1 >> num2;
    std::cout << mixNums(num1, num2);
}