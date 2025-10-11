#include <iostream>
int main()
{
    unsigned int a, b;
    std::cout << "Insert lenght and width of a rectangle in cm:" << std::endl;
    std::cin >> a >> b;

    std::cout << "Perimeter= " << 2 * (a + b) << std::endl;
    std::cout << "Area= " << a * b << std::endl;
    return 0;
}