#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;

	bool intersect = (b >= c && d >= a);
	cout << boolalpha << intersect;

	return 0;
}