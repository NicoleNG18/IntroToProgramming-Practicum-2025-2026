#include <iostream>

int main()
{
  std::cout << "Enter positive number: " << std::endl;
  
	unsigned number;
	std::cin >> number;
    
  //тук ползваме флаговата ни променлива, която помага да си пазим състоянието на числото(дали е просто или не)
	bool isPrime = true;

	for (unsigned i = 2; i * i <= number; i++) 
	{
		if (number % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	
	std::cout << (isPrime ? "Prime" : "Not prime");
}
