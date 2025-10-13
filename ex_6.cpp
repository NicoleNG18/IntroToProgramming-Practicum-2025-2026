#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	int firstNumber = num1 * 100;
	int secondNumber = num2 * 10;
	int lastNumber = num3 * 1;

	int number = firstNumber + secondNumber + lastNumber;
	cout << number;

	return 0;
}