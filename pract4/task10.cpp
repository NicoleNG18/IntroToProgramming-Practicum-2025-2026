#include <iostream>
int main ()
{
    unsigned int n;
    std::cin >> n;

    if (n < 2)
    {
        return 1;
    }

    int first, second = 0; // na cikli izpolzvai cout za da testvash

    for (int i = 0; i < n; i++)
    {
        int input;
        std::cin >> input;
        if (input < second)
        {
            continue;
        }
        if (input > first)
        {
            second = first;
            first = input;
            continue;
        }
        if (input > second)
        {
            second = input;
        }
    }
    std::cout << "first: " << first <<  std::endl;
    std::cout << "second: " << second << std::endl;
}