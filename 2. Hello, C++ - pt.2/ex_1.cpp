#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	bool ifFirstNumIsDivisorOfSecond = (num1 % num2 == 0);
	cout << boolalpha << ifFirstNumIsDivisorOfSecond;

	return 0;
}