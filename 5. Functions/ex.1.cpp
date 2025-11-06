#include <iostream>
using namespace std;

bool isDigit(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool isUpper(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool isLower(char ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool isAlpha(char ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		return true;
	}
	else 
	{
		return false;
	}
}


bool isAlnum(char ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
	{
		return true;
	}
	else
	{
		return false;
	}

}


char capitalize(char ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return 'A' + (ch - 'a');
	}
	else
	{
		return ch;
	}
}


char makeLower(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return ch + ('a' - 'A');
	}
	else
	{
		return ch;
	}
}


int parseInt(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return ch - '0';
	}
	else
	{
		return -1;
	}
}


const int MIN_CHAR_VALUE = 0;
const int MAX_CHAR_VALUE = 255;

char toChar(int number)
{
	char result = number;

	if (number < MIN_CHAR_VALUE || number > MAX_CHAR_VALUE)
	{
		return '\0';
    }
	else
	{
		return result;
	}
}


int myLog(int number, int base)
{
	if (number <= 0 || base < 2)
	{
		cout << "Error!";
		return -1;
	}

	int result = 0;
	int tempNum = number;

	while (tempNum >= base)
	{
		tempNum /= base;
		result++;
	}
	return result;
}


double myPow(double number, int n)
{
	int exponent = n;

	if (exponent < 0)
	{
		number = 1.0 / number;
		exponent = -exponent;
	}

	double result = 1.0;

	while (exponent > 0)
	{
		if (exponent % 2 != 0)
		{
			result *= number;
		}
		number *= number;
		exponent /= 2;
	}
	return result;
}


int myCeil(double num)
{
	int intPart = num;

	if (num > 0 && num > intPart)
	{
		return intPart + 1;
	}
	else
	{
		return intPart;
	}
}


int myFloor(double num)
{
	int intPart = num;

	if (num < 0 && num != intPart)
	{
		return intPart - 1;
	}
	else
	{
		return intPart;
	}
}


double myAbs(double num)
{
	if (num < 0)
	{
		return -num;
	}
	else
	{
		return num;
	}
}

