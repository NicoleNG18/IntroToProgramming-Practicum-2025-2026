#include <iostream>
using namespace std;

int nod(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main()
{
	int a, b;
	cin >> a >> b;

	int nok = a * b / nod(a, b);
	cout << nok;
	return 0;
}

