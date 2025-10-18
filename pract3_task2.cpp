
#include <iostream>

int main()
{
	int year;
	std::cin >> year;
	if (year%4==0 && year%100!=0)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}
}

