#include <iostream>
int main ()
{
    unsigned int hour, minutes;
    std::cin >> hour >> minutes;

    int after15minutes = minutes + 15;
    int hourAfter15minutes = hour + 1;
    int newMinutes = after15minutes - 60;
    int const leadingZero = 0;



    if (minutes > 44 && after15minutes >= 60 && hour >= 10 && hour < 23 && newMinutes >= 10)
    {
        std::cout << hourAfter15minutes << ":" << newMinutes <<  std::endl;
    }
    else if (minutes > 44 && after15minutes >= 60 && hour >= 10 && hour < 23 && newMinutes < 10)
    {
        std::cout << hourAfter15minutes << ":" << leadingZero << newMinutes <<  std::endl;
    }
    else if (hour < 10 && minutes > 44 && after15minutes >= 60 && newMinutes >= 10)
    {
        std::cout << leadingZero << hourAfter15minutes << ":" << newMinutes << std::endl;
    }
    else if (hour == 23 && minutes > 44 && after15minutes >= 60 && newMinutes >= 10)
    {
        std::cout << leadingZero << hourAfter15minutes - 24 << ":" << newMinutes <<  std::endl;
    }
    else if (hour == 23 && minutes > 44 && after15minutes >= 60 && newMinutes < 10)
    {
        std::cout << leadingZero << hourAfter15minutes - 24 << ":" << leadingZero << newMinutes <<  std::endl;
    }
    else if (hour < 10 && minutes <= 44)
    {
        std::cout << leadingZero << hour << ":" << after15minutes << std::endl;
    }
    else if (minutes <= 44)
    {
        std::cout << hour << ":" << after15minutes << std::endl;
    }
    else if (minutes > 44 && after15minutes >= 60 && hour < 10 && newMinutes < 10)
    {
        std::cout << leadingZero << hourAfter15minutes << ":" << leadingZero << newMinutes << std::endl;
    }
    else
    {
        std::cout << "invalid input" << std::endl;
    }





}