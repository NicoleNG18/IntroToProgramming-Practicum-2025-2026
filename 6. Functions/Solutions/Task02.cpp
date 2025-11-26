#include <iostream>

long long convertToBinary(unsigned decimalNum)
{
    long long result = 0;
	long long base = 1;
	
	while (decimalNum > 0)
	{
		result += decimalNum %  2 * base;
		base *= 10;
		decimalNum /= 2;
	}
	return result;
}

unsigned long long reverseNumber(unsigned long long number) 
{
    unsigned long long reversed = 0;
    while (number > 0) 
    {
        unsigned lastDigit = number % 10;       
        reversed = (reversed * 10) + lastDigit; 
        number /= 10;                  
    }
    return reversed;
}

bool isPalindrome(unsigned number)
{
   unsigned long long reversedNum = reverseNumber(number);
   return number==reversedNum;
}

void printBinaryPalindromes()
{
  unsigned count = 0;
  unsigned curr=1;

  while(count < 20)
  {
    unsigned long long binaryNum = convertToBinary(curr);
    if(isPalindrome(binaryNum))
    {
      std::cout << curr << " ";
      count++;
    }
    curr++;
  }
  
}

int main()
{
  printBinaryPalindromes();
}
