#include <iostream>
using namespace std;

int main()
{
	long long number;
	cin >> number;

	int theMostCommonDigit = 0;
	int digit = 0;

	for (int i = 0; i <= 9; i++)
	{
		long long temp = number;
		int count = 0;

		while (temp > 0)
		{
			if (temp % 10 == i)
			{
				count++;
			}
			temp /= 10;
		}
		if (count > theMostCommonDigit || (count == theMostCommonDigit && i > digit))
		{
			theMostCommonDigit = count;
			digit = i;
		}
	}
	cout << digit;

	return 0; 

}