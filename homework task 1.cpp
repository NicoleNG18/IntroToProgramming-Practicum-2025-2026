
#include <iostream>

int main()
{
	double length;
	double width;
	double area;
	double perimeter;

	std::cin >> length >> width;

	perimeter = 2 * (length + width);	

	area = length * width;


	std::cout << "Perimeter = " << perimeter << std::endl;
	std::cout << "Area = " << area << std::endl;

	return	0;

   
}