#include <iostream>
using namespace std;

const unsigned SIZE_OF_ARRAY = 256;

int countInversions(int arr[], unsigned length)
{
	int counter = 0;

	for (int i = 0; i < length - 1; ++i)
	{
		for (int j = i + 1; j < length; ++j)
		{
			if (arr[i] > arr[j])
			{
				counter++;
			}
		}
	}
	return counter;
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

	cout << countInversions(arr, n);

	return 0;
}