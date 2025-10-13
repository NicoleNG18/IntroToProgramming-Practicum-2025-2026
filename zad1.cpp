#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    int perimeter = 2 * (a + b);
    int area = a * b;

    std::cout << "Perimeter = " << perimeter << std::endl;
    std::cout << "Area = " << area << std::endl;
}
