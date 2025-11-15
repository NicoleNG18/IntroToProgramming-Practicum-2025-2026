#include <iostream>

unsigned removeHundreds(unsigned num)
{
	unsigned thousands = num / 1000;
	unsigned remaining = num % 100;
	return thousands * 100 + remaining;
}

bool isDivisibleWithoutHundreds(unsigned num, unsigned divisor)
{
	return removeHundreds(num) % divisor == 0;
}

void printDivisibles(unsigned lowerBound, unsigned upperBound)
{
	bool areDivisiblesPresent = false;
	for (int i = lowerBound; i <= upperBound; i++)
	{
		if (isDivisibleWithoutHundreds(i, 11))
		{
			areDivisiblesPresent = true;
			std::cout << i << " ";
		}
	}

	if(!areDivisiblesPresent)
		std::cout << "No such a number!";
}

int main()
{
	std::cout << "Enter interval numbers: " << std::endl;
  unsigned start, end;
  std::cin>> start >> end;

 printDivisibles(start,end);
}
