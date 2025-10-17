#include <iostream>
using namespace std;

int main() {	
	int num;
	cin >> num;
	cout << (num * (num / 10 == 0)) + (num % 10) * (num / 10 != 0);
	return 0;
}