#include <iostream>
long long result = 0;
long long reversed = 0;
long long convertToBinary(unsigned decimalNum)
{
    long long base = 1;

    while (decimalNum != 0)
    {
        unsigned currBit = decimalNum % 2;
        result += currBit * base;
        base *= 10;
        decimalNum /= 2;
    }
    return result;
}
long long reverseNumber(long long resultOfConversion)
{
    while (resultOfConversion > 0)
    {
        reversed = reversed * 10 + (resultOfConversion % 10);
        resultOfConversion /= 10;
    }
    return reversed;
}
bool isPalindrome(long long resultOfConversion)
{
    return resultOfConversion == reverseNumber(result);
}
void binIsPalindrome ()
{
    unsigned numToCheck = 1;
    unsigned count = 0;
    while (count < 20)
    {
        long long binNum = convertToBinary(numToCheck);

        if (isPalindrome(binNum) == true)
        {
            std::cout<< binNum << " ";
            count++;
        }
        numToCheck++;
    }

}
int main ()
{
    binIsPalindrome();
}