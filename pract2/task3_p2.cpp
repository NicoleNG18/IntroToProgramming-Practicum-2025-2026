#include <iostream>
int main ()
{
    int a, b;
    std:: cin >> a >> b;


    int c, d;
    std::cin >> c >> d;


    bool intersection = (a < c &&  d < b) || (a < c && c < b && b < d);

    std::cout << std::boolalpha << intersection << std::endl;
}