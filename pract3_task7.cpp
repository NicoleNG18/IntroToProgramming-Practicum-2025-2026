
#include <iostream>

int main()
{
    int hours;
    int minutes;

    std::cin >> hours >> minutes;

    if (minutes+15<60)
    {
        std::cout << hours << " " << minutes+15;
    }
    else if (minutes+15==60)
    {
        std::cout << hours+1 << " " << "00";
    }
    else if (minutes+15>60)
    {pract 3
        std::cout << hours + 1 << " " << "0"<< minutes + 15 - 60;
    }
}

