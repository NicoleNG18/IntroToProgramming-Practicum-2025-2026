#include <iostream>

using namespace std;

int main() {
    unsigned int hours, minutes;

    cout << "Enter hours and minutes (24-hour format): ";
    cin >> hours >> minutes;
    if (hours > 23 || minutes > 59) {
        cout << "Error! Invalid input." << endl;
    } else {
        unsigned int newHours = hours;
        unsigned int newMinutes = minutes + 15;
        if (newMinutes >= 60) {
            newMinutes -= 60;

            newHours++;
            if (newHours == 24) {
                newHours = 0;
            }
        }

        cout << (newHours <9 ? '0' : '\0') << newHours << " ";
        cout << (newMinutes < 9 ? '0' : '\0') << newMinutes << endl;
    }
}