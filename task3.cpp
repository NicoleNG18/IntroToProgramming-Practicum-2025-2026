#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

bool isValidDate (int day, int month, int year) {
    if (year<1) {
        return false;
    }
    if (month<1 || month>12) {
        return false;
    }

    int daysInMonth;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        daysInMonth = 31; break;
        case 4: case 6: case 9: case 11:
        daysInMonth = 30; break;
        case 2:
            daysInMonth = isLeapYear(year) ? 29 : 28; break;
        default:
            return false;
    }
    return day >= 1  && day <= daysInMonth;
}

int main() {
    int dd, mm, yyyy;
    cin >> dd >> mm >> yyyy;
    cout<<boolalpha<<isValidDate(dd, mm, yyyy)<<endl;

    return 0;

}
