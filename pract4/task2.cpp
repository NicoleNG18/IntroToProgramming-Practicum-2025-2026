#include <iostream>
int main ()
{
    int num, position;
    std::cin >> num >> position;

    for (int i = 1; i < position; i++)
    {

        if (num > 0)
        {
            num /= 10;
        }
        if (position > num)
        {
            std::cout << "Dont have digit on index " << position << std::endl;
            return 0;
        }
    }
    std::cout << num % 10 << std::endl;
}