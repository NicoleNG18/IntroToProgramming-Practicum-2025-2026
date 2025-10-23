#include <iostream>
using namespace std;

int main()
{
    int hours, minutes;
    cin >> hours >> minutes;
    minutes += 15;

    if (minutes >= 60) {
        minutes -= 60;
        hours++;
    }
    if (hours >= 24) {
        hours = 0;
    }
    if (hours < 10)
        cout << "0";
    cout << hours << " ";

    if (minutes < 10)
        cout << "0";
    cout << minutes;
    return 0;
}
