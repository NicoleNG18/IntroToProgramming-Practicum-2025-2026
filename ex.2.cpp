#include <iostream>
using namespace std;

int reversedNumber(int number)
{
	int result = 0;

	while (number > 0)
	{
		int lastDigit = number % 10;
		result = lastDigit + (result * 10);
		number /= 10;
	}
	return result;
}

int main()
{
	int number;
	cin >> number;

	cout << reversedNumber(number);

	return 0;
}