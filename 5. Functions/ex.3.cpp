#include <iostream>
using namespace std;

int numOfDigits(int number)
{
	int count = 0;

	while (number > 0)
	{
		number /= 10;
		count++;
	}
	return count;
}

int main()
{
	int number;
	cin >> number;

	cout << numOfDigits(number);

	return 0;
}