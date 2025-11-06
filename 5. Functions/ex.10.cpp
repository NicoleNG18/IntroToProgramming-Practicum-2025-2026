#include <iostream>
using namespace std;

//We find the number of different prime divisors of a given number

int countDistinctPrimeFactors(int n)
{
	if (n <= 1)
	{
		return 0;
	}

	int count = 0;

	if (n % 2 == 0)
	{
		count++;

		while (n % 2 == 0)
		{
			n /= 2;
		}
	}

	for (int i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			count++;

			while (n % i == 0)
			{
				n /= i;
			}
		}
	}

	if (n > 1)
	{
		count++;
	}
	return count;
}

int countNumbersWithFactors(int a, int b, int k)
{
	if (a <= 0 || b <= 0 || a > b || k < 0)
	{
		return 0;
	}

	int totalCount = 0;

	for (int num = a; num <= b; ++num)
	{
		int distinctFactors = countDistinctPrimeFactors(num);

		if (distinctFactors == k)
		{
			totalCount++;
		}
	}
	return totalCount;
}

int main()
{
	int number;
	cin >> number;

	cout << countNumbersWithFactors(number);

	return 0;
}