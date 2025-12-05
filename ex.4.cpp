#include <iostream>
using namespace std;

bool isPerfectNumber(int n)
{
	int sum = 0;

	for (int i = 1; i < n; ++i)
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}
	}

	if (sum == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int number;
	cin >> number;

	cout << boolalpha << isPerfectNumber(number);

	return 0;
}