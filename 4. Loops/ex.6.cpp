#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			if (i == j)
			{
				cout << '0';
			}
			else if (i < j)
			{
				cout << '+';
			}
			else
			{
				cout << '-';
			}
		}
		cout << endl;
	}
	return 0;
}