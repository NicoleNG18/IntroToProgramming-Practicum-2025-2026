#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0, total = 0, x;
	cin >> n;
	total = n * (n + 1) / 2;
	for (int i = 0; i < n - 1; i++) {
		cin >> x;
		sum += x;
	}
	cout << total - sum;
	return 0;
}

