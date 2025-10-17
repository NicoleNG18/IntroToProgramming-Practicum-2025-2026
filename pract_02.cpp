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

//task03
//int main()
//{
//	int a, b, c ,d;
//	std::cin >> a >> b >> c >> d;
//
//	bool p = !(b < c) || (d < a);
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

//task05
//int main()
//{
//	int seconds;
//	std::cin >> seconds;
//	
//	int days = seconds / 86400;
//	seconds %= 86400;
//
//	int hours = seconds / 3600;
//	seconds %= 3600;
//
//	int minutes = seconds / 60;
//	seconds %= 60;
//
//	std::cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
//}

//task06
//int main()
//{
//	int a, b, c;
//	std::cin >> a >> b >> c;
//
//	std::cout << a << b << c;
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

