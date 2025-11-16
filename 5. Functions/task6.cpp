#include <iostream>

using namespace std;

unsigned int square(int x) {
    return (unsigned int)(x * x);
}

unsigned int sumOfSquares(int n) {
    unsigned int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += square(i);
    }

    return sum;
}

int main() {
    cout << sumOfSquares(3) << endl;
    cout << sumOfSquares(5) << endl;
}