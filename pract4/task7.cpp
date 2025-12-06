#include <iostream>
int main ()
{
    unsigned num;
    std::cin >> num;

    for (unsigned i = 0; i < num; i++)
    {
        for (unsigned j = 0; j < num; j++)
        {
            if (i + j == num)
            {
                std::cout << "x = " << i << " y = " << j << std::endl;
            }
            else
            {

            }
        }
        std::cout << " " << std::endl;
    }
}