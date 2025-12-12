#include <iostream>

//task00
//int main()
//{
//    int a, b;
//    std::cin >> a >> b;
//
//    int lowerNum = a > b ? b : a;
//    std::cout << lowerNum << std::endl;
//}

//task01
//int main()
//{
//	int x, a, b;
//	std::cin >> x >> a >> b;
//
//	if (x >= a && x <= b)
//	{
//		std::cout << std::boolalpha << true << std::endl;
//	}
//	else
//	{
//		std::cout << std:: boolalpha << false << std::endl;
//	}
//}

//task02
//int main()
//{
//	int year;
//	std::cin >> year;
//
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		std::cout << "yes" << std::endl;
//	}
//	else
//	{
//		std::cout << "no" << std::endl;
//	}
//}

//task03
//int main()
//{
//	unsigned int a, b, c;
//	std::cin >> a >> b >> c;
//
//	if (a + b > c && a + c > b && b + c > a)
//	{
//		std::cout << "yes" << std::endl;
//	}
//	else
//	{
//		std::cout << "no" << std::endl;
//	}
//}

//task04
//int main()
//{
//	int monthNum;
//	std::cin >> monthNum;
//
//	switch (monthNum)
//	{
//	case 1: std::cout << "January"; break;
//	case 2: std::cout << "February"; break;
//	case 3: std::cout << "March"; break;
//	case 4: std::cout << "April"; break;
//	case 5: std::cout << "May"; break;
//	case 6: std::cout << "June"; break;
//	case 7: std::cout << "July"; break;
//	case 8: std::cout << "August"; break;
//	case 9: std::cout << "September"; break;
//	case 10: std::cout << "October"; break;
//	case 11: std::cout << "November"; break;
//	case 12: std::cout << "December"; break;
//	default: std::cout << "Invalid input!";
//	}
//}

//task05
//int main()
//{
//	int x, y;
//	std::cout << "x = ";
//	std::cin >> x;
//	std::cout << "y = ";
//	std::cin >> y;
//
//	if (x > 0 && y > 0)
//	{
//		std::cout << "First";
//	}
//	else if (x < 0 && y > 0)
//	{
//		std::cout << "Second";
//	}
//	else if (x < 0 && y < 0)
//	{
//		std::cout << "Third";
//	}
//	else if (x > 0 && y < 0)
//	{
//		std::cout << "Fourth";
//	}
//	else if (x == 0)
//	{
//		std::cout << "x-axis";
//	}
//	else if (y == 0)
//	{
//		std::cout << "y-axis";
//	}
//	else if (x == 0 && y == 0)
//	{
//		std::cout << "Center";
//	}
//}

//task06
//int main()
//{
//	int month;
//	std::cin >> month;
//
//	if (month == 1)
//	{
//		std::cout << "31" << std::endl;
//	}
//	else if (month == 2)
//	{
//		int year;
//		std::cout << "Year: ";
//		std::cin >> year;
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			std::cout << "29" << std::endl;
//		}
//		else
//		{
//			std::cout << "28" << std::endl;
//		}
//	}
//	else if (month == 3)
//	{
//		std::cout << "31" << std::endl;
//	}
//	else if (month == 4)
//	{
//		std::cout << "30" << std::endl;
//	}
//	else if (month == 5)
//	{
//		std::cout << "31" << std::endl;
//	}
//	else if (month == 6)
//	{
//		std::cout << "30" << std::endl;
//	}
//	else if (month == 7)
//	{
//		std::cout << "31" << std::endl;
//	}
//	else if (month == 8)
//	{
//		std::cout << "31" << std::endl;
//	}
//	else if (month == 9)
//	{
//		std::cout << "30" << std::endl;
//	}
//	else if (month == 10)
//	{
//		std::cout << "31" << std::endl;
//	}
//	else if (month == 11)
//	{
//		std::cout << "30" << std::endl;
//	}
//	else if (month == 12)
//	{
//		std::cout << "31" << std::endl;
//	}
//
//}

//task07
//int main()
//{
//    int hours, minutes;
//    std::cin >> hours >> minutes;
//
//    minutes += 15;
//    if (minutes >= 60) {
//        minutes -= 60;
//        hours += 1;
//    }
//    if (hours >= 24) {
//        hours -= 24;
//    }
//
//    if (hours < 10)
//    {
//        std::cout << "0";
//    }
//    std::cout << hours << " ";
//    if (minutes < 10)
//    {
//        std::cout << "0";
//    }
//    std::cout << minutes << std::endl;
//   
//}

//task08
//int main()
//{
//	int num1, num2;
//	std::cin >> num1 >> num2;
//
//	int newNum = num1 * 100 + num2;
//	
//	int unitsNum1 = num1 % 10;
//	int tensNum1 = (num1 / 10) % 10;
//	int unitsNum2 = num2 % 10;
//	int tensNum2 = (num2 / 10) % 10;
//
//	if ((tensNum1 + 1 == unitsNum1) && ((unitsNum1 + 1 == tensNum2) && (tensNum2 + 1 == unitsNum2)))
//	{
//		std::cout << newNum << " - YES" << std::endl;
//	}
//	else
//	{
//		std::cout << newNum << " - NO" << std::endl;
//	}
//	
//}

//task09
//int main()
//{
//    int a, x, y;
//    std::cin >> a >> x >> y;
//
//    int col = x / a;
//    int row = y / a;
//
//    
//    if ((row + col) % 2 == 0)
//    {
//        std::cout << "black";
//    }       
//    else
//    {
//        std::cout << "white";
//    }
//        
//}