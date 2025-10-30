#include <iostream>
using namespace std;

int main()
{
	int n;

	do 
	{
		cin >> n;
	} while (n < 2);

	int number;
	cin >> number;
	int max1 = number;

	cin >> number;
	int max2;

	if (number > max1) 
	{
		max2 = max1;
		max1 = number;
	}
	else 
	{
		max2 = number;
	}

	for (int i = 3; i <= n; i++)
	{
		cin >> number;

		if (number > max1) 
		{
			max2 = max1;
			max1 = number;
		}
		else if (number > max2)
		{
			max2 = number;
		}
	}

	cout << max1 << " " << max2;

	return 0;
}
