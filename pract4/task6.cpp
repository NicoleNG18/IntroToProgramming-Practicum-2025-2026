#include <iostream>
int main ()
{
    int num;
    std::cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == j)
            {
                std::cout << 0;
            }
            if ( j < i)
            {
                std::cout << "-";
            }
            if (j > i)
            {
                std::cout << "+";
            }

        }
        std::cout << " " << std::endl;
    }
}