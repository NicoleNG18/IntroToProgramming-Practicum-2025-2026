#include <iostream>

    const int SECONDS_IN_DAY = 86400;
    const int SECONDS_IN_HOUR = 3600;
    const int SECONDS_IN_MINUTE = 60;

int main() {
    int totalSeconds;
    
    std::cout<< "Enter time in seconds: " << std::endl;
    std::cin >> totalSeconds;

    int days = totalSeconds / SECONDS_IN_DAY;
    int hours = (totalSeconds % SECONDS_IN_DAY) / SECONDS_IN_HOUR;
    int minutes = (totalSeconds % SECONDS_IN_HOUR) / SECONDS_IN_MINUTE;
    int seconds = totalSeconds % SECONDS_IN_MINUTE;

    std::cout << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds" << std::endl;
}
