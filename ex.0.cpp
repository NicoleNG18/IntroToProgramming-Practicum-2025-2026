#include <iostream>
using namespace std;

long long fibonacci(int n)
{
	if (n < 0)
	{
		return -1;
	}
	else if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}

	int a = 0, b = 1, current = 0;

	for (int i = 2; i <= n; ++i)
	{
		current = a + b;
		a = b;
		b = current;
	}
	return current;
}

int main()
{
	int number;
	cin >> number;

	cout << fibonacci(number);

	return 0;
}