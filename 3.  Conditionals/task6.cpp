#include <iostream>

using namespace std;

int main() {
    int month;

    cout << "Enter an integer between 1 and 12: ";
    cin >> month;

    switch (month) {
        case 1:
            cout << 31 << endl;
            break;
        case 2: {
            unsigned int year;
            cout << "Enter year: ";
            cin >> year;

            bool leap = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);

            cout << (leap ? 29 : 28) << endl;
            break;
        }
        case 3:
            cout << 31 << endl;
            break;
        case 4:
            cout << 30 << endl;
            break;
        case 5:
            cout << 31 << endl;
            break;
        case 6:
            cout << 30 << endl;
            break;
        case 7:
            cout << 31 << endl;
            break;
        case 8:
            cout << 31 << endl;
            break;
        case 9:
            cout << 30 << endl;
            break;
        case 10:
            cout << 31 << endl;
            break;
        case 11:
            cout << 30 << endl;
            break;
        case 12:
            cout << 31 << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
    }
}