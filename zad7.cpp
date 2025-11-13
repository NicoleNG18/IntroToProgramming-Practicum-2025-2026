#include <iostream>

bool isValidInterval(int m, int n) {
    return (m > 0 && n > 0 && m < n);
}

int transformNumber(int num) {
    int thousands = num / 1000;
    int tens = (num / 10) % 10;
    int units = num % 10;
    return thousands * 100 + tens * 10 + units;
}

bool isDivisibleBy11(int num) {
    return num % 11 == 0;
}

void findNumbers(int m, int n) {
    bool found = false;

    for (int num = m; num <= n; num++) {
        if (num < 1000 || num > 9999) continue;

        int transformed = transformNumber(num);

        if (isDivisibleBy11(transformed)) {
            std::cout << num << " ";
            found = true;
        }
    }

    if (!found) {
        std::cout << "No such a number!";
    }
}

int main() {
    int m, n;
    std::cin >> m >> n;

    if (!isValidInterval(m, n)) {
        std::cout << "Invalid input!";
        return 0;
    }

    findNumbers(m, n);
    return 0;
}
