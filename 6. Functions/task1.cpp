#include <iostream>

using namespace std;

unsigned int factorial(unsigned int n) {
    unsigned int result = 1;

    for (unsigned int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    cout << factorial(5) << endl;
}