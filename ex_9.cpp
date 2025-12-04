#include <iostream>
using namespace std;

const unsigned SIZE_OF_ARRAY = 128;

void solve(int arr[], unsigned length)
{
	int countDigits[10] = { 0 };

	for (int i = 0; i < length; ++i)
	{
		countDigits[arr[i]]++;
	}

	for (int i = 0; i <= 9; ++i)
	{
		if (countDigits[i] != 0)
		{
			cout << i << countDigits[i];
		}
	}
}

int main()
{
	int n;

	do
	{
		cin >> n;
	} while (n < 1 || n > SIZE_OF_ARRAY);

	int arr[SIZE_OF_ARRAY];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	solve(arr, n);

	return 0;
}