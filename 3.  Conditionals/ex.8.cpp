#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	if ((num1 < 10 && num1>99) && (num2 < 10 && num2>99))
	{
		cout << "Invalid number!" << endl;
	}

	int newNumber = num1 * 100 + num2;
	int firstDigit = newNumber / 1000;
	int secondDigit = (newNumber / 100) % 10;
	int thirdDigit = (newNumber / 10) % 10;
	int forthDigit = newNumber % 10;

	if ((forthDigit > thirdDigit) && (thirdDigit > secondDigit) && (secondDigit > firstDigit))
	{
		cout << newNumber << " - YES" << endl;
	}
	else
	{
		cout << newNumber << " - NO" << endl;
	}
	return 0;
}