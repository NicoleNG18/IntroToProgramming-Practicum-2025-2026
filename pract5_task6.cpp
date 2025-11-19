

#include <iostream>

long long square(int x)
{
	return x * x;
}

long long sumOfSquares(int n)
{
	int sum = 0;
	for (int i = 0; i <=n; ++i)
	{
		int currSquare = square(i);

		sum += currSquare;
	}
	return sum;
}

int main()
{
	int  num;
	std::cin >> num;
	std::cout << sumOfSquares(num);
}

