// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int length, width;

	std::cin >> length >> width;

	std::cout << "Perimeter = " << (length + width) * 2 << std::endl;
	std::cout << "Area = " << (length * width) << std::endl;

}
