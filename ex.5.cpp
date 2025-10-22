#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	if (x == 0 && y == 0)
	{
		cout << "At the origin." << endl;
	}
	else if (x == 0 || y == 0)
	{
		cout << "On axis." << endl;
	}
	else if (x > 0 && y > 0)
	{
		cout << "First." << endl;
	}
	else if (x < 0 && y > 0)
	{
		cout << "Second." << endl;
	}
	else if (x < 0 && y < 0)
	{
		cout << "Third." << endl;
	}
	else if (x > 0 && y < 0)
	{
		cout << "Forth." << endl;
	}
	return 0;
}