#include <iostream>
using namespace std;

int main()
{
	int x, a, b;
	cin >> x >> a >> b;

	if (x >= a && x <= b)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	return 0;
}