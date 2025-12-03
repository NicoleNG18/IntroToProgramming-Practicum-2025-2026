#include <iostream>

bool cetno(unsigned int n) {
    if (n % 2 ==0) {
        return true;
    }
    else {
        return false;
    }
}

unsigned int sumOfDigits(unsigned int n) {
    unsigned int sum = 0;
    while (n != 0) {
        unsigned int lastDigit = n % 10;
        sum += lastDigit;
        n /= 10;
    }
    return sum;
}

unsigned int prod (unsigned int n) {
    unsigned int prod = 1;
    while (n != 0) {
        unsigned int lastDigit = n % 10;
        prod *= lastDigit;
        n /= 10;
    }
    return prod;
}

unsigned int reversed(unsigned int n) {
    unsigned int reversed = 0;
    unsigned int base = 10;
    while (n != 0) {
        unsigned int last_D = n % 10;
        reversed = last_D + reversed * base;
        n /= 10;
    }
    return reversed;
}

bool isPalindrome(unsigned int n) {
    if (n == reversed(n)) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    unsigned int n;
    std::cin >> n;
    std::cout << "Is even: " << std::boolalpha << cetno(n) << std::endl;
    std::cout << "Sum of digits: " << sumOfDigits(n) << std::endl;
    std::cout << "Prod of digits: " << prod(n) << std::endl;
    std::cout << "Is Palindrome: " << std::boolalpha << isPalindrome(n) ;
}