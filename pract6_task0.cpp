

#include <iostream>


long fibonachi(int n)
{
	if (n==1)
	{
		return 0;
	}
	if (n==2)
	{
		return 1;
	}
	int num1 = 0;
	int num2 = 1;
	long res = 0;
	for ( unsigned i = 2; i < n; i++)
	{
		int sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		res = sum;
	}
	return res;
}
int main()
{
	std::cout << fibonachi(5);
}

