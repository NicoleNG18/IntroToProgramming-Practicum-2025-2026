#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    for (int i = num2; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}