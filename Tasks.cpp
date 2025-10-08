#include <iostream>
using namespace std;

int main()
{
	//отпечатва на екрана следното съобщение

	cout << "Hello, C++" << endl;

	/*въвежда броя ябълки, круши и банани, които трябва да се купят.
	Програмата да изведе съобщение с напомняне за покупките.*/

	int appels, pears, bananas;
	cin >> appels >> pears >> bananas;

	cout << "Don't forget to buy " << appels << " apples, " << pears << " pears and " << bananas << " bananas!" << endl;

	return 0;


	/*Въведете дължината и широчината на правоъгълник.
	Програмата да изведе лицето и обиколката му*/

	int length, width;
	cin >> length >> width;

	int perimeter = 2 * length + 2 * width;
	int area = length * width;

	cout << "Perimeter = " << perimeter << endl << "Area = " << area << endl;

	return 0;


	/*Въведете сума в евро (реално число).
	Отпечатайте сумата в долари и йени според фиксиран курс.*/

	double euro;
	cin >> euro;

	double dollars = euro * 1.1;
	double yen = euro * 145;

	cout << "dollars = " << dollars << endl << "yen = " << yen << endl;

	return 0;


	//Въведете две цели числа и разменете стойностите им.

	int first, second;
	cin >> first >> second;

	int temp = first;
	first = second;
	second = temp;

	cout << "first = " << first << endl << "second = " << second << endl;

	return 0;


	/*Въведете положително трицифрено число.
	Намерете и отпечатайте всяка цифра поотделно, както и тяхната сума. */

	int number;
	cin >> number;

	int units = number % 10;
	int tens = number / 10 % 10;
	int hundreads = number / 100;
	int sum = units + tens + hundreads;

	cout << "units = " << units << endl << "tens = " << tens << endl << "hundreads = " << hundreads << endl << "sum = " << sum << endl;

	return 0;


	//Създайте програма, която въвежда цяло число и извежда дали числото е четно или нечетно.

	int number;
	cin >> number;

	cout << boolalpha << (number % 2 == 0) << endl;

	return 0;


	/*Въведете две естествени двуцифрени числа a и b. Програмата да изведе:
	  произведението на двете числа,
	  последната цифра от произведението,
	  дали тази цифра е четна или нечетна.*/

	int num1, num2;
	cin >> num1 >> num2;

	int prod = num1 * num2;
	int lastDigit = prod % 10;

	cout << "Prod: " << prod << endl << "Last digit: " << lastDigit << endl;
	cout << "Is odd: " << boolalpha << (lastDigit % 2 != 0) << endl;

	return 0;


	/*Въведете произволен 8-цифрен код.
	Отпечатайте само последните 3 цифри, останалите заменете с *.*/

	int number;
	cin >> number;

	int lastThreeDigits = number % 1000;

	cout << "*****" << lastThreeDigits << endl;

	return 0;
}