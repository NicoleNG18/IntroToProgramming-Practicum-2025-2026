#include <iostream>
using namespace std;

int main()
{
	int number, position;
	cin >> number, position;

	int temp = number;
	int count = 0;

	while (temp > 0)
	{
		count++;
		temp /= 10;
	}

	if (position > count)
	{
		cout << "Don't have digit on index 5";
	}
	else
	{
		for (int i = 0; i <= count - position; i++)
		{
			number /= 10;
		}

		int digit = number % 10;
		cout << digit;
	}
	return 0;
}