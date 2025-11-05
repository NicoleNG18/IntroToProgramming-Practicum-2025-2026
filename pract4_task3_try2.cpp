
#include <iostream>

int main()
{
    int a;
    int b;
    int final;
    std::cin >> a >> b;

    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    while (b != 0)
    {
        int temp = b;
        b = a % b;
       final = temp;
    }
    std::cout << final;
}

