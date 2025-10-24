#include <iostream>

int main()
{
    int minutes, hours;
    std::cin >> hours >> minutes;

    if (minutes + 15 > 59)
    {
        minutes -= 45;
        if (hours + 1 == 24) hours = 0;
        else hours++;
    }
    else minutes += 15;

    if (hours / 10 == 0) std::cout << 0 << hours << " ";
    else std::cout << hours << " ";
    if (minutes / 10 == 0) std::cout << 0 << minutes;
    else std::cout << minutes;

}

