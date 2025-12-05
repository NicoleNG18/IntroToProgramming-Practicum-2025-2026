#include <iostream>
using namespace std;

const unsigned SIZE_OF_ARRAY = 256;

bool areEqual(const char arr1[], const char arr2[])
{
	int countLettersArr[SIZE_OF_ARRAY] = { 0 };

	for (int i = 0; arr1[i] != '\0'; ++i)
	{
		countLettersArr[arr1[i]]++;
	}
	
	for (int i = 0; arr2[i] != '\0'; ++i)
	{
		countLettersArr[arr2[i]]--;
	}

	for (int i = 0; i < SIZE_OF_ARRAY; ++i)
	{
		if (countLettersArr[i] != 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	char arr1[SIZE_OF_ARRAY];
	char arr2[SIZE_OF_ARRAY];

	cin >> arr1 >> arr2;

	cout << boolalpha << areEqual(arr1, arr2);

	return 0;
}