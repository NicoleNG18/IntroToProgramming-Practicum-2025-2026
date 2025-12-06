#include <iostream>
int main ()
{
    unsigned int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) // 1; 2; 3; 4
    {
        for (int j = 1 ; j <= i; j++) //1; 2; 3; 4
        {
            std::cout << "$";
        }
        std::cout << " " << std::endl;
    }
}