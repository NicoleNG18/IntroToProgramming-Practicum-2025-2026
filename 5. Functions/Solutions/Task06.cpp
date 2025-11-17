#include <iostream>

unsigned square(unsigned x) {
    return x * x;
}

unsigned sumOfSquares(unsigned n) {
    unsigned sum = 0;
    for (unsigned i = 1; i <= n; i++) {
        sum += square(i); 
    }
    return sum;
}

int main() {
    std::cout << "Enter natural number: " << std::endl;
    unsigned number;
    std::cin >> number;

    std::cout << "The sum of squares from 1 to " << number << " is " << sumOfSquares(number) << std::endl;
}
