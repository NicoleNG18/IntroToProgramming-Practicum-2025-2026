#include <iostream>

int main() {

    unsigned int hours, minutes;
    std::cin >> hours >> minutes;

    unsigned int minutesPlus = minutes + 15;
    const unsigned int MININHOUR = 60;

    if (hours > 9 && hours < 23) {
        if (minutes > 44) {
            std::cout << ++hours << " " <<
                ((minutesPlus - MININHOUR) < 10 ? "0" : "" ) << minutesPlus - MININHOUR;
            // навсякъде с тернарния оператор проверявам дали
            // трябва да сложа 0 пред минутите, когато се променя часа
        }
        else {
            std::cout << hours << " " << minutesPlus;
        }
    }

    if (hours == 9) {
        if (minutes > 44) {
            std::cout << "10 " <<
                ((minutesPlus - MININHOUR) < 10 ? "0" : "") << minutesPlus - MININHOUR;
        }
        else {
            std::cout << hours << " " << minutesPlus;
        }
    }

    if (hours < 9) {
        std::cout << "0";
        if (minutes > 44) {
            std::cout << ++hours << " " <<
                ((minutesPlus - MININHOUR) < 10 ? "0" : "") << minutesPlus - MININHOUR;
        }
        else {
            std::cout << hours << " " << minutesPlus;
        }
    }

    if (hours == 23) {
        if (minutes > 44) {
            std::cout << "00 " <<
                ((minutesPlus - MININHOUR) < 10 ? "0" : "") << minutesPlus - MININHOUR;
        }
        else {
            std::cout << hours << " " << minutesPlus;
        }
    }
}