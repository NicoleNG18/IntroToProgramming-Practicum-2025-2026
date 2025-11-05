
#include <iostream>

int main()
{
    unsigned bin;
	unsigned num;
	std::cin >> bin;
	int decimal = 0;
	int base = 1; 

	while (bin>0)
	{
		int lastDigit = bin % 10;
		decimal += lastDigit * base;
		base *= 2;
		bin /= 10;
	}
}
//решено с помощ от практикум на 04.11.
