#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n < 2) {
		cout << "not prime";
		return 0;
	}

	bool prime = true;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			prime = false;
			break;
		}
	}
	cout << (prime ? "prime" : "not prime");
	return 0;
}
