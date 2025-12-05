#include <iostream>
using namespace std;

const unsigned SIZE_OF_ARRAY = 128;

bool isZigZag(int arr[], unsigned length)
{
	for (int i = 0; i < length - 1; ++i)
	{
		if (i % 2 == 0)  // at even indexes the element must be larger than its neighbors
		{
			if (!(arr[i] < arr[i + 1]))
			{
				return false;
			}
		}
		else
		{
			if (!(arr[i] > arr[i + 1]))
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	int number;

	do
	{
		cin >> number;
	} while (number<1 || number>SIZE_OF_ARRAY);

	int arr[SIZE_OF_ARRAY];

	for (int i = 0; i < number; ++i)
	{
		cin >> arr[i];
	}

	cout << boolalpha << isZigZag(arr, number);

	return 0;
}