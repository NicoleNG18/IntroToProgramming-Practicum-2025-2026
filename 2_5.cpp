#include <iostream>
using namespace std;

int main ()
{
    int seconds, minutes, hours, days;
    cout << "Please enter time in seconds " << endl;
    cin >> seconds;

    minutes = seconds / 60;
    hours = minutes / 60;
    days = hours / 24;
    
    cout << days << " days, " << hours % 24   << " hours, "  << minutes % 60
         << " minutes and "   << seconds % 60 << " seconds." << endl;
    return 0;
}