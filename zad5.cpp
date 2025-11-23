#include <iostream>
using namespace std;

long long revNumber(long long n) {
	long long rev = 0;
	while (n > 0) {
		rev = rev * 10 + (n % 10);
		n /= 10;
	}
	return rev;
}

long long revConcatenation(long long n) {
	long long rev = revNumber(n);
	long long temp = n;
	long long pow = 1;
	while (temp > 0) {
		pow *= 10;
		temp /= 10;
	}
	return rev * pow + n;
}

int main()
{
	long long n;
	cout << "Enter number: " << endl;
	cin >> n;
	cout << revConcatenation(n) << endl;

	return 0;
}
