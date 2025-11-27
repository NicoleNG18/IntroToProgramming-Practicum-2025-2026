#include <iostream>

bool isPerfect(unsigned num)
{
    int sum = 0;
   
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }

    return sum == num;
}

int main()
{
    unsigned num;
    std::cout << "Enter number: ";
    std::cin >> num;

    if (isPerfect(num))
        std::cout << num << " is perfect.";
    else
        std::cout << num << " isn't perfect.";
}
