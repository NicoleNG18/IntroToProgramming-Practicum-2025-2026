#include <iostream>
using namespace std;

int main() {
    unsigned hour, minutes;
    cin >> hour >> minutes;

    if (minutes<45) {
        cout<<hour<<":"<<(minutes+15)<<endl;
    }
    else {
        unsigned sum_minutes = hour * 60 + minutes;
        unsigned new_total_minutes = sum_minutes + 15;

        unsigned new_hour = (new_total_minutes / 60) % 24;
        unsigned new_minutes = new_total_minutes % 60;

        if (new_hour < 10) {
            cout << "0" << new_hour;
        } else {
            cout << new_hour;
        }

        cout << " ";

        if (new_minutes < 10) {
            cout << "0" << new_minutes;
        } else {
            cout << new_minutes;
        }

        cout << endl;

        return 0;
    }

}
