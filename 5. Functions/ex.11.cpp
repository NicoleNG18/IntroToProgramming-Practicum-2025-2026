#include <iostream>
using namespace std;

bool isEven(unsigned int number)
{
	return (number % 2 == 0);
}


int sumOfDigits(unsigned int number)
{
	int sum = 0;

	while (number > 0)
	{
		int digit = number % 10;
		sum += digit;
		number /= 10;
	}
	return sum;
}


int prodOfDigits(unsigned int number)
{
	int product = 1;

	while (number > 0)
	{
		int digit = number % 10;
		product *= digit;
		number /= 10;
	}
	return product;
}


bool isPalindrome(unsigned long long number)
{
	if (number < 0)
	{
		return false;
	}

	if (number == 0)
	{
		return true;
	}

	long long temp = number;
	long long reversedNumber = 0;

	while (temp > 0)
	{
		int lastDigit = temp % 10;
		reversedNumber = reversedNumber * 10 + lastDigit;
		temp /= 10;
	}
	return number == reversedNumber;
}

int main()
{
	unsigned int n;
	cin >> n;

	cout << "Is even: " << boolalpha << isEven(n) << endl;
	cout << "Sum of digits: " << sumOfDigits(n) << endl;
	cout << "Prod of digits: " << prodOfDigits(n) << endl;
	cout << "Is palindrome: " << isPalindrome(n) << endl;
}