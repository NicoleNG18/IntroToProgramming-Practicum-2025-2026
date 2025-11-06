#include <iostream>
using namespace std;

long long sortDigits(int number)
{
	if (number <= 0)
	{
		return 0;
	}

	int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
	int count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;

	int tempNum = number;

	while (tempNum > 0) //броим коя цифра колко пъти я има
	{
		int digit = tempNum % 10;

		switch (digit)
		{
		case 0:
			count0++;
			break;
		case 1:
			count1++;
			break;
		case 2:
			count2++;
			break;
		case 3:
			count3++;
			break;
		case 4:
			count4++;
			break;
		case 5:
			count5++;
			break;
		case 6:
			count6++;
			break;
		case 7:
			count7++;
			break;
		case 8:
			count8++;
			break;
		case 9:
			count9++;
			break;
		}
		tempNum /= 10;
	}

	long long result = 0;

	for (int digit = 9; digit >= 0; --digit)
	{
		int count = 0;

		switch (digit)
		{
		case 9:
			count = count9;
			break;
		case 8:
			count = count8;
			break;
		case 7:
			count = count7;
			break;
		case 6:
			count = count6;
			break;
		case 5:
			count = count5;
			break;
		case 4:
			count = count4;
			break;
		case 3:
			count = count3;
			break;
		case 2:
			count = count2;
			break;
		case 1:
			count = count1;
			break;
		case 0:
			count = count0;
			break;
		}

		for (int i = 0; i < count; ++i)
		{
			result = (result * 10) + digit;
		}
	}
	return result;
}

int main()
{
	int number;
	cin >> number;

	cout << sortDigits(number);

	return 0;
}