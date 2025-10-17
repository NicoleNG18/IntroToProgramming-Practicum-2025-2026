#include <iostream>
using namespace std;

int main()
{
	int km;
	cin >> km;
	double fee = 3;
	double cost = (km * 2.5) - ((km - 5) * 1.5) * (km > 5);
	double total = cost + fee;
	total += total * 0.1 * (total > 20);
	cout << total;
	return 0;
}
