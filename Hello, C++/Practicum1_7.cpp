// Practicum1_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int num1;

	std::cin >> num1;

	int last, firstToLast, secondToLast;
	
	last = num1 % 10;
	firstToLast = ( num1 % 100 ) / 10;
	secondToLast = (num1 % 1000) / 100;

	std::cout << "*****" << secondToLast << firstToLast << last;

}

