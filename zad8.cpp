

#include <iostream>

int addLastDigit(int number, int& result) {
    if (number > 0) {
        result = result * 10 + (number % 10);
        number /= 10;
    }
    return number;
}

int mixNums(int a, int b) {
    int result = 0;

    while (a > 0 || b > 0) {
        a = addLastDigit(a, result);
        b = addLastDigit(b, result);
    }

    return result;
}

int main() {
    int x, y;
    std::cin >> x >> y;

    int mixed = mixNums(x, y);
    std::cout << mixed << std::endl;

    return 0;
}
