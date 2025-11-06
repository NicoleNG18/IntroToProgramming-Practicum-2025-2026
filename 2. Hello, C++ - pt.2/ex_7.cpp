#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int abs = num * (num >= 0) + (-num) * (num < 0);
	cout << abs;

	return 0;
}