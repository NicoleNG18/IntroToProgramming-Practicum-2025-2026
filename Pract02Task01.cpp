#include <iostream>

int main () {

    int number1, number2;

    std:: cin >> number1 >> number2;

   // std:: cout << std::boolalpha << ((number2 % number1) == 0);

    bool expr = number2 % number1 == 0;
    std::cout << std::boolalpha << expr;

}