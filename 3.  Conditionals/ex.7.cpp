#include <iostream>
using namespace std;

int main()
{
	unsigned int hours, minutes;
	cin >> hours >> minutes;

	if (minutes < 45)
	{
		if (hours >= 24)
		{
			hours = 0;
		}
		cout << ((hours < 10) ? "0" : "") << hours << ":" << (minutes += 15) << endl;
	}
	else if (minutes >= 45)
	{
		minutes -= 45;
		hours += 1;
		if (hours >= 24)
		{
			hours = 0;
		}
		cout << ((hours < 10) ? "0" : "") << hours << ":" << ((minutes < 10) ? "0" : "") << minutes << endl;
	}
	return 0;
}