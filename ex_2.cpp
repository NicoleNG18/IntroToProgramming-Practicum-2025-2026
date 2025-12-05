#include <iostream>
using namespace std;

const unsigned SIZE_OF_ARRAY = 30;

bool isBalanced(char arr[], unsigned length)
{
	int counter = 0;

	for (int i = 0; i < length; ++i)
	{
		if (arr[i] == '(')
		{
			counter++;
		}
		else if (arr[i] == ')')
		{
			counter--;

			if (counter < 0)
			{
				return false;
			}
		}
	}
	return counter == 0;
}

int main()
{
	int n;

	do
	{
		cin >> n;
	} while (n < 1 || n>30);

	char arrSimbols[SIZE_OF_ARRAY];

	for (int i = 0; i < n; ++i)
	{
		cin >>arrSimbols[i];
	}

	cout << boolalpha << isBalanced(arrSimbols, n);

	return 0;
}