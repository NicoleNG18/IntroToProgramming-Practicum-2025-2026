

#include <iostream>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

	if (a+b>c && a+c>b && b+c>a)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}
}

