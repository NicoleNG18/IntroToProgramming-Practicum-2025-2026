#include <iostream>
using namespace std;

const unsigned  SIZE_OF_ARRAY = 16;

int gcd(int a, int b)
{
	while (b > 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int solve(int arr[], unsigned length)
{
	if (length == 0)
	{
		return 0;
	}

	int result = arr[0];

	for (int i = 1; i < length; ++i)
	{
		result = gcd(result, arr[i]);

		if (result == 1)
		{
			return 1;
		}
	}
	return result;
}

int main()
{
	int n;
	cin >> n;

	int arr[SIZE_OF_ARRAY];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << solve(arr, n);

	return 0;
}