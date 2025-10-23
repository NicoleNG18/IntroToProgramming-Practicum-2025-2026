#include <iostream>
using namespace std;

int main() {
    //task 2
    unsigned year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}
