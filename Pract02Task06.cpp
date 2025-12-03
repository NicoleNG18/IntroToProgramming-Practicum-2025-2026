#include <iostream>

int main () {

    unsigned int first, second, third;

    std::cin >> first >> second >> third;

    unsigned int newnumber = first * 100 + second * 10 + third;

    std::cout << newnumber;

}