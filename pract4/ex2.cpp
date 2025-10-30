#include <iostream>
using namespace std;

int main()
{
	long long num;
	int pos;
	cin >> num >> pos;

	int lenght = 0;
	long long temp = num;
	while (temp > 0) {
		temp /= 10;
		lenght++;
	}

	if (pos<1 || pos > lenght) {
		cout << "Dont have digit on index" << pos;
		return 0;
	}

	for (int i = 0; i < lenght - pos; i++) {
			num /= 10;
	}
	int digit = num % 10;
	cout << digit;

	return 0;
}
