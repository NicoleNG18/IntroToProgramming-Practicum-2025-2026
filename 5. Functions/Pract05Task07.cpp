#include <iostream>

void deleneNa11 (unsigned int m, unsigned int n) {

    if (m > n) {
        unsigned int help = m;
        m = n;
        n = help;
    }

bool found = false;

    for (unsigned int i = m; i <= n; i++) {

        unsigned int lastTwoDigits = i % 100;
        unsigned int thousands = i / 1000;
        unsigned int newnum = lastTwoDigits + thousands * 100;

        if (newnum % 11 == 0) {
            std::cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        std::cout << "No such a number!";
    }
}

int main() {
    unsigned int m, n;
    std::cin >> m >> n;
    deleneNa11(m, n);
}