#include <iostream>
using namespace std;

int main()
{
	int x, a, b;
	cin >> x >> a >> b;
	cout << (a <= x && x <= b ? "true" : "false");
	return 0;
}

