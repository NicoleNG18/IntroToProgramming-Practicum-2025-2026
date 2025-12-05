#include <iostream>
using namespace std;

bool isLeap(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isDateValid(int day, int month, int year)
{
	if (year < 1)
	{
		return false;
	}

	if (day < 1 || day>31)
	{
		return false;
	}

	if (month < 1 || month>12)
	{
		return false;
	}

	int daysInMonth;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		daysInMonth = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		daysInMonth = 30;
		break;
	case 2:
		if (isLeap(year))
		{
			daysInMonth = 29;
		}
		else
		{
			daysInMonth = 28;
		}
		break;
	default:
		return false;
		break;
	}

	if (day > daysInMonth)
	{
		return false;
	}

	return true;
}

int main()
{
	int day, month, year;
	cin >> day >> month >> year;

	cout << boolalpha << isDateValid(day, month, year) << endl;

	return 0;
}