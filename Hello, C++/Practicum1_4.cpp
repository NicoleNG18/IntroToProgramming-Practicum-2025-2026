#include <iostream>

int main()
{
	int num;

	std::cin >> num;

	int units = num % 10;
	int tens = (num / 10) % 10;
	int hundreds = num / 100;

	std::cout << "Units = " << units << std::endl;
	std::cout << "Tens = " << tens << std::endl;
	std::cout << "Hundreds = " << hundreds << std::endl;
	std::cout << "Sum = " << units + tens + hundreds;

}
