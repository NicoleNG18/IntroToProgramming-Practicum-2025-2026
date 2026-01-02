#include <iostream>

using namespace std;

long long int reversedDigits(long long int n) {
    long long int reversed = 0;

    while (n > 0) {
        reversed *= 10;
        reversed += n % 10;

        n /= 10;
    }

    return reversed;
}

long long int decimalToBinary(int decimal) {
    unsigned int trailingZeroCount = 0;
    long long int binary = 0;

    while (decimal % 2 == 0) {
        decimal /= 2;
        trailingZeroCount++;
    }

    while (decimal > 0) {
        binary *= 10;

        if (decimal % 2 == 1) {
            binary += 1;
        }

        decimal /= 2;
    }

    binary = reversedDigits(binary);

    for (unsigned int i = 0; i < trailingZeroCount; i++) {
        binary *= 10;
    }

    return binary;
}

bool isPalindrome(long long int n) {
    return n == reversedDigits(n);
}

void printFirst20NaturalWithBinaryPalindromes() {
    unsigned int palindromeCount = 0;
    int n = 1;

    while (palindromeCount < 20) {
        long long int binary = decimalToBinary(n);

        if (isPalindrome(binary)) {
            palindromeCount++;

            cout << "#" << palindromeCount << " " << n << " " << binary << endl;
        }

        n++;
    }
}

int main() {
    printFirst20NaturalWithBinaryPalindromes();
}