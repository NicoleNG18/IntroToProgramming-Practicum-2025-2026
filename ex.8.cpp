#include <iostream>
using namespace std;

long long mixNums(long long num1, long long num2)
{
	long long mixedResult = 0;
	long long powerOf10 = 1;

	while (num1 > 0 || num2 > 0)
	{
		if (num1 > 0)
		{
			int lastDigit1 = num1 % 10;

			mixedResult = mixedResult + (powerOf10 * lastDigit1);
			powerOf10 *= 10;
			num1 /= 10;
		}

		if (num2 > 0)
		{
			int lastDigit2 = num2 % 10;

			mixedResult = mixedResult + (powerOf10 * lastDigit2);
			powerOf10 *= 10;
			num2 /= 10;
		}
	}

	long long finalResult = 0;

	while (mixedResult > 0)
	{
		int digit = mixedResult % 10;
		finalResult = finalResult * 10 + digit;

		mixedResult /= 10;
	}

	return finalResult;
}

int main()
{
	long long number1, number2;
	cin >> number1 >> number2;

	cout << mixNums(number1, number2);

	return 0;
}