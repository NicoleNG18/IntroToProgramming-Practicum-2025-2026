#include <iostream>
unsigned revNum(unsigned num)
{
    unsigned res = num % 10;
    while (num >= 10)
    {

        num /= 10;
        unsigned curr = num % 10;
        res = res * 10 + curr;
    }
    return res;
}
unsigned concOfRevAndNum(unsigned number)
{
    unsigned ogNum = number;
    unsigned sum = 0;
    unsigned count = 1;

    while (number != 0)
    {
        number /= 10;
        count *= 10;
    }

    sum = revNum(ogNum) * count + ogNum;
    return sum;
}
int main ()
{
    unsigned num;
    std::cin >> num;

    std::cout << concOfRevAndNum(num);
}