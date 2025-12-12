#include <iostream>

//task01
//int main()
//{
//	int a, b;
//	std::cin >> a >> b;
//
//	bool d = a % b == 0;
//	std::cout << std::boolalpha << d << std::endl;
//}

//task02
//int main()
//{
//	int n;
//	std::cin >> n;
//
//	int b = n % 10;
//	std::cout << b << std::endl;
//}

//task03 reworked
//int main()
//{
//	int a, b, c ,d;
//	std::cin >> a >> b >> c >> d;
//
//	bool p = !(b < c || d < a);
//	std::cout << std::boolalpha << p << std::endl;
//}

//task04
//int main()
//{
//	int a;
//	std::cin >> a;
//
//	int ed = a % 10;
//	int des = (a / 10) % 10;
//	int sto = (a / 100) % 10;
//	int hil = a / 1000;
//	bool p = (ed == hil) && (des == sto);
//	std::cout << std::boolalpha << p << std::endl;
//}

//task05 reworked
//int main()
//{
//    const int SECONDS_IN_MINUTE = 60;
//    const int SECONDS_IN_HOUR = 3600;
//    const int SECONDS_IN_DAY = 86400;
//
//    int seconds;
//    std::cin >> seconds;
//
//    int days = seconds / SECONDS_IN_DAY;
//    seconds %= SECONDS_IN_DAY;
//
//    int hours = seconds / SECONDS_IN_HOUR;
//    seconds %= SECONDS_IN_HOUR;
//
//    int minutes = seconds / SECONDS_IN_MINUTE;
//    seconds %= SECONDS_IN_MINUTE;
//
//    std::cout << days << " days, " << hours << " hours, "
//        << minutes << " minutes, " << seconds << " seconds" << std::endl;
//}

//task06 reworked
//int main()
//{
//	int a, b, c;
//	std::cin >> a >> b >> c;
//	int newNum = a * 100 + b * 10 + c;
//	std::cout << newNum << std::endl;
//}

//task07
//#include <cmath>
//int main()
//{
//	int x;
//	std::cin >> x;
//	int absolute = sqrt(x * x);
//	std::cout << absolute << std::endl;
//}

//task07 reworked
//int main()
//{
//	int n;
//	std::cin >> n;
//
//	n = (n < 0) * (-n) + (n >= 0) * n;
//
//	std::cout << n;
//}

//task08
//int main()
//{
//    int km;
//    std::cin >> km;
//
//    double price = (km <= 5) * (km * 2.5) + (km > 5) * (5 * 2.5 + (km - 5) * 1.5);
//
//    price += 3; 
//
//    price += (price > 20) * (price * 0.1); 
//
//    std::cout << price << std::endl;
//}

