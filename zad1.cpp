#include <iostream>
using namespace std;

	
	unsigned int factorize(unsigned int a) {
	unsigned int sum = 1;
	for (unsigned int i = 1; i <= a; i++) {

		sum = sum * i;
	}
	return sum;
}


int main()
{
	unsigned int a;
	cout << "Enter Number: " << endl;
	cin >> a;
	cout << "Factoriel: " << factorize(a);
}

