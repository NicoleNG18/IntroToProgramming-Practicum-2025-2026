#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	cout << num * (1 - 2 * (num > 0));
	return 0;
}
