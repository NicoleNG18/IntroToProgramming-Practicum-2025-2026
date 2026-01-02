#include <iostream>

using namespace std;

bool isValidDate(unsigned int day, unsigned int month, unsigned int year) {
    if (day < 1 || day > 31 || month < 1 || month > 12) {
        return false;
    }

    unsigned int lastValidDay;
    switch (month) {
        case 1:
            lastValidDay = 31;
            break;
        case 2: {
            bool leap = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);

            lastValidDay = leap ? 29 : 28;
            break;
        }
        case 3:
            lastValidDay = 31;
            break;
        case 4:
            lastValidDay = 30;
            break;
        case 5:
            lastValidDay = 31;
            break;
        case 6:
            lastValidDay = 30;
            break;
        case 7:
            lastValidDay = 31;
            break;
        case 8:
            lastValidDay = 31;
            break;
        case 9:
            lastValidDay = 30;
            break;
        case 10:
            lastValidDay = 31;
            break;
        case 11:
            lastValidDay = 30;
            break;
        case 12:
            lastValidDay = 31;
            break;
    }

    return day <= lastValidDay;
}

int main() {
    cout << boolalpha << isValidDate(29, 2, 2020) << endl;
    cout << boolalpha << isValidDate(29, 2, 2019) << endl;
}