#include <iostream>
using namespace std;

const unsigned SIZE_OF_ARRAY = 64;

void readElements(int arrayData[], int count)
{
	if (count > SIZE_OF_ARRAY)
	{
		count = SIZE_OF_ARRAY;
	}

	for (int i = 0; i < count; ++i)
	{
		cin >> arrayData[i];
	}
}

bool checkPalindromeRange(const int arrayData[], int startIndex, int endIndex)
{
	int left = startIndex;
	int right = endIndex;

	while (left < right)
	{
		if (arrayData[left] != arrayData[right])
		{
			return false;
		}
		left++;
		right--;
	}
	return true;
}

bool canBeDividedIntoTwoPalindromes(const int arrayData[], int totalSize)
{
	if (totalSize < 2)
	{
		return false;
	}

	for (int splitPoint = 0; splitPoint < totalSize - 1; ++splitPoint)
	{
		bool firstPart = checkPalindromeRange(arrayData, 0, splitPoint);
		bool secondPart = checkPalindromeRange(arrayData, splitPoint + 1, totalSize - 1);

		if (firstPart && secondPart)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int arr[SIZE_OF_ARRAY];
	int arrayCount;

	do
	{
		cin >> arrayCount;
	} while (arrayCount < 1 || arrayCount > 64);

	cout << "Enter " << arrayCount << " elements: " << endl;
	readElements(arr, arrayCount);

	cout << boolalpha << canBeDividedIntoTwoPalindromes(arr, arrayCount);

	return 0;
}