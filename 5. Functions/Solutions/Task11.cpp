#include <iostream>

bool isEven(int n) {
    return n % 2 == 0;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int productOfDigits(int n) {
    int product = 1;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

int reverseNumber(int num)
{
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    
    return reversed;
}

bool isPalindrome(int n) {
   return n == reverseNumber(n);
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    std::cout << "Even: " << (isEven(n) ? "Yes" : "No") << std::endl;
    std::cout << "Sum of digits: " << sumOfDigits(n) << std::endl;
    std::cout << "Product of digits: " << productOfDigits(n) << std::endl;
    std::cout << "Palindrome: " << (isPalindrome(n) ? "Yes" : "No") << std::endl;
}
