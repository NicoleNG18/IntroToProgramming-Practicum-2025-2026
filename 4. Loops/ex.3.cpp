#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	int temp;

	while (num2 != 0)
	{
		temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}
	cout << num1;

	return 0;
}