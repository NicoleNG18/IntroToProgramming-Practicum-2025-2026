#include <iostream>

unsigned long long powOfTen(unsigned k) {
    
    unsigned long long result = 1;
    
    while (k > 0) {
        result *= 10;
        k--;
    }
    
    return result;
}

void asciiDecode(unsigned long numCpy, unsigned k) {
    
    int curr = 0;
    char c = 0;

    while (k > 0) {
        unsigned long long base = powOfTen(k - 1);

        curr = curr * 10 + numCpy / base;
        numCpy %= base;

        if (curr > 255) {
            curr %= 100;
        }

        if (curr < 32) {
            k--;
            continue;
        }

        if (curr <= 255) {
            c = curr;
            std::cout << c;
            curr=0;
        }

        k--;
    }
}

int main() {
    
    unsigned long n;
    std::cout << "Enter number: " << std::endl;
    std::cin >> n;

    unsigned k;
    std::cout << "Enter count of digits: " << std::endl;
    std::cin >> k;

    std::cout << "Result: " << std::endl;
    asciiDecode(n, k);
}
