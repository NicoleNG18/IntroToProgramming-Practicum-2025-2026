#include <iostream>
using namespace std;

int main()
{
	unsigned int month;
	cin >> month;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "31" << endl;
		break;
	case 2:
		int year;
		cout << "Year: ";
		cin >> year;

		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			cout << "29" << endl;
		}
		else
		{
			cout << "28" << endl;
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "30" << endl;
		break;
	default:
		cout << "Invalid month!";
		break;
	}
	return 0;
}