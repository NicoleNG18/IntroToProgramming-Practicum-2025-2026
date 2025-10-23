#include <iostream>
using namespace std;
int main() {
    //task 6
    unsigned month;
    cin >> month;
    if (month == 1 or month == 3 or month == 5 or month == 7
        or month == 8 or month == 10 or month ==12) {
        cout<<"31";
    }
    else if (month != 2) {
        cout<<"30";
    }
    else {
        cout<<'Enter year: ';
        unsigned year;
        cin>>year;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            cout<<"29";
        }
        else {
            cout<<"28";
        }
    }
}
