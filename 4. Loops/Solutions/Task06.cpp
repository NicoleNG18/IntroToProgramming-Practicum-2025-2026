#include <iostream>

int main()
{
    std::cout << "Enter number: " << std::endl;
  
	unsigned number;
	std::cin >> number;
	
	for(unsigned i = 1; i <= number;i++)
	{
	    for(unsigned j=1;j <= number;j++)
	    {
	        if (i < j)
                std::cout << "+";
            else if (i == j)
                std::cout << "0";
            else
                std::cout << "-";
	    }  
	    std::cout<<std::endl;
	}
}
