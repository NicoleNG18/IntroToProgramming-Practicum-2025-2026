#include <iostream>
using namespace std;

int main()
{
	unsigned int number;
	cin >> number;

	for (int i = 1; i <= number; i++) // number of rows
	{
		for (int j = 1; j <= i; j++) // number of '$' per row
		{
			cout << "$";
		}
		cout << endl;
	}
	return 0;
}