#include <iostream>

using namespace std;

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

int prodOfDigits(int n) {
    int prod = 1;
    while (n > 0) {
        prod *= n % 10;
        n /= 10;
    }

    return prod;
}

int reversedDigits(int n) {
    int reversed = 0;

    while (n > 0) {
        reversed *= 10;
        reversed += n % 10;
        n /= 10;
    }

    return reversed;
}

bool isPalindrome(int n) {
    return n == reversedDigits(n);
}

int main() {
    int n;

    do {
        cout << "Enter n > 0: ";
        cin >> n;
    } while (n <= 0);

    cout << boolalpha << "Is even: " << isEven(n) << endl;
    cout << "Sum of digits: " << sumOfDigits(n) << endl;
    cout << "Prod of digits: " << prodOfDigits(n) << endl;
    cout << boolalpha << "Is palindrome: " << isPalindrome(n) << endl;
}