#include <iostream>
using namespace std;

bool isPerfect(int n) {
	int sum = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	return sum == n;
}

int main()
{
	int num;
	cout << "Enter number: " << endl;
	cin >> num;
	cout << boolalpha << isPerfect(num) << endl;

	return 0;
}
