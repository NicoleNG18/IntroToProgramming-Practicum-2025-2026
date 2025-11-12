

#include <iostream>

int mixNum(int a, int b) {
    int temp = 0;
    int multiplier = 1;

    while (a > 0 || b > 0) {
        if (a > 0) {
            temp += (a % 10) * multiplier;
            multiplier *= 10;
            a /= 10;
        }
        if (b > 0) {
            temp += (b % 10) * multiplier;
            multiplier *= 10;
            b /= 10;
        }
    }

    int result = 0;
    while (temp > 0) {
        result = result * 10 + (temp % 10);
        temp /= 10;
    }
    return result;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << mixNum(x, y) << std::endl;
    return 0;
}
