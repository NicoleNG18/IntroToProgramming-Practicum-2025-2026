#include <iostream>
int main()
{
    unsigned int num;
    std::cin >> num;

    bool IsPrime = true;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            std::cout << "not Prime";
            IsPrime = false;
            break;
        }
    }

    if (IsPrime)
    {
        std::cout << "Prime";
    }
}