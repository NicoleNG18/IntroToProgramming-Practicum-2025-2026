#include <iostream>
unsigned long toFibonachi (unsigned num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }
    unsigned long long secondPrev = 0, prev = 1, temp;
    for (unsigned i = 2; i <= num; i++)
    {
        temp = prev + secondPrev;       // f(i) = 0 + 1  
        secondPrev = prev;              // 0 = 1
        prev = temp;                    // 1 = f(i)
    }
    return prev;

}
int main ()
{
    unsigned placeInSequence;
    std::cin >> placeInSequence;

    std::cout << toFibonachi(placeInSequence);
}