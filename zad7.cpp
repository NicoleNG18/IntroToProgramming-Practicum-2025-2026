

#include <iostream>

int main()
{
    int num, absolute;
    std::cin >> num;

    absolute = num * (num < 0) * (-1) + num * (num >= 0);

    std::cout << absolute;

}
