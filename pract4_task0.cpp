

#include <iostream>

int main()
{
	int	row;
	int sign;
	int dollar;

	std::cin >> row;

	for (sign = 1; sign <= row; sign++)
	{
		for ( dollar = 1; dollar <= sign ; dollar++)
		{
			std::cout << "&";
		}
		std::cout<<std::endl;
	}
}


