#include <iostream>

int getFibonacciNum(unsigned n)
{
    if (n <= 1) return n;

    unsigned prev = 0;
    unsigned curr = 1;

    for (unsigned i = 2; i <= n; i++)
    {
        unsigned next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

int main()
{
    unsigned n;
    std::cin >> n;
  
    std::cout << getFibonacciNum(n);
}
