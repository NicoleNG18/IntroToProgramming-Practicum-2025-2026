

#include <iostream>

int main()
{
	int	first, second;

	std::cout << " Въведете двете числа: ";
	std::cin >> first >> second;

	std::swap(first, second);

	std::cout << "\nСлед размяната: " << std::endl;
	std::cout << " first = " << first << std::endl;
	std::cout << " second = " << second << std::endl;

	return 0;
	

}

