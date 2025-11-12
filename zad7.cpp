#include <iostream>

void findNumbers(int m, int n) {
    bool found = false;

    for (int num = m; num <= n; num++) {
        if (num < 1000 || num > 9999) continue;

        int thousands = num / 1000;
        int hundreds = (num / 100) % 10;
        int tens = (num / 10) % 10;
        int units = num % 10;

        int newNumber = thousands * 100 + tens * 10 + units;

        if (newNumber % 11 == 0) {
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

    if (m >= n || m <= 0 || n <= 0) {
        std::cout << "Invalid input!";
        return 0;
    }

    findNumbers(m, n);
    return 0;
}
