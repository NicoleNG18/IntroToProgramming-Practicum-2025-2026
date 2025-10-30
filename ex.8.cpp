#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	int minNum = (num1 < num2) ? num1 : num2;

	for (int i = minNum; i >= 1; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			cout << i << " ";
		}
	}
	return 0;
}

