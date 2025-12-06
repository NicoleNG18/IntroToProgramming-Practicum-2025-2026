#include <iostream>
unsigned toFactoriel (unsigned input)
{
    unsigned factoriel = 1;
    //2! = 1x2    4!= 4x3x2x1
    for (unsigned i = input; i > 1; i--)
    {
        factoriel = factoriel * i;
    }
    return factoriel;
}
int main ()
{
    unsigned number;
    std:: cin >> number;

    std:: cout << toFactoriel(number);
}