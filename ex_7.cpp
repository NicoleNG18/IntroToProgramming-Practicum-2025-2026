#include <iostream>
using namespace std;

void findDivisibleNumbers(int m, int n)
{
	if (m > n)
	{
		cout << "No such a number!";
	}

	int start = m;
	int end = n;

	if (start < 1000)
	{
		start = 1000;
	}

	if (end > 9999)
	{
		end = 9999;
	}

	int count = 0;

	for (int i = start; i <= end; ++i)
	{
		int thousands = i / 1000;
		int lastTwoDigits = i % 100;

		int newNumber = thousands * 100 + lastTwoDigits;
		
		if (newNumber % 11 == 0)
		{
			count++;
			cout << i << " ";
		}
	}
	if (count == 0)
	{
		cout << "No such a number!";
	}
}

int main()
{
	int m, n;
	cin >> m >> n;

	findDivisibleNumbers(m, n);

	return 0;
}