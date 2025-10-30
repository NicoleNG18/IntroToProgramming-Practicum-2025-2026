#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	long long temp1 = n;
	int maxDigit = 0;
	int maxCount = 0;

	for (int d = 0; d <= 9; d++) {
		long long temp2 = temp1;
		int count = 0;

		while (temp2 > 0) {
			int digit = temp2 % 10;
			if (digit == d)
				count++;
			temp2 /= 10;
		}

		if (count > maxCount || (count == maxCount && d > maxDigit)) {
			maxCount = count;
			maxDigit = d;
		}
	}

	cout << maxDigit;
	return 0;
}
