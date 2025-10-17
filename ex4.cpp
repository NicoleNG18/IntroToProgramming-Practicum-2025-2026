#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int a = num / 1000; //2
	int b = (num / 100) % 10; //6
	int c = (num / 10) % 10; //6
	int d = num % 10; //2
	cout << boolalpha << (a == d && b == c);
	return 0;

}