#include <iostream>
using namespace std;

const unsigned SIZE_OF_ARRAY = 64;

int sumOfUniqueNumbers(int arr[], unsigned length)
{
	int count[10] = { 0 };
	int sum = 0;

	for (int i = 0; i < length; ++i) // count how many repeating digits we have
	{
		count[arr[i]]++;
	}

	for (int i = 0; i < 10; ++i)
	{
		if (count[i] == 1)
		{
			sum += i;
		}
	}
	return 0;
}


int main()
{
	int number; 

	do
	{
		cin >> number;
	} while (number < 1 || number>64);

	int arr[SIZE_OF_ARRAY];

	for (int i = 0; i < number; ++i)
	{
		do
		{
			cin >> arr[i];
		} while (arr[i] < 0 || arr[i]>9);
	}

	cout << sumOfUniqueNumbers(arr, number);

	return 0;
}