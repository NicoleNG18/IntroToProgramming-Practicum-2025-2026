#include <iostream>
using namespace std;

const int FIRST_20_NUMBERS = 20;

int reversedBinary(int n)
{
	int reversed = 0;
	int temp = n;

	while (temp > 0)
	{
		reversed *= 2;
		long long bit = temp % 2;
		reversed = reversed + bit;

		temp /= 2;
	}
	return reversed;
}

void findBinaryPalindrome()
{
	int found = 0;
	int number = 1;

	while (number <= FIRST_20_NUMBERS)
	{
		if (number == reversedBinary(number))
		{
			cout << number << " ";
			found++;
		}
		number++;
	}
}

int main()
{
	findBinaryPalindrome();

	return 0;
}