#include <iostream>
using namespace std;

int product(int n)
{
	int prod = 1;

	for (int i = 1; i <= n; ++i)
	{
		prod *= i;
	}
	return prod;
}

int main()
{
	int number;
	cin >> number;

	cout << product(number);

	return 0;
}