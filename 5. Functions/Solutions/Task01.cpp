#include <iostream>

long long convertToBinary(unsigned decimalNum)
{
    long long result = 0;
	long long base = 1;
	
	while (decimalNum > 0)
	{
		result += decimalNum %  2 * base;
		base *= 10;
		decimalNum /= 2;
	}
	return result;
}

int main()
{
	std::cout << "Enter decimal number: " << std::endl;
	unsigned decimalNum;
	std::cin >> decimalNum;

	std::cout << "Binary number is: " << convertToBinary(decimalNum) << std::endl;
}
