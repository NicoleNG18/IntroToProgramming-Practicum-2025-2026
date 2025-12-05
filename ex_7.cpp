#include <iostream>
using namespace std;

void factorization(int n)
{
	int prime[50];
	int power[50];
	int cnt = 0, divisor = 2;

	while (n > 1)
	{
		int count = 0;

		while (n % divisor == 0)
		{
			n /= divisor;
			count++;
		}

		if (count > 0)
		{
			prime[cnt] = divisor;
			power[cnt] = count;
			cnt++;
		}
		divisor++;
	}

	for (int i = 0; i < cnt; ++i)
	{
		cout << prime[i];

		if (power[i] > 1)
		{
			cout << "^" << power[i];
		}

		if (i < cnt - 1)
		{
			cout << " * ";
		}
	}
}

int main()
{
	int n;
	cin >> n;

	factorization(n);

	return 0;
}