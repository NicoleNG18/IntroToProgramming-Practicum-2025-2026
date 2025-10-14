#include <iostream>

int main()
{
    
    unsigned int seconds;
    
    std::cin >> seconds;

   unsigned int days = seconds / 86400;
   unsigned int secondsInDayLeft = seconds % 86400;

   unsigned int hours = secondsInDayLeft / 3600;
   unsigned int secondsInHourLeft = secondsInDayLeft % 3600;

   unsigned int minutes = secondsInHourLeft / 60;
   unsigned int secondsInMinute = secondsInHourLeft % 60;

   unsigned int secondsLeft = secondsInMinute;

   std::cout << days << "Days" << std::endl;
    std::cout << hours << "Hours" << std::endl;
    std::cout << minutes << "Minutes" << std::endl;
    std::cout << secondsLeft << "Seconds" << std::endl;
}

