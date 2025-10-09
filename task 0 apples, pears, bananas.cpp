// task 0 apples, pears, bananas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
   
	int	apples;
	int	pears;
	int bananas;

	std::cout << "Въведете броя на ябълките, които трябва да се купят:" << std::endl;
	std::cin >> apples;

	std::cout << "Въведете броя на крушите, които трябва да се купят:" << std::endl;
	std::cin >> pears;

	std::cout << "Въведете броя на бананите, които трябва да се купят:" << std::endl;
	std::cin >> bananas;

	std::cout << " Don't forget to buy " << apples << " apples " << pears << " pears and " << bananas << " bananas! " << std::endl;

	return 0;
}

