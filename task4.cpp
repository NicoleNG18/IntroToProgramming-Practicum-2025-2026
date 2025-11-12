#include <iostream>
using namespace std;

bool isPerfect(int n) {
    if (n < 1) return false;
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    int n;
    cin >> n;
    cout << boolalpha << isPerfect(n) << endl;
}