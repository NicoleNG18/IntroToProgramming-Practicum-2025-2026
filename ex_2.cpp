#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	int lastNum = number % 10;
	cout << lastNum;

	return 0;
}