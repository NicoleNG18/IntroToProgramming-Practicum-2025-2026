

#include <iostream>

unsigned counter(int num)
{
    unsigned counter = 0;
    while (num!=0)
    {
        num /= 10;
        counter++;
    }
    return counter;
}


int main()
{
    int num;
    std::cin >> num;

    std::cout << counter(num);

}

