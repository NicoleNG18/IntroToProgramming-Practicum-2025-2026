#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n < 2) {
		cout << "Invalid input! n must be >= 2";
		return 0;
	 }

	int num;
	int max1, max2;
	cin >> max1 >> max1 >> max2;

	if (max2 > max1) {
		int temp = max1;
		max1 = max2;
		max2 = temp;
	}
	for (int i = 2; i < n; i ++) {
		cin >> num;

		if (num > max1) {
			max2 = max1;
			max1 = num;
		}
		else if (num > max2 && num != max1) {
			max2 = num;
		}

	}
	cout << max1 << "" << max2;
	return 0;

}
