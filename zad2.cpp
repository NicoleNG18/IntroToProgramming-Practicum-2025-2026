#include <iostream>
using namespace std;

bool isPalindrome(int n) {
	int length = 0;
	int temp = n;
	while (temp > 0) {
		length++;
		temp >>= 1;
	}
	for (int i = 0; i < length / 2; i++) {
		int rightBit = (n >> i) & 1;
		int leftBit = (n >> (length - 1 - i)) & 1;
		if (leftBit != rightBit) return false;
	}
	return true;
}

int main()
{
	int count = 0;
	int num = 1;

	while (count < 20) {
		if (isPalindrome(num)) {
			cout << num << " ";
			count++;
		}
		num++;
	}
	cout << endl;
	return 0;
}
