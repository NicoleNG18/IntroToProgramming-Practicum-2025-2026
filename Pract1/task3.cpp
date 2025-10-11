#include <iostream>
int main()
{
    int a, b;
    std::cin >> a;
    std::cin >> b;

    int c = a; //c stava ravno na 10
    a = b; //a stava ravno na 15
    b = c; //b stava ravno na 10


    std::cout << "first: " << a << std::endl;
    std::cout << "second: " << b << std::endl;
}