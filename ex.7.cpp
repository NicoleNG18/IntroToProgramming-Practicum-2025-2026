#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	for (int x = 1; x < number; x++)
	{
		int y = number - x;
		cout << "x = " << x << " y = " << y << endl;
	}
	return 0;
}