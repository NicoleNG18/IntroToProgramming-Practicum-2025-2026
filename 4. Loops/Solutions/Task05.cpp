#include <iostream>

// В случая приемаме, че ни е подадем валиден вход и затова не валидираме чослото

int main()
{
    std::cout << "Enter binary number: " << std::endl;
    
	unsigned long long binaryNum;
	std::cin >> binaryNum;

	unsigned result = 0;
	unsigned base = 1;
	while (binaryNum > 0)
	{
		result += (binaryNum % 10) * base;
		base *= 2;
		binaryNum /= 10;
	}
	
	std::cout << result;
}
