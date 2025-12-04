#include <iostream>
using namespace std;

const unsigned SIZE_OF_ARRAY = 100;

void getArray(int arr[], unsigned length)
{
	for (int i = 0; i < length; ++i)
	{
		cin >> arr[i];
	}
}

void printArray(const int arr[], unsigned length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	unsigned countOfElements;

	do
	{
		cin >> countOfElements;
	} while (countOfElements < 1 || countOfElements>SIZE_OF_ARRAY);

	int arr[SIZE_OF_ARRAY];

	getArray(arr, countOfElements);
	printArray(arr, countOfElements);

	return 0;
}