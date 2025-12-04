#include <iostream>
using namespace std;

const unsigned SIZE_OF_ARRAY = 500;

bool consecutiveElements(int arr[], unsigned length)
{
	for (int i = 0; i < length - 1; ++i)
	{
		if (arr[i] == arr[i + 1])
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int n;
	do 
	{
		cin >> n;
	} while (n < 1 || n>500);

	int arr[SIZE_OF_ARRAY];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << boolalpha << consecutiveElements(arr, n);

	return 0;
}