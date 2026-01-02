#include <iostream>

using namespace std;

unsigned int nthFibonacci(unsigned int n) {
    unsigned int a = 1, b = 1;

    for (unsigned int i = 2; i < n; i++) {
        unsigned int temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    cout << nthFibonacci(6) << endl;
}