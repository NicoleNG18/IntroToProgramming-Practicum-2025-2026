#include <iostream>
using namespace std;

unsigned int sequence(int a) {
	if (a <= 1)
		return a;
	return sequence(a - 1) + sequence(a - 2);
}


int main()
{
	unsigned int a;
	cout << "Enter position: " << endl;
	cin >> a;
	cout << "Number: " << sequence(a);
}


