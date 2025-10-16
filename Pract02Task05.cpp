#include <iostream>

int main () {

    unsigned long long seconds;

    std::cin >> seconds;

    unsigned long long days, hours, minutes, secondsleft;
    days = seconds / 86400;
    hours = (seconds % 86400) / 3600;
    minutes = (seconds % 3600) / 60;
    secondsleft = seconds % 60;

    std::cout << days << " days, " << hours << " hours, " << minutes << " minutes, "
    << secondsleft << " seconds";

}