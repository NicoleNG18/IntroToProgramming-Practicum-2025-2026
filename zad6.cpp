

#include <iostream>

int square(int x) {
    return x * x;
}

int sumOfSquares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += square(i);
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Sum: " << sumOfSquares(n) << std::endl;

    return 0;
}
