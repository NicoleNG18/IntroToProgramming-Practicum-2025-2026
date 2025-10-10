#include <iostream>

int main () {

       int number;

       std::cin >> number;

       std::cout << std::boolalpha << (number % 2 == 0);
}