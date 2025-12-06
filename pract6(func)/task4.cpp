#include <iostream>
unsigned sumOfDivisors(unsigned number)
{
    unsigned sum = 0;
    for (unsigned i = number; i > 1; i--)
    {
        if (number % i == 0)
        {
            sum += number / i;
        }
    }
    return sum;
}
bool isPrime (unsigned number)
{
    bool prime = true;
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    if (prime)
    {
        return true;
    }
}
bool isPerfect(unsigned number)
{
    if (isPrime(number))
    {
        return false;
    }
    if (sumOfDivisors(number) == number)
    {
        return true;
    }

}
int main ()
{
    unsigned num;
    std::cin >> num;

    std::cout << std::boolalpha << isPerfect(num);
}