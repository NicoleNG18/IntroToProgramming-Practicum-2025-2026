#include <iostream>

long long addToResult(long long result, short digit)
{
    return (result * 10) + digit;
}

long long mixNums(long long a, long long b) {
    long long result = 0;

    while (a > 0 || b > 0) {
        if (a > 0) {
            result = addToResult(result,a % 10);
            a /= 10;
        }
        if (b > 0) {
            result = addToResult(result,b % 10);
            b /= 10;
        }
    }

    return result;
}

int main() {
    long long a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Mixed number: " << mixNums(a, b) << std::endl;
}
