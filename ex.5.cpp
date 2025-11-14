#include <iostream>
using namespace std;

long long concatenateReversed(int n)
{
	long long reversedNum = 0;
	int temp = n;
	long long multiplier = 1;

	while (temp > 0)
	{
		reversedNum = (reversedNum * 10) + (temp % 10);
		temp /= 10;
		multiplier *= 10;
	}

	long long result = (reversedNum * multiplier) + n;

	return result;
}

int main()
{
	int number;
	cin >> number;

	cout << concatenateReversed(number);

	return 0;
}