

#include <iostream>

long long factorial(int n)
{
	long long result=1;
	for (int i = 1; i <= n; i++)
	{
		result = result + (result * (i - 1));
	}
	return result;
}

int main()
{
	int num;
	std::cin >> num;

	std::cout << factorial(num)<<std::endl;
}
