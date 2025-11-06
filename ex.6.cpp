#include <iostream>
using namespace std;

int square(int x)
{
	return x * x;
}

int sumOfSquares(int n)
{
	if (n < 1)
	{
		return 0;
	}

	int sum = 0;

	for (int i = 1; i <= n; ++i)
	{
		sum += square(i);
	}

	return sum;
}

int main()
{
	int number;
	cin >> number;

	cout << sumOfSquares(number);

	return 0;
}