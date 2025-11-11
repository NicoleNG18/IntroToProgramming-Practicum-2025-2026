#include <iostream>
unsigned reverseNum (unsigned number)
{

    unsigned res = 0;
    while (number != 0)
    {
        unsigned firstDig = number % 10;
        res = res * 10 + firstDig;
        number /= 10;
    }
    return res;


}
int main ()
{
    unsigned num;
    std::cin >> num;

    std::cout << reverseNum(num);
}