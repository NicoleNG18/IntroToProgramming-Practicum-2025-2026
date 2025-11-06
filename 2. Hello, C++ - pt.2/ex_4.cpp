#include <iostream>
using namespace std;

int main()
{
	unsigned int number;
	cin >> number;

	bool isPalindrome = ((number % 10 == number / 1000) && ((number / 10) % 10 == (number / 100) % 10));
	cout << boolalpha << isPalindrome;

	return 0;
}	