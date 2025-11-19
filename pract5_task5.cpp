

#include <iostream>


bool areOnCircle (int a, int b, int c, int d)
{
	if ((a*a)+(b*b)==(c*c)+(d*d))
	{
		return true;
	}
	return false;
}

int main()
{
    int coord1, coord2, coord3, coord4;
    std::cin >> coord1 >> coord2 >> coord3 >> coord4;

	std::cout << areOnCircle(coord1, coord2, coord3, coord4);
}

