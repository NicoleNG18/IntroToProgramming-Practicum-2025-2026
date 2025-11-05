

#include <iostream>

int main()
{
    long long num;
    int position;

    std::cin >> num >> position;

    long long temp = num;
    int count = 0;
    while (temp>0)
    {
        count++;
        temp /= 10;
    }
    if (position<1 || position>count)
    {
        std::cout << "Don't have digit on index " << position;
    }
    else
    {
        for (long long i = 0; i < count - position ; i++)
        {
            num /= 10;
        }
        std::cout << num % 10;
    }
}
pract4

