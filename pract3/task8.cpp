#include <iostream>
int main ()
{
    int number1, number2;
    std::cin >> number1 >> number2;

    int tensNumber1 = number1 / 10;
    int tensNumber2 = number2 / 10;
    int unitsNumber1 = number1 % 10;
    int unitsNumber2 = number2 % 10;

    std::cout << number1 << number2 << " - " <<  (tensNumber1 < unitsNumber1 && unitsNumber1 < tensNumber2 && unitsNumber2 ? "YES" : "NO");

}