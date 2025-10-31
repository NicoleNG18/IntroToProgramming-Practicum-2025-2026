#include <iostream>

using namespace std;

int main() {
    unsigned int year;

    cout << "Enter a year: ";
    cin >> year;

    bool leap = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);

    cout << (leap ? "yes" : "no") << endl;
}