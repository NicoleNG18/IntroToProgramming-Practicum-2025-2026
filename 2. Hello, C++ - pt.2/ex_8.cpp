#include <iostream>
using namespace std;

int main()
{
	int km;
	cin >> km;

	double sum = (2.5 * (km <= 5) * km) + ((km > 5) * ((2.5 * 5) + (1.5 * (km - 5))));
	// if the km are <= 5, then only the first brackets will be executed, because the second will be false (0), similary for km > 5

	sum = sum * (1 + 0.1 * (sum > 20));

	sum += 3;
	cout << sum;

	return 0;
}


