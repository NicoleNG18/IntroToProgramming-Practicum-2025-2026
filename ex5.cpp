#include <iostream>
using namespace std;

int main()
{
	int time;
	cin >> time;
	int days = time / 86400;
	time %= 86400;
	int hours = time / 3600;
	time %= 3600;
	int minutes = time / 60;
	int seconds = time %= 60;
	cout << "" << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds.";
	return 0;
}

