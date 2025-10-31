#include <iostream>

using namespace std;

int main() {
    unsigned int time;

    cout << "Enter time in seconds: ";
    cin >> time;

    unsigned int seconds = time % 60;

    time /= 60;
    unsigned int minutes = time % 60;

    time /= 60;
    unsigned int hours = time % 24;

    unsigned int days = time / 24;

    cout << days << " days, " << hours << " hours, " << minutes << " minutes, "
         << seconds << " seconds" << endl;
}