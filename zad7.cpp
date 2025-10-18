

#include <iostream>

int main()
{
    unsigned int increase, hours, minutes;
    std::cout << "Enter time: ";
    std::cin >> hours >> minutes;
    increase = minutes + 15;
    if (increase > 59) {
        hours = (hours + 1) % 24;
        minutes = increase - 60;
    }
    else {
        minutes = increase;
    }
        std::cout << "Time in 15 minutes: "
        << (hours < 10 ? "0" : "") << hours << ":"
        << (minutes < 10 ? "0" : "") << minutes << std::endl;

}
