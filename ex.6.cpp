#include <iostream>
using namespace std;

void printDiamond(int n)
{
	for (int i = 1; i <= n; ++i) // upper half
	{
		for (int j = 1; j <= n - i; ++j) // spaces
		{
			cout << " ";
		}

		for (int j = 1; j <= 2 * i - 1; ++j) // print *
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = n - 1; i >= 1; --i) // lower half
	{
		for (int j = 1; j <= n - i; ++j) // spaces
		{
			cout << " ";
		}

		for (int j = 1; j <= 2 * i - 1; ++j)  // print *
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	int number;
	cin >> number;

	printDiamond(number);

	return 0;
}