#include <iostream>
using namespace std;

int main()
{
	int a;
	double x, y;
	cin >> a >> x >> y;

	int col = x / a; // squares to the right
	int row = y / a; // squares up

	if ((col + row) % 2 == 0) // col+row -> how many steps we have taken
	{
		cout << "black" << endl;
	}
	else
	{
		cout << "white" << endl;
	}

	return 0;
}