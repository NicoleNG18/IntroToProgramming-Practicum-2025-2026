#include <iostream>

unsigned getDigitCount(unsigned num, unsigned digit)
{
	size_t count = 0;
	while (num > 0)
	{
		if (num % 10 == digit)
		{
			count++;
		}
		num /= 10;
	}
	return count;
}

unsigned concatCountDigitsAtBack(unsigned num, unsigned digit, size_t count)
{
	for (size_t i = 0; i < count; i++)
	{
		num = (num * 10) + digit;
	}
	return num;
}

unsigned long sortNumber(unsigned long num)
{
	unsigned long result = 0;
  //Не можем да използваме unsigned за брояч в цикъл,
  //който намалява, защото когато достигне 0 и се намали с 1,
  //числото се превръща в много голямо положително и цикълът става безкраен.
	for (int i = 9; i >= 0; i--)
	{
		unsigned digitCount = getDigitCount(num, i);
		result = concatCountDigitsAtBack(result, i, digitCount);
	}
	return result;
}

int main()
{
  std::cout << "Enter number: " << std::endl;
  unsigned long number;
  std::cin >> number;

  std::cout<< "Sorted number: " << sortNumber(number);
}
