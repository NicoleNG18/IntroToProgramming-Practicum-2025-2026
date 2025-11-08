#include <iostream>
bool isAlpha (char alph)
{
    return (alph >= 'a' && alph <= 'z') || (alph >= 'A' && alph <= 'Z');
}

bool isLower (char lower)
{
    return lower >= 'a' && lower <= 'z';
}

bool isUpper (char upper)
{
    return upper >= 'A' && upper <= 'Z';
}

bool isDigit (char num)
{
    return num >= '0' && num <= '9';
}

bool isAlnum (char alnum)
{
   return isDigit(alnum) || isAlpha(alnum);
}

char capitalize(char cap)
{
    return cap >= 'a' && cap <= 'z' ? cap - ('a' - 'A') : cap; //'a' - 'A' po ascii dava 32(space), a ot koqto malka bukva izkarame 32 po ascii poluchavame glavnata mu
}

char makeLower(char low)
{
    return low >= 'A' && low <= 'z' ? low + ('a' - 'A') : low;
}

int parceInt(char parceint) // int za da moje da vrushta i -1
{
    if (parceint >= '0' && parceint <= '9')
    {
        return parceint - '0'; // zashtoto koqto i da e cifra v char - 0ta kato char dava stoinostta na cifrata
    }
    else
    {
        return -1; //vseki simvol osven cifra shte dade -1
    }
}//ebasi primera

char toChar(int rndm)
{
    if (rndm >= 0 && rndm <= 9) // ako chisloto popada v uslovieto shte vurne chisloto + chara na 0ta i shte dava vinagi ekvivalenta na chisloto no v char
    {
        return rndm + '0';
    }
    else
    {
        return '\0'; // ako chisloto ne popada v uslovieto vrushta '/0'
    }

}

unsigned resultVar = 1;
unsigned inFunc (unsigned inp, unsigned base )
{
    while (inp > base) // 8 / 2 = 4 (resvar = 1) / 2 = 2 (resvar = 2) 2/2 = 1(resvar = 3)
    {
        if (inp % base == 0)
        {
            resultVar++;
        }
        inp /= base; //32 / 2 = 16 / 2
    }
    return resultVar;
}
unsigned myLog(unsigned base, unsigned input)
{
    if (base < 2 || input == 0)
    {
        return 0;
    }
    inFunc(input, base);
    return resultVar;
}

double myPow (double inp, int power)
{
    if (inp == 1)
    {
        return inp;
    }
    if (power == 0)
    {
        return 1;
    }
    if (power < 0)
    {
        return 1.0 / inp;
    }
    if (power > 1)
    {
        double ans = inp;
        for (int i = 1; i < power; i++)
        {
            ans *= inp;
        }
        return ans;
    }
}

unsigned myCeil(float inp)
{
    unsigned temp = inp * 10;
    return (temp / 10) + 1;
}

unsigned myFloor(float inp)
{
    unsigned temp = inp * 10;
    return temp / 10;
}

unsigned myAbs(int inp)
{
    if (inp < 0)
    {
        return -inp;
    }
    else
        return inp;
}
