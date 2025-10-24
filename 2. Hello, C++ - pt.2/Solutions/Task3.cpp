#include <iostream>

int main()
{
	double a, b, c, d;
	
	std::cout<< "Enter four numbers: " << std::endl;
	std::cin >> a >> b >> c >> d;

	bool areCrossing = (b >= c) && (a <= d);
	std::cout << "Are the intervals crossing: " << std::boolalpha << areCrossing;
}
