#include <iostream>

using namespace std;

bool isPerfect(int num) {
    if (num <= 1) {
        return false;
    }

    int sumOfDivisors = 1;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            sumOfDivisors += i;
        }
    }

    return num == sumOfDivisors;
}

int main() {
    cout << boolalpha << isPerfect(6) << endl;
    cout << boolalpha << isPerfect(28) << endl;
    cout << boolalpha << isPerfect(25) << endl;
}