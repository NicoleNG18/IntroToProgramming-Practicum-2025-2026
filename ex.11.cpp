#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	int sum = number * (number + 1) / 2;
	int numbers;

	for (int i = 1; i <= number - 1; i++)
	{
		cin >> numbers;
		sum -= numbers; 
	}
	cout << sum;

	return 0;
}