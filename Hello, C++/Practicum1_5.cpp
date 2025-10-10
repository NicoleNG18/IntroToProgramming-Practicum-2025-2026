// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int num;
	
	std::cin >> num;

	std::cout << std::boolalpha << num % 2 == 0;

}