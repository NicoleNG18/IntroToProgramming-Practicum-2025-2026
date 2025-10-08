#include <iostream>
using namespace std;

int main()
{
    // zad 0
	cout << "Hello, C++" << endl;

	// zad 0
	int apples, pears, bananas;
	cin >> apples >> pears >> bananas;
	cout << "Don't forget to buy" << apples << "apples," <<  pears  << "pears and" << bananas << "bananas!" << endl;

	return 0;


	//zad 1
	double a, b;
	double area = a * b;
	double perimeter = 2 * (a + b);
	cin >> a >> b;
	cout << "Perimeter =" << perimeter << endl;
	cout << "Area =" << area << endl;

	return 0;


	//zad 2
	double euros;
	double dollars = euros * 1.1;
	double yen = euros * 145;
	cin >> euros;
	cout << "dollars =" << dollars << endl;
	cout << "yen =" << yen << endl;

	return 0;


    //zad 3
	int a, b;
	int swap = a;
	a = b;
	b = swap;
	cin >> a >> b;
	cout << "first =" << a << endl;
	cout << "second =" << b << endl;

	return 0;


	//zad 4
	int num;
	int units = num % 10;
	int tens = (num / 10) % 10;
	int hundreds = num / 100;
	int sum = units + tens + hundreds;
	cin >> num;
	cout << "units =" << units << endl;
	cout << "tens =" << tens << endl;
	cout << "hundreds =" << hundreds << endl;
	cout << "sum =" << sum << endl;

	return 0;


	//zad 5
	int n;
	bool isEven = (n % 2 == 0);
	cin >> n;
	cout << (isEven ? "true" : "false") << endl;
	 
	return 0;


	//zad 6
	int a, b;
	int prod = a * b;
	int lastDigit = prod % 10;
	bool isOdd = (lastDigit % 2 != 0);
	cin >> a >> b;
	cout << "Prod: " << prod << endl;
	cout << "Last Digit: " << lastDigit << endl;
	cout << "Is odd: " << (isOdd ? "true" : "false") << endl;

	return 0;


	//zad 7
	int code;
	int last3 = code % 1000;
	cin >> code;
	cout << "*****" << last3 << endl;

	return 0;



}

