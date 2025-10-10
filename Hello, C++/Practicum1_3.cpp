// Practicum1_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	double balEur, balYen, balUsd;

	std::cin >> balEur;

	balYen = balEur * 145;
	balUsd = balEur * 1.1;

	std::cout << "dollars = " << balUsd << std::endl;
	std::cout << "yen = " << balYen << std::endl;


}

