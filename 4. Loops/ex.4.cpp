#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	int i = (num1 > num2) ? num1 : num2;

	while (true)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{
			cout << i;
			break;
		}
		i++;
	}
	return 0;
}