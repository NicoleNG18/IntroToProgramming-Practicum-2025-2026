#include <iostream>

int main () {

    unsigned int number;

    std::cin >> number;

    if ((number / 10) == 0) {
        std::cout << number;
    } else {
        std::cout << (number % 10);
    }

    /* или с тернариния оператор, защото нямаме else if ?
    std::cout << (((number / 10) == 0) ? number : number % 10);*/
}
