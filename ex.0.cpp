#include <iostream>
using namespace std;

long long decimalNumToBinNum(long long number)
{
	if (number == 0)
	{
		return 0;
	}

	long long binaryNumber = 0;
	long long temp = 1;

	while (number > 0)
	{
		long long remainder = number % 2;
		binaryNumber = binaryNumber + (remainder * temp);
		number /= 2;

		temp *= 10;
	}

	return binaryNumber;
}

int main()
{
	int number;
	cin >> number;

	cout << decimalNumToBinNum(number);

	return 0;
}