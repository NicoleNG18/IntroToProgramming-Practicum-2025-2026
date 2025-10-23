#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	if (x > 0 && y > 0) {
		cout << "First";
	}
	else if (x > 0 && y < 0) {
		cout << "Fourth";
	}
	else if (x < 0 && y < 0) {
		cout << "Third";
	}
	else if (x < 0 && y > 0) {
		cout << "Second";
	}
	else if (x == 0 || y == 0) {
		cout << "On axis";
	}
	return 0;
}