#include <iostream>

bool leapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
	if (day > 31 || month > 12) {
		return false;
	}
	int daysInMonth;
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		daysInMonth = 31; break;
	case 4: case 6: case 9: case 11:
		daysInMonth = 30; break;
	case 2:
		daysInMonth = leapYear(year) ? 29 : 28; break;
	default: return false;
	}
	return day <= daysInMonth;
	}

int main()
{
	unsigned int day, month, year;
	std::cout << "Enter date: " << std::endl;
	std::cin >> day >> month >> year;
	std::cout << std::boolalpha << isValidDate(day, month, year);

	return 0;
}
