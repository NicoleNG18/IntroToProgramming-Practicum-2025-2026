

#include <iostream>

int main()
{
    int time, days, hours, mins, secs;
    std::cout << "Enter time in seconds: ";
    std::cin >> time;
    secs = time % 60;  
    mins = (time % 3600) / 60; 
    hours = (time % (24 * 3600)) / 3600; 
    days = time / (24 * 3600);

    std::cout << days << " days, " 
              << hours << " hours, " 
              << mins << " minutes, " 
              << secs << " seconds" 
              << std::endl;
} 
