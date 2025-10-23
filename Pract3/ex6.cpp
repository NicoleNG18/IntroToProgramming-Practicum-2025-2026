#include <iostream>
using namespace std;

int main()
{
    int month;
    cin >> month;
    int days;
    if (month == 2) {
        int year;
        cout << "Year:";
        cin >> year;
        bool leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
        if (leap)
            days = 29;
        else
            days = 30;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else
        days = 31;
    cout << days;
    return 0;
}

