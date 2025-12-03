#include <iostream>

unsigned int square (int x) {
    return x * x;
    }

unsigned int sumOfSquares (int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += square(i);
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << sumOfSquares(n);
}