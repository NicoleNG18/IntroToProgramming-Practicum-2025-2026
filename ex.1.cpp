#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	bool isPrime = true;

	for (int i = 2; i * i <= number; i++)
	{
		if (number % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	
	if (isPrime)
	{
		cout << "prime";
	}
	else
	{
		cout << "not prime";
	}

	return 0;
}