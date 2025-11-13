#include <iostream>

int main()
{
    std::cout << "Enter numbers count: " << std::endl;
	unsigned numsCount;
	std::cin >> numsCount;

	int secondMax = INT32_MIN, max = INT32_MIN;
	for (int i = 0; i < numsCount; i++)
	{
	    std::cout<<"Enter number: " << std::endl;
		int num;
		std::cin >> num;
		if (num > max)
		{
			secondMax = max;
			max = num;
		}
		else if (num < max && num > secondMax)
		{
			secondMax = num;
		}
	}
	std::cout << max << " " << secondMax;
}
