
#include <iostream>


unsigned dividers(unsigned n )
{
    for (int i = 1; i*i <=n ; i++)
    {
        if (n%i==0)
        {
            if (i*i!=n)
            {
                std::cout << n / i;
            }
        }
        return i;
    }
}


bool isEqual(unsigned perfNum, unsigned dividers)
{
    if (perfNum == )
    {

    }
}

int main()
{
    int perfNum;
    std::cin >> perfNum;


}
