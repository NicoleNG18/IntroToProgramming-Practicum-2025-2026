#include <iostream>
using namespace std;

int main()
{
	long long binaryNum;
	cin >> binaryNum;

	long long reversedNum = 0;
	while (binaryNum > 0)
	{
		int digit = binaryNum % 10;
		reversedNum = reversedNum * 10 + digit;
		binaryNum /= 10;
	}

	long long sum = 0;
	
	while(reversedNum>0)
	{
		int digit = reversedNum % 10;
		sum = sum * 2 + digit;
		reversedNum /= 10;
	}
	std::cout << sum;
	
	return 0;
}