#include <iostream>
using namespace std;

int main()
{
	//zad 0

	cout << "Hello, C++" << endl;

	//zad 0

	int appels, pears, bananas;
	cin >> appels >> pears >> bananas;

	cout << "Don't forget to buy " << appels << " apples, " << pears << " pears and " << bananas << " bananas!" << endl;

	return 0;


	//zad 1

	int length, width;
	cin >> length >> width;

	int perimeter = 2 * length + 2 * width;
	int area = length * width;

	cout << "Perimeter = " << perimeter << endl << "Area = " << area << endl;

	return 0;


	//zad 2

	double euro;
	cin >> euro;

	double dollars = euro * 1.1;
	double yen = euro * 145;

	cout << "dollars = " << dollars << endl << "yen = " << yen << endl;

	return 0;


	//zad 3

	int first, second;
	cin >> first >> second;

	int temp = first;
	first = second;
	second = temp;

	cout << "first = " << first << endl << "second = " << second << endl;

	return 0;


	//zad 4

	int number;
	cin >> number;

	int units = number % 10;
	int tens = number / 10 % 10;
	int hundreads = number / 100;
	int sum = units + tens + hundreads;

	cout << "units = " << units << endl << "tens = " << tens << endl << "hundreads = " << hundreads << endl << "sum = " << sum << endl;

	return 0;


	//zad 5

	int number;
	cin >> number;

	cout << boolalpha << (number % 2 == 0) << endl;

	return 0;


	//zad 6

	int num1, num2;
	cin >> num1 >> num2;

	int prod = num1 * num2;
	int lastDigit = prod % 10;

	cout << "Prod: " << prod << endl << "Last digit: " << lastDigit << endl;
	cout << "Is odd: " << boolalpha << (lastDigit % 2 != 0) << endl;

	return 0;


	//zad 7

	int number;
	cin >> number;

	int lastThreeDigits = number % 1000;

	cout << "*****" << lastThreeDigits << endl;

	return 0;
}