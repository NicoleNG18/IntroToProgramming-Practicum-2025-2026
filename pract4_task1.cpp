
#include <iostream>

int main()
{
   
    unsigned int num;
    std::cin >> num;
    bool isPrime = true;

    if (num<2)
    {
        isPrime = false;
    }
    else
    {
        for (unsigned int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime==true)
    {
        std::cout << "Is prime.";
    }
    else
    {
        std::cout << "Is not prime.";
    }
    }


